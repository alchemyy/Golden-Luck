#ifndef GAMEDIALOG_H
#define GAMEDIALOG_H

#include <QDialog>
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
class gameDialog;
}

class gameDialog : public QDialog
{
    Q_OBJECT

signals:
    void is1dollar();
    void ishalfdollar();
    void is1yuan();
    void is500kor();
    void is500jap();
    void is50cent();
    void is2eur();
    void is5aus();
    void is50aus();
    void is5000vie();
    void is5rouble();
    void is20mexico();
    void is1ind();
    void is50malai();
    void is1eng();

    void set1(Clickedlabel *click);
    void set2(Clickedlabel *click);
    void set3(Clickedlabel *click);
    void set4(Clickedlabel *click);
    void set5(Clickedlabel *click);
    void set6(Clickedlabel *click);

    void sceneinitial();
public:
    int sec;
    int round;
    int roundtoplay;
    double hongbao;
    int label1,label2,label3,label4,label5,label6;
    void resetpar();
    void start_progress();
    void stop_progress();
    void roundupdate(int ran);
    void nameupdate(QString str);
    void initialize_progressbar(int);
    explicit gameDialog(QWidget *parent = 0);
    ~gameDialog();
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
    Ui::gameDialog *ui;
    int id1,id2,id3;
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
    Clickedlabel *clicklabel_2eur=new Clickedlabel;
    Clickedlabel *clicklabel_5rouble= new Clickedlabel;
    Clickedlabel *clicklabel_vie5000= new Clickedlabel;
    Clickedlabel *clicklabel_mexico20= new Clickedlabel;
    Clickedlabel *clicklabel_malai50sen= new Clickedlabel;
    Clickedlabel *clicklabel_ind1= new Clickedlabel;
    Clickedlabel *clicklabel_eng1= new Clickedlabel;
    Clickedlabel *clicklabel_aus5 = new Clickedlabel;
    Clickedlabel *clicklabel_aus50 = new Clickedlabel;

    QPixmap *vie5000 = new QPixmap(":/myimage/vie5000dong.png");
    QPixmap *mexico20 = new QPixmap(":/myimage/mexico20bisuo.png");
    QPixmap *malai50sen= new QPixmap(":/myimage/malai50sen.png");
    QPixmap *ind1= new QPixmap(":/myimage/ind1rubee.png");
    QPixmap *eng1= new QPixmap(":/myimage/eng1pound.png");
    QPixmap *aus5=new QPixmap(":/myimage/aus5-Dollars.png");
    QPixmap *aus50= new QPixmap(":/myimage/aus50.png");
    QPixmap *rouble5= new QPixmap(":/myimage/Russian_5rouble.png");
    QPixmap *eur2= new QPixmap(":/myimage/europe_2eur.png");
    QPixmap *dollar1= new QPixmap(":/myimage/1dollar.png");
    QPixmap *halfdollar= new QPixmap(":/myimage/0.5dollar.png");
    QPixmap *jap500= new QPixmap(":/myimage/500eng_japan.png");
    QPixmap *kor500= new QPixmap(":/myimage/Korean_500yuan.png");
    QPixmap *yuan1= new QPixmap(":/myimage/RMB1yuan.png");
    QPixmap *cent50= new QPixmap(":/myimage/50cent_canada.png");

private slots:
    void timerUpdate();
    void changescene();
    void changeBar(const long);
    //void stopmovie_1dollar();
    void label_1dollarclicked();
    void label_halfdollarclicked();
    void label_1yuanclicked();
    void label_500korclicked();
    void label_500japclicked();
    void label_50centclicked();
    void label_2eurclicked();
    void label_5000vieclicked();
    void label_50ausclicked();
    void label_5ausclicked();
    void label_1indclicked();
    void label_1engclicked();
    void label_5roubleclicked();
    void label_50malaicentclicked();
    void label_20mexicoclicked();


    void slotset1(Clickedlabel *click);
    void slotset2(Clickedlabel *click);
    void slotset3(Clickedlabel *click);
    void slotset4(Clickedlabel *click);
    void slotset5(Clickedlabel *click);
    void slotset6(Clickedlabel *click);
    /*
    void slotset7(Clickedlabel *click);
    void slotset8(Clickedlabel *click);
    void slotset9(Clickedlabel *click);
    void slotset10(Clickedlabel *click);
    void slotset11(Clickedlabel *click);
    void slotset12(Clickedlabel *click);
    void slotset13(Clickedlabel *click);
    void slotset14(Clickedlabel *click);
    void slotset15(Clickedlabel *click);*/
    //void movie_1dollarclicked();
    //void sum();
};

#endif // GAMEDIALOG_H
