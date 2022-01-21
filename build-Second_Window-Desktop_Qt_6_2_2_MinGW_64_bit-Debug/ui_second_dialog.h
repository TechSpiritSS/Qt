/********************************************************************************
** Form generated from reading UI file 'second_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_DIALOG_H
#define UI_SECOND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Second_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Second_Dialog)
    {
        if (Second_Dialog->objectName().isEmpty())
            Second_Dialog->setObjectName(QString::fromUtf8("Second_Dialog"));
        Second_Dialog->resize(400, 300);
        widget = new QWidget(Second_Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 110, 177, 60));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Second_Dialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, Second_Dialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Second_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Second_Dialog)
    {
        Second_Dialog->setWindowTitle(QCoreApplication::translate("Second_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Second_Dialog", "Your Name", nullptr));
        pushButton->setText(QCoreApplication::translate("Second_Dialog", "Submit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Second_Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Second_Dialog: public Ui_Second_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_DIALOG_H
