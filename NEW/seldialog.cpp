#include "seldialog.h"
#include "ui_seldialog.h"

seldialog::seldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seldialog)
{
    state=0;
    ui->setupUi(this);
}

seldialog::~seldialog()
{
    delete ui;
}

void seldialog::on_introButton_clicked()
{
    state = 0;
    accept();
}

void seldialog::on_gamestaButton_clicked()
{
    state = 1;
    accept();
}
