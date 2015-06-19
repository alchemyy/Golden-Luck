#include "introdialog.h"
#include "ui_introdialog.h"

introdialog::introdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::introdialog)
{
    ui->setupUi(this);
}

introdialog::~introdialog()
{
    delete ui;
}

void introdialog::on_pushButton_clicked()
{
    accept();
}
