/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include "loginform.h"
#include "registration.h"

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    LoginForm *LoginWidget;
    Registration *registerWidget;

    void setupUi(QDialog *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName(QString::fromUtf8("StartScreen"));
        StartScreen->resize(534, 336);
        horizontalLayout = new QHBoxLayout(StartScreen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(StartScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginWidget = new LoginForm();
        LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        stackedWidget->addWidget(LoginWidget);
        registerWidget = new Registration();
        registerWidget->setObjectName(QString::fromUtf8("registerWidget"));
        stackedWidget->addWidget(registerWidget);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(StartScreen);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QDialog *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
