/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *goToServer;
    QPushButton *goToClient;
    QPushButton *exit;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 30, 100, 25));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        goToServer = new QPushButton(centralwidget);
        goToServer->setObjectName(QStringLiteral("goToServer"));
        goToServer->setGeometry(QRect(230, 190, 93, 29));
        QFont font1;
        font1.setPointSize(12);
        goToServer->setFont(font1);
        goToClient = new QPushButton(centralwidget);
        goToClient->setObjectName(QStringLiteral("goToClient"));
        goToClient->setGeometry(QRect(440, 190, 93, 29));
        goToClient->setFont(font1);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(350, 350, 93, 29));
        exit->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 430, 370, 20));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 120, 247, 25));
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\217\214\346\234\272\351\200\232\344\277\241", Q_NULLPTR));
        goToServer->setText(QApplication::translate("MainWindow", "Server", Q_NULLPTR));
        goToClient->setText(QApplication::translate("MainWindow", "Client", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Copyright@TongYiheng,MaZhaojia 2021.6", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Choose your role : ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
