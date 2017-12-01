#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonSearch_clicked();

    void DispalyWord(QString wordstr);

    void on_pushButtonPrevious_clicked();

    void on_pushButtonNext_clicked();

    void on_tableWidget_itemSelectionChanged();

    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
