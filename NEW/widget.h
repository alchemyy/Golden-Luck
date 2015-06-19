#ifndef WIDGET_H
#define WIDGET_H
#include <QProgressDialog>
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QMessageBox>
#include <QWidget>
#include <progressbar_thread.h>
#include <clickedlabel.h>
#include <QGridLayout>
#include <QMovie>
#include <lotterydialog.h>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
//protected:
//    void timerEvent(QTimerEvent *);
signals:
    void is1dollar();
    void ishalfdollar();
    void is1yuan();
    void is500kor();
    void is500jap();
    void is50cent();
    void finished();
    void set1(Clickedlabel *click);
    void set2(Clickedlabel *click);
    void set3(Clickedlabel *click);
    void set4(Clickedlabel *click);
    void set5(Clickedlabel *click);
    void set6(Clickedlabel *click);

public:
    int sec;
    int state;
    int label1,label2,label3,label4,label5,label6;
    void start_progress();
    void roundupdate(int ran);
    void nameupdate(QString str);
    void initialize_progressbar(int);
    explicit Widget(QWidget *parent = 0);
    ~Widget();
//    QMovie *movie = new QMovie("/Users/HOTDOG/Documents/hongbao.gif");
//    QMovie *movie_1dollar = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_halfdollar = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_1yuan = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_500kor = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_500jap = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_50cent = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");

//    QMovie *movie_1dollar_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar_out.gif");
//    QMovie *movie_halfdollar_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_1yuan_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_500kor_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_500jap_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
//    QMovie *movie_50cent_out = new QMovie("/Users/HOTDOG/Documents/movie_1dollar.gif");
private:
    Ui::Widget *ui;
    int id1,id2,id3;
    int round;
    int roundtoplay;
    int hongbao;
    progressbar_thread thread;
//    Clickedlabel *clickmovie_1dollar= new Clickedlabel;
//    Clickedlabel *clickmovie_1yuan= new Clickedlabel;
//    Clickedlabel *clickmovie_500kor= new Clickedlabel;
//    Clickedlabel *clickmovie_500jap= new Clickedlabel;
//    Clickedlabel *clickmovie_50cent= new Clickedlabel;
//    Clickedlabel *clickmovie_halfdollar= new Clickedlabel;
    //Onetimemovie *movie=new Onetimemovie;
    //Onetimemovie *movie = new Onetimemovie("/Users/HOTDOG/Documents/hongbao3.gif");
    Clickedlabel *clicklabel_1dollar= new Clickedlabel;
    Clickedlabel *clicklabel_halfdollar= new Clickedlabel;
    Clickedlabel *clicklabel_1yuan= new Clickedlabel;
    Clickedlabel *clicklabel_500kor= new Clickedlabel;
    Clickedlabel *clicklabel_500jap= new Clickedlabel;
    Clickedlabel *clicklabel_50cent= new Clickedlabel;
//    Clickedlabel *clicklabel1 = new Clickedlabel;
//    Clickedlabel *clicklabel2 = new Clickedlabel;
//    Clickedlabel *clicklabel3 = new Clickedlabel;
//    Clickedlabel *clicklabel4 = new Clickedlabel;
//    Clickedlabel *clicklabel5 = new Clickedlabel;
//    Clickedlabel *clicklabel6 = new Clickedlabel;
    QPixmap *dollar1= new QPixmap(":/myimage/1dollar.png");
    QPixmap *halfdollar= new QPixmap(":/myimage/0.5dollar.png");
    QPixmap *Wjap500= new QPixmap(":/myimage/500eng_japan.png");
    QPixmap *kor500= new QPixmap(":/myimage/Korean_500yuan.png");
    QPixmap *yuan1= new QPixmap(":/myimage/RMB1yuan.png");
    QPixmap *cent50= new QPixmap(":/myimage/50cent_canada.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");
//    QPixmap onedollar= new QPixmap(":/myimage/1dollar.png");

private slots:
    void timerUpdate();
    void stateupdate();
    void changescene();
    void changeBar(const long);
    //void stopmovie_1dollar();
    void label_1dollarclicked();
    void label_halfdollarclicked();
    void label_1yuanclicked();
    void label_500korclicked();
    void label_500japclicked();
    void label_50centclicked();
    void slotset1(Clickedlabel *click);
    void slotset2(Clickedlabel *click);
    void slotset3(Clickedlabel *click);
    void slotset4(Clickedlabel *click);
    void slotset5(Clickedlabel *click);
    void slotset6(Clickedlabel *click);
    //void movie_1dollarclicked();
    //void sum();
};

#endif // WIDGET_H
