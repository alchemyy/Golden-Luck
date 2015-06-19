#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
namespace Ui {
class logindialog;
}

class logindialog : public QDialog
{
    Q_OBJECT

public:
    QString myname;
    explicit logindialog(QWidget *parent = 0);
    ~logindialog();

private slots:
    void on_loginbtn_clicked();
    void on_exitbtn_clicked();

private:
    Ui::logindialog *ui;
};

#endif // LOGINDIALOG_H
