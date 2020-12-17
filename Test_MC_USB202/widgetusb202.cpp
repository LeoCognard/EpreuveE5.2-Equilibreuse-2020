#include "widgetusb202.h"
#include "ui_widgetusb202.h"
#include <QDebug>

WidgetUSB202::WidgetUSB202(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetUSB202)
{
    ui->setupUi(this);
    laCarte.ulDConfigPort(DD_OUTPUT);
    connect(&leTimer,&QTimer::timeout,this,&WidgetUSB202::clignoter);

}

WidgetUSB202::~WidgetUSB202()
{
    delete ui;
}


void WidgetUSB202::on_checkBoxDIO0_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO1_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO2_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO3_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO4_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO5_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO6_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_checkBoxDIO7_stateChanged(int arg1)
{
    UlError erreur;
        int numDio = sender()->objectName().right(1).toInt();
        erreur = laCarte.ulDBitOut(numDio,static_cast<bool>(arg1));
        qDebug() << "Code Erreur : " << erreur;
}

void WidgetUSB202::on_pushButtonClignoter_clicked()
{
    leTimer.start(1000);
}

void WidgetUSB202::clignoter()
{
    if(ui->checkBoxDIO0->checkState()==Qt::Checked){
        ui->checkBoxDIO0->setCheckState(Qt::Unchecked);
    }else
        ui->checkBoxDIO0->setCheckState(Qt::Checked);
}
