#ifndef LOTTERYDIALOG_H
#define LOTTERYDIALOG_H

#include <QDialog>
#include <clickedlabel.h>
#include <logindialog.h>
#include <QMovie>
#include <QDateTime>
#include <QTimer>
namespace Ui {
class lotterydialog;
}

class lotterydialog : public QDialog
{
    Q_OBJECT

public:
    explicit lotterydialog(QWidget *parent = 0);
    ~lotterydialog();
    void initial();
    void roundupdate(int ran);
    void nameupdate(QString str);
    int roundtoplay=0;
    QTimer *timer = new QTimer;
    QMovie *clickhere = new QMovie("/Users/HOTDOG/Documents/clickhere.gif");
    QMovie *clickhere_out = new QMovie("/Users/HOTDOG/Documents/clickhere_out.gif");
private:
    Ui::lotterydialog *ui;
    Clickedlabel *openit = new Clickedlabel;


private slots:
    void stopmovie();
    void movie_clicked();
    void timerUpdate();
};

#endif // LOTTERYDIALOG_H
