#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QStringList>
#include <QtDebug>
#include <QLibrary>
#include <QMessageBox>
#include <QDir>
#include <QColor>
#include <QItemSelectionModel>

#include "mainwindow.h"
#include "ui_mainwindow.h"

QSqlDatabase db;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName("..\\LEXIKO.sqlite");
    //db.setDatabaseName("C:\\Users\\nlk\\Desktop\\LEXIKO.sqlite");
    db.setDatabaseName("LEXIKO.sqlite");

    bool db_ok = db.open();
    if (!db_ok) {
        QMessageBox::information(this,"Error","Cannot Open DB!");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSearch_clicked()
{
    QString patternstr = ui->lineEdit->text();
    QString sqlstr = "select word from GreekWords where word like '" + patternstr + "'";

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query(sqlstr);
    QSqlRecord rec = query.record();
    ui->tableWidget->setColumnCount(1);

    QString headerstr="Λέξη σε Αρχαία Γλώσσα";
    ui->tableWidget->setHorizontalHeaderLabels(headerstr.split(";"));
    //ui->tableWidget->
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableWidget->setColumnWidth(0, ui->tableWidget->width());

    QString linestr, itemstr;
    int tbcurrow=0;

    while (query.next()) {
        // Add a new row to table
        tbcurrow = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(tbcurrow);

        for (int j=0; j<rec.count(); j++ ) {
            QTableWidgetItem *pCell = new QTableWidgetItem(query.value(j).toString());
            if (tbcurrow % 2 == 0) {
                pCell->setBackgroundColor(QColor(255,245,200));
            }
            ui->tableWidget->setItem(tbcurrow,j,pCell);
        } // end for
    } // end while

}

void MainWindow::DispalyWord(QString wordstr) {

    QString sqlstr = "select description from GreekWords where word = '" + wordstr + "'";
    QSqlQuery query(sqlstr);
    QSqlRecord rec = query.record();

    ui->textEdit->clear();
    while (query.next()) {
        QString desstr = query.value(0).toString();
        qDebug() << desstr << endl;
        ui->textEdit->append(desstr);
        ui->textEdit->setAlignment(Qt::AlignJustify);
    }

}


void MainWindow::on_pushButtonPrevious_clicked()
{
    QModelIndex currentIndex = ui->tableWidget->currentIndex();
    int nearow = currentIndex.row()-1;
    ui->tableWidget->selectRow(nearow);
    ui->tableWidget->setFocus();
}

void MainWindow::on_pushButtonNext_clicked()
{
    QModelIndex currentIndex = ui->tableWidget->currentIndex();
    int nearow = currentIndex.row()+1;
    ui->tableWidget->selectRow(nearow);
    ui->tableWidget->setFocus();
}

void MainWindow::on_tableWidget_itemSelectionChanged()
{
    QModelIndex currentIndex = ui->tableWidget->currentIndex();
    QString cell_text_str = ui->tableWidget->item(currentIndex.row(),0)->text();
    DispalyWord(cell_text_str);
}

void MainWindow::on_tableWidget_clicked(const QModelIndex &index)
{
    DispalyWord(ui->tableWidget->item(index.row(),0)->text());
}
