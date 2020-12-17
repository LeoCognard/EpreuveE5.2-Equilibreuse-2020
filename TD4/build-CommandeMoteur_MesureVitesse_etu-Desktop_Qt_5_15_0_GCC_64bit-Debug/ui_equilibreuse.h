/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial_ConsigneVItesse;
    QLCDNumber *lcdNumber_consigne;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Lancer;
    QPushButton *pushButton_Arreter;
    QLCDNumber *lcdNumber_vitesse;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName(QString::fromUtf8("Equilibreuse"));
        Equilibreuse->resize(399, 501);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 281, 331));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 235, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dial_ConsigneVItesse = new QDial(layoutWidget);
        dial_ConsigneVItesse->setObjectName(QString::fromUtf8("dial_ConsigneVItesse"));
        dial_ConsigneVItesse->setMaximum(100);

        horizontalLayout_2->addWidget(dial_ConsigneVItesse);

        lcdNumber_consigne = new QLCDNumber(layoutWidget);
        lcdNumber_consigne->setObjectName(QString::fromUtf8("lcdNumber_consigne"));
        QFont font;
        font.setPointSize(16);
        lcdNumber_consigne->setFont(font);
        lcdNumber_consigne->setDigitCount(3);
        lcdNumber_consigne->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumber_consigne);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_Lancer = new QPushButton(layoutWidget);
        pushButton_Lancer->setObjectName(QString::fromUtf8("pushButton_Lancer"));

        horizontalLayout->addWidget(pushButton_Lancer);

        pushButton_Arreter = new QPushButton(layoutWidget);
        pushButton_Arreter->setObjectName(QString::fromUtf8("pushButton_Arreter"));

        horizontalLayout->addWidget(pushButton_Arreter);


        verticalLayout->addLayout(horizontalLayout);

        lcdNumber_vitesse = new QLCDNumber(groupBox);
        lcdNumber_vitesse->setObjectName(QString::fromUtf8("lcdNumber_vitesse"));
        lcdNumber_vitesse->setGeometry(QRect(20, 260, 231, 61));
        lcdNumber_vitesse->setDigitCount(4);
        lcdNumber_vitesse->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_vitesse->setProperty("value", QVariant(0.000000000000000));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 240, 233, 16));
        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 21));
        Equilibreuse->setMenuBar(menubar);
        statusbar = new QStatusBar(Equilibreuse);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Equilibreuse->setStatusBar(statusbar);

        retranslateUi(Equilibreuse);
        QObject::connect(dial_ConsigneVItesse, SIGNAL(valueChanged(int)), lcdNumber_consigne, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Equilibreuse", "Consigne vitesse (en %)", nullptr));
        pushButton_Lancer->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        pushButton_Arreter->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
        label->setText(QCoreApplication::translate("Equilibreuse", "Vitesse du moteur en tours par minutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
