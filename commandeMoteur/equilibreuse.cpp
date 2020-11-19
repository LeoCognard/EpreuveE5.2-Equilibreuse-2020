#include "equilibreuse.h"
#include "ui_equilibreuse.h"

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new Capot(laCarte,0); //0 pour DIO0
    connect(leCapot,&Capot::EtatCapotChange,this,&Equilibreuse::onCapot_EtatCapotChange);

}

Equilibreuse::~Equilibreuse()
{
    delete ui;
}

void Equilibreuse::onCapot_EtatCapotChange(bool _etatCapot)
{

}

