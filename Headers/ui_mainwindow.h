/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSearch;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *pushButtonPrevious;
    QPushButton *pushButtonNext;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(680, 567);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(67, 67, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("lexico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButtonSearch = new QPushButton(centralWidget);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));

        gridLayout_2->addWidget(pushButtonSearch, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        tableWidget->setFont(font1);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 2);

        pushButtonPrevious = new QPushButton(centralWidget);
        pushButtonPrevious->setObjectName(QStringLiteral("pushButtonPrevious"));

        gridLayout->addWidget(pushButtonPrevious, 1, 0, 1, 1);

        pushButtonNext = new QPushButton(centralWidget);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));

        gridLayout->addWidget(pushButtonNext, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(0, 0, 80, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        textEdit->setPalette(palette1);
        textEdit->setFont(font1);

        gridLayout_2->addWidget(textEdit, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\316\233\316\265\316\276\316\271\316\272\317\214 \317\204\316\267\317\202 \316\221\317\201\317\207\316\261\316\257\316\261\317\202 \316\225\316\273\316\273\316\267\316\275\316\271\316\272\316\256\317\202 \316\223\316\273\317\216\317\203\317\203\316\261\317\202 (LIDDELL & SCOTT)", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButtonPrevious->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButtonNext->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
