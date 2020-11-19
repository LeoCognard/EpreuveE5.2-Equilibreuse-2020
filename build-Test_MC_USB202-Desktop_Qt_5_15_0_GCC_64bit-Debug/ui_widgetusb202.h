/********************************************************************************
** Form generated from reading UI file 'widgetusb202.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSB202_H
#define UI_WIDGETUSB202_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUSB202
{
public:
    QPushButton *pushButton;
    QPushButton *pushButtonClignoter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxDIO0;
    QCheckBox *checkBoxDIO1;
    QCheckBox *checkBoxDIO2;
    QCheckBox *checkBoxDIO3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxDIO4;
    QCheckBox *checkBoxDIO5;
    QCheckBox *checkBoxDIO6;
    QCheckBox *checkBoxDIO7;

    void setupUi(QWidget *WidgetUSB202)
    {
        if (WidgetUSB202->objectName().isEmpty())
            WidgetUSB202->setObjectName(QString::fromUtf8("WidgetUSB202"));
        WidgetUSB202->resize(800, 600);
        pushButton = new QPushButton(WidgetUSB202);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 60, 131, 91));
        pushButtonClignoter = new QPushButton(WidgetUSB202);
        pushButtonClignoter->setObjectName(QString::fromUtf8("pushButtonClignoter"));
        pushButtonClignoter->setGeometry(QRect(340, 190, 121, 41));
        widget = new QWidget(WidgetUSB202);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 251, 224));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxDIO0 = new QCheckBox(widget);
        checkBoxDIO0->setObjectName(QString::fromUtf8("checkBoxDIO0"));

        verticalLayout_2->addWidget(checkBoxDIO0);

        checkBoxDIO1 = new QCheckBox(widget);
        checkBoxDIO1->setObjectName(QString::fromUtf8("checkBoxDIO1"));

        verticalLayout_2->addWidget(checkBoxDIO1);

        checkBoxDIO2 = new QCheckBox(widget);
        checkBoxDIO2->setObjectName(QString::fromUtf8("checkBoxDIO2"));

        verticalLayout_2->addWidget(checkBoxDIO2);

        checkBoxDIO3 = new QCheckBox(widget);
        checkBoxDIO3->setObjectName(QString::fromUtf8("checkBoxDIO3"));

        verticalLayout_2->addWidget(checkBoxDIO3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxDIO4 = new QCheckBox(widget);
        checkBoxDIO4->setObjectName(QString::fromUtf8("checkBoxDIO4"));

        verticalLayout->addWidget(checkBoxDIO4);

        checkBoxDIO5 = new QCheckBox(widget);
        checkBoxDIO5->setObjectName(QString::fromUtf8("checkBoxDIO5"));

        verticalLayout->addWidget(checkBoxDIO5);

        checkBoxDIO6 = new QCheckBox(widget);
        checkBoxDIO6->setObjectName(QString::fromUtf8("checkBoxDIO6"));

        verticalLayout->addWidget(checkBoxDIO6);

        checkBoxDIO7 = new QCheckBox(widget);
        checkBoxDIO7->setObjectName(QString::fromUtf8("checkBoxDIO7"));

        verticalLayout->addWidget(checkBoxDIO7);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(WidgetUSB202);
        QObject::connect(pushButton, SIGNAL(clicked()), WidgetUSB202, SLOT(close()));

        QMetaObject::connectSlotsByName(WidgetUSB202);
    } // setupUi

    void retranslateUi(QWidget *WidgetUSB202)
    {
        WidgetUSB202->setWindowTitle(QCoreApplication::translate("WidgetUSB202", "WidgetUSB202", nullptr));
        pushButton->setText(QCoreApplication::translate("WidgetUSB202", "Quitter", nullptr));
        pushButtonClignoter->setText(QCoreApplication::translate("WidgetUSB202", "Clignoter", nullptr));
        checkBoxDIO0->setText(QCoreApplication::translate("WidgetUSB202", "DIO0", nullptr));
        checkBoxDIO1->setText(QCoreApplication::translate("WidgetUSB202", "DIO1", nullptr));
        checkBoxDIO2->setText(QCoreApplication::translate("WidgetUSB202", "DIO2", nullptr));
        checkBoxDIO3->setText(QCoreApplication::translate("WidgetUSB202", "DIO3", nullptr));
        checkBoxDIO4->setText(QCoreApplication::translate("WidgetUSB202", "DIO4", nullptr));
        checkBoxDIO5->setText(QCoreApplication::translate("WidgetUSB202", "DIO5", nullptr));
        checkBoxDIO6->setText(QCoreApplication::translate("WidgetUSB202", "DIO6", nullptr));
        checkBoxDIO7->setText(QCoreApplication::translate("WidgetUSB202", "DIO7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUSB202: public Ui_WidgetUSB202 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSB202_H
