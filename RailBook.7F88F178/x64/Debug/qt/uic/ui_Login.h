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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginClass)
    {
        if (LoginClass->objectName().isEmpty())
            LoginClass->setObjectName("LoginClass");
        LoginClass->resize(532, 400);
        LoginClass->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: rgb(176, 221, 255)\n"
"}\n"
""));
        centralWidget = new QWidget(LoginClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 211, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 2px;\n"
"    /* \346\270\220\345\217\230\350\211\262 */\n"
"    background: qlineargradient(x1:0, y1:0.5, x2:1, y2:0.5, stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"    color: #1565c0;\n"
"    padding: 7px 12px;\n"
"    border-radius: 16px;\n"
"    /* \351\230\264\345\275\261 */\n"
"    border: 1.5px solid #90caf9;\n"
"    /* Qt QSS \344\270\215\345\216\237\347\224\237\346\224\257\346\214\201\351\230\264\345\275\261, \345\246\202\351\234\200\346\233\264\345\274\272\351\230\264\345\275\261\346\225\210\346\236\234\345\217\257\347\224\250 QGraphicsDropShadowEffect */\n"
"}"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 70, 407, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 2px;\n"
"    color: #2196f3;\n"
"    background: qlineargradient(x1:0, y1:0.5, x2:1, y2:0.5, stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"    border-radius: 12px;\n"
"    padding: 6px 10px;\n"
"    border: 1.5px solid #90caf9;\n"
"}"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 2px;\n"
"    color: #2196f3;\n"
"    background: qlineargradient(x1:0, y1:0.5, x2:1, y2:0.5, stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"    border-radius: 12px;\n"
"    padding: 6px 10px;\n"
"    border: 1.5px solid #90caf9;\n"
"}"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    color: #2196f3; /* \350\276\223\345\205\245\345\206\205\345\256\271\351\242\234\350\211\262 */\n"
"    background: #f6fbfe;\n"
"    border: 1.8px solid #90caf9;\n"
"    border-radius: 10px;\n"
"    padding: 6px 14px;\n"
"    selection-background-color: #bbdefb;\n"
"    selection-color: #1565c0;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\345\215\240\344\275\215\347\254\246\357\274\210placeholder\357\274\211\351\242\234\350\211\262\345\217\212\346\240\267\345\274\217 */\n"
"QLineEdit::placeholder {\n"
"    color: #90caf9;\n"
"    font-size: 18px;\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    letter-spacing: 2px;\n"
"    font-weight: bold;\n"
"    opacity: 1; /* Qt 5.12+ \346\224"
                        "\257\346\214\201 */\n"
"}"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    color: #2196f3; /* \350\276\223\345\205\245\345\206\205\345\256\271\351\242\234\350\211\262 */\n"
"    background: #f6fbfe;\n"
"    border: 1.8px solid #90caf9;\n"
"    border-radius: 10px;\n"
"    padding: 6px 14px;\n"
"    selection-background-color: #bbdefb;\n"
"    selection-color: #1565c0;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\345\215\240\344\275\215\347\254\246\357\274\210placeholder\357\274\211\351\242\234\350\211\262\345\217\212\346\240\267\345\274\217 */\n"
"QLineEdit::placeholder {\n"
"    color: #90caf9;\n"
"    font-size: 18px;\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    letter-spacing: 2px;\n"
"    font-weight: bold;\n"
"    opacity: 1; /* Qt 5.12+ \346\224"
                        "\257\346\214\201 */\n"
"}"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 13px;\n"
"    color: #2196f3;\n"
"    spacing: 12px;\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"/* \350\207\252\345\256\232\344\271\211\345\213\276\351\200\211\346\241\206\345\244\226\350\247\202 */\n"
"QCheckBox::indicator {\n"
"    width: 15px;\n"
"    height: 15px;\n"
"    border-radius: 6px;\n"
"    background: #e3f2fd;\n"
"    border: 2px solid #90caf9;\n"
"    transition: all 0.2s;\n"
"}\n"
"\n"
"/* \345\213\276\351\200\211\347\212\266\346\200\201 */\n"
"QCheckBox::indicator:checked {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #2196f3, stop:1 #64b5f6);\n"
"    border: 2px solid #2196f3;\n"
"}\n"
"\n"
"/* \345\213\276\351\200\211\345\257\271\345\217\267\351\242\234\350\211\262\357\274\210\351\203\250\345\210\206Qt\347\211\210\346\234\254\346\224\257\346\214\201\357\274\211 */\n"
"QCheckBo"
                        "x::indicator:checked {\n"
"    image: url(:/icons/checkbox_checked_blue.svg); /* \345\246\202\346\234\211\350\207\252\345\256\232\344\271\211svg\345\217\257\347\224\250\357\274\214\345\220\246\345\210\231\344\274\232\346\230\276\347\244\272\351\273\230\350\256\244\345\257\271\345\217\267 */\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    image: none;\n"
"}"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(70, 240, 381, 33));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    color: #fff;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #2196f3, stop:1 #64b5f6);\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 8px 24px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 1px;\n"
"    transition: all 0.2s;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1565c0, stop:1 #42a5f5);\n"
"}\n"
"QPushButton:pressed {\n"
"    background: #1976d2;\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    color: #fff;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #2196f3, stop:1 #64b5f6);\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 8px 24px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 1px;\n"
"    transition: all 0.2s;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1565c0, stop:1 #42a5f5);\n"
"}\n"
"QPushButton:pressed {\n"
"    background: #1976d2;\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"YouYuan\", \"\345\271\274\345\234\206\", \"Microsoft YaHei\", \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"PingFang SC\", sans-serif;\n"
"    font-size: 15px;\n"
"    color: #fff;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #2196f3, stop:1 #64b5f6);\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 8px 24px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 1px;\n"
"    transition: all 0.2s;\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1565c0, stop:1 #42a5f5);\n"
"}\n"
"QPushButton:pressed {\n"
"    background: #1976d2;\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        LoginClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 532, 33));
        LoginClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginClass);
        mainToolBar->setObjectName("mainToolBar");
        LoginClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginClass);
        statusBar->setObjectName("statusBar");
        LoginClass->setStatusBar(statusBar);

        retranslateUi(LoginClass);

        QMetaObject::connectSlotsByName(LoginClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginClass)
    {
        LoginClass->setWindowTitle(QCoreApplication::translate("LoginClass", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginClass", "\351\253\230\351\223\201\350\256\242\347\245\250\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginClass", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("LoginClass", "\345\257\206\347\240\201", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("LoginClass", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("LoginClass", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("LoginClass", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginClass", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginClass", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginClass: public Ui_LoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
