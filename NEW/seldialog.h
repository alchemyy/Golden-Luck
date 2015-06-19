#ifndef SELDIALOG_H
#define SELDIALOG_H

#include <QDialog>

namespace Ui {
class seldialog;
}

class seldialog : public QDialog
{
    Q_OBJECT

public:
    int state;
    explicit seldialog(QWidget *parent = 0);
    ~seldialog();

private slots:

    void on_introButton_clicked();

    void on_gamestaButton_clicked();

private:
    Ui::seldialog *ui;
};

#endif // SELDIALOG_H
