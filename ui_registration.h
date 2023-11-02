/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *LoginEdit;
    QLabel *label_2;
    QLineEdit *PasswordEdit;
    QLabel *label_3;
    QLineEdit *ConfirmPasswordEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *LoginButton;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(272, 142);
        verticalLayout = new QVBoxLayout(Registration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        LoginEdit = new QLineEdit(Registration);
        LoginEdit->setObjectName(QString::fromUtf8("LoginEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LoginEdit);

        label_2 = new QLabel(Registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        PasswordEdit = new QLineEdit(Registration);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));
        PasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, PasswordEdit);

        label_3 = new QLabel(Registration);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        ConfirmPasswordEdit = new QLineEdit(Registration);
        ConfirmPasswordEdit->setObjectName(QString::fromUtf8("ConfirmPasswordEdit"));
        ConfirmPasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, ConfirmPasswordEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(Registration);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        LoginButton = new QPushButton(Registration);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        horizontalLayout->addWidget(LoginButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(LoginEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, ConfirmPasswordEdit);
        QWidget::setTabOrder(ConfirmPasswordEdit, LoginButton);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "Confirm password", nullptr));
        LoginButton->setText(QCoreApplication::translate("Registration", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
