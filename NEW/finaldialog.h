#ifndef FINALDIALOG_H
#define FINALDIALOG_H

#include <QDialog>
#include <QMovie>
namespace Ui {
class finaldialog;
}

class finaldialog : public QDialog
{
    Q_OBJECT

public:
    explicit finaldialog(QWidget *parent = 0);
    ~finaldialog();

    void sethonor1();
    void sethonor2();
    void sethonor3();
    void sethonorbad();
    QMovie *b = new QMovie("/Users/HOTDOG/Desktop/b.gif");
    QMovie *c = new QMovie("/Users/HOTDOG/Desktop/c.gif");

private slots:
    void on_pushButton_clicked();

private:
    Ui::finaldialog *ui;
};

#endif // FINALDIALOG_H
