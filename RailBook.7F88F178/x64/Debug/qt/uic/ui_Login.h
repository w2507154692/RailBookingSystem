/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginClass)
    {
        if (LoginClass->objectName().isEmpty())
            LoginClass->setObjectName("LoginClass");
        LoginClass->resize(600, 400);
        menuBar = new QMenuBar(LoginClass);
        menuBar->setObjectName("menuBar");
        LoginClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginClass);
        mainToolBar->setObjectName("mainToolBar");
        LoginClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LoginClass);
        centralWidget->setObjectName("centralWidget");
        LoginClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LoginClass);
        statusBar->setObjectName("statusBar");
        LoginClass->setStatusBar(statusBar);

        retranslateUi(LoginClass);

        QMetaObject::connectSlotsByName(LoginClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginClass)
    {
        LoginClass->setWindowTitle(QCoreApplication::translate("LoginClass", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginClass: public Ui_LoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
