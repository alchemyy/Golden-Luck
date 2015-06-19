#ifndef INTRODIALOG_H
#define INTRODIALOG_H

#include <QDialog>

namespace Ui {
class introdialog;
}

class introdialog : public QDialog
{
    Q_OBJECT

public:
    explicit introdialog(QWidget *parent = 0);
    ~introdialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::introdialog *ui;
};

#endif // INTRODIALOG_H
