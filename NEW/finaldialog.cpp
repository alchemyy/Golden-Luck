#include "finaldialog.h"
#include "ui_finaldialog.h"

finaldialog::finaldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finaldialog)
{
    ui->setupUi(this);
    ui->label_movie->setMovie(b);
    b->start();
}

finaldialog::~finaldialog()
{
    delete ui;
}

void finaldialog::on_pushButton_clicked()
{
    accept();
}

void finaldialog::sethonor1()
{
    ui->label_rongyu->setText(tr("抢金侠"));
    ui->label_movie->setMovie(b);
    b->start();
}

void finaldialog::sethonor2()
{
    ui->label_rongyu->setText(tr("抢金圣手"));
    ui->label_movie->setMovie(c);
    c->start();
}

void finaldialog::sethonor3()
{
    ui->label_rongyu->setText(tr("抢金达人"));
    ui->label_movie->setMovie(c);
    c->start();
}

void finaldialog::sethonorbad()
{
    ui->label_rongyu->setText(tr("轻轻地，我走了"));
}
