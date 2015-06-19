#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDateTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
      state=0;
      round=1;
      hongbao=0;
      sec = 5;
//    Clickedlabel *clicklabel_1dollar= new Clickedlabel(this);
//    Clickedlabel *clicklabel_halfdollar= new Clickedlabel(this);
//    Clickedlabel *clicklabel_1yuan= new Clickedlabel(this);
//    Clickedlabel *clicklabel_500kor= new Clickedlabel(this);
//    Clickedlabel *clicklabel_500jap= new Clickedlabel(this);
//    Clickedlabel *clicklabel_50cent= new Clickedlabel(this);
      ui->setupUi(this);
      clicklabel_1dollar->setParent(this);
      clicklabel_1yuan->setParent(this);
      clicklabel_500jap->setParent(this);
      clicklabel_500kor->setParent(this);
      clicklabel_50cent->setParent(this);
      clicklabel_halfdollar->setParent(this);
//      clicklabel1->setParent(this);
//      clicklabel2->setParent(this);
//      clicklabel3->setParent(this);
//      clicklabel4->setParent(this);
//      clicklabel5->setParent(this);
//      clicklabel6->setParent(this);
//    clickmovie_1dollar->setParent(this);
//    clickmovie_halfdollar->setParent(this);
//    clickmovie_1yuan->setParent(this);
//    clickmovie_500kor->setParent(this);
//    clickmovie_500jap->setParent(this);
//    clickmovie_50cent->setParent(this);
//    QLabel *date = new QLabel("today is:");

//    QGridLayout *gridLayout=new QGridLayout;
//    gridLayout->addWidget(date,0,0,1,1);
//    gridLayout->addWidget(clicklabel_1dollar,0,1,2,2);
    //movie->setFileName("/Users/HOTDOG/Documents/hongbao3.gif");
    //movie_1dollar->setFileName("/Users/HOTDOG/Documents/movie_1dollar.gif");
    //movie_1dollar_out->setFileName("/Users/HOTDOG/Documents/movie_1dollar_out.gif");

    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
    //date->setPalette(pe);
    ui->label_3->setPalette(pe);
    ui->label_name->setPalette(pe);
    ui->label_13->setPalette(pe);
    ui->label_14->setPalette(pe);
    ui->label_15->setPalette(pe);
    ui->label_16->setPalette(pe);
    ui->label_2->setPalette(pe);
    ui->label_13->setText(tr("Round %1").arg(round));
    ui->label_15->setText(tr("0"));

    //ui->label_12->setMovie(movie);
//    clickmovie_1dollar->setMovie(movie_1dollar);
//    clickmovie_1dollar->setScaledContents(true);
//    clickmovie_1dollar->setGeometry(20,90,81,81);

    clicklabel_1dollar->setPixmap(QPixmap(":/myimage/1dollar.png"));
    clicklabel_1dollar->setScaledContents(true);
    clicklabel_1dollar->setGeometry(80,90,81,81);
    clicklabel_halfdollar->setPixmap(QPixmap(":/myimage/0.5dollar.png"));
    clicklabel_halfdollar->setScaledContents(true);
    clicklabel_halfdollar->setGeometry(230,90,81,81);
    clicklabel_500kor->setPixmap(QPixmap(":/myimage/Korean_500yuan.png"));
    clicklabel_500kor->setScaledContents(true);
    clicklabel_500kor->setGeometry(380,90,81,81);
    clicklabel_500jap->setPixmap(QPixmap(":/myimage/500eng_japan.png"));
    clicklabel_500jap->setScaledContents(true);
    clicklabel_500jap->setGeometry(80,220,81,81);
    clicklabel_1yuan->setPixmap(QPixmap(":/myimage/RMB1yuan.png"));
    clicklabel_1yuan->setScaledContents(true);
    clicklabel_1yuan->setGeometry(230,220,81,81);
    clicklabel_50cent->setPixmap(QPixmap(":/myimage/50cent_canada.png"));
    clicklabel_50cent->setScaledContents(true);
    clicklabel_50cent->setGeometry(380,220,81,81);
//    clicklabel1->setScaledContents(true);
//    clicklabel1->setGeometry(80,90,81,81);
//    clicklabel2->setScaledContents(true);
//    clicklabel2->setGeometry(230,90,81,81);
//    clicklabel3->setScaledContents(true);
//    clicklabel3->setGeometry(380,90,81,81);
//    clicklabel4->setScaledContents(true);
//    clicklabel4->setGeometry(80,220,81,81);
//    clicklabel5->setScaledContents(true);
//    clicklabel5->setGeometry(230,220,81,81);
//    clicklabel6->setScaledContents(true);
//    clicklabel6->setGeometry(380,220,81,81);


    initialize_progressbar(sec);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    QTimer *timer = new QTimer(this);
    connect(&thread,SIGNAL(barChanged(long)),this,SLOT(changeBar(long)));
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));

    connect(clicklabel_1dollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_1dollarclicked()));
    connect(clicklabel_halfdollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_halfdollarclicked()));
    connect(clicklabel_1yuan,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_1yuanclicked()));
    connect(clicklabel_500kor,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_500korclicked()));
    connect(clicklabel_500jap,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_500japclicked()));
    connect(clicklabel_50cent,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_50centclicked()));

    connect(clicklabel_1dollar,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_halfdollar,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_1yuan,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_500jap,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_500kor,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_50cent,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));

    connect(&thread,SIGNAL(timesup()),this,SLOT(changescene()));
    connect(clicklabel_1dollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_halfdollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_1yuan,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_500kor,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_500jap,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_50cent,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));

    connect(this,SIGNAL(set1(Clickedlabel*)),this,SLOT(slotset1(Clickedlabel*)));
    connect(this,SIGNAL(set2(Clickedlabel*)),this,SLOT(slotset2(Clickedlabel*)));
    connect(this,SIGNAL(set3(Clickedlabel*)),this,SLOT(slotset3(Clickedlabel*)));
    connect(this,SIGNAL(set4(Clickedlabel*)),this,SLOT(slotset4(Clickedlabel*)));
    connect(this,SIGNAL(set5(Clickedlabel*)),this,SLOT(slotset5(Clickedlabel*)));
    connect(this,SIGNAL(set6(Clickedlabel*)),this,SLOT(slotset6(Clickedlabel*)));

    connect(this,SIGNAL(finished()),this,SLOT(stateupdate()));
    timer->start(1000);
    id1=startTimer(1000);


//**************************fade in/out animation connection****************************//
    //connect(movie_1dollar,SIGNAL(frameChanged(int)),this,SLOT(stopmovie_1dollar()));
    //connect(movie_1dollar_out,SIGNAL(frameChanged(int)),this,SLOT(stopmovie_1dollar()));
    //connect(clickmovie_1dollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(movie_1dollarclicked()));
    //movie_1dollar->start();
    //setLayout(gridLayout);
    //id2=startTimer(2000);
    //id3=startTimer(100000);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::stateupdate()
{
    state=1;
}
void Widget::slotset1(Clickedlabel *click)
{
    click->setGeometry(80,90,81,81);
}
void Widget::slotset2(Clickedlabel *click)
{
    click->setGeometry(230,90,81,81);
}
void Widget::slotset3(Clickedlabel *click)
{
    click->setGeometry(380,90,81,81);
}
void Widget::slotset4(Clickedlabel *click)
{
    click->setGeometry(80,220,81,81);
}
void Widget::slotset5(Clickedlabel *click)
{
    click->setGeometry(230,220,81,81);
}
void Widget::slotset6(Clickedlabel *click)
{
    click->setGeometry(380,220,81,81);
}
void Widget::initialize_progressbar(int sec)
{
    ui->progressBar->setRange(0,sec*100);
    ui->progressBar->setValue(0);
}

void Widget::start_progress()
{
    thread.start();
}
void Widget::label_1dollarclicked()
{
    emit is1dollar();
    hongbao=hongbao+6;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void Widget::label_halfdollarclicked()
{
    emit ishalfdollar();
    hongbao=hongbao+3;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void Widget::label_1yuanclicked()
{
    emit is1yuan();
    hongbao=hongbao+1;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void Widget::label_500japclicked()
{
    emit is500jap();
    hongbao=hongbao+25;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void Widget::label_500korclicked()
{
    emit is500kor();
    hongbao=hongbao+3;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void Widget::label_50centclicked()
{
    //movie->start();
    emit is50cent();
    hongbao=hongbao+5;
    ui->label_15->setText(tr("%1").arg(hongbao));
}

//void Widget::timerEvent(QTimerEvent *e)
//{
//    if(e->timerId()==id1)
//    {
//        ui->label->setText(tr("%1").arg(qrand()%100));
//    }
//    else if(e->timerId()==id2)
//    {sets
//        ui->label_2->setText("You have got");
//    }
//    else;
//}

void Widget::timerUpdate()
{
    int q=qrand()%10000;
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("hh:mm:ss dddd");//("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_3->setText(str);
    ui->label->setText(tr("%1").arg(q));
//    if(q>9500)
//    {
//        movie->start();
//    }
}
void Widget::nameupdate(QString str)
{
    ui->label_name->setText(str);
}

void Widget::changeBar(const long i)
{
    ui->progressBar->setValue(sec*100-i);
    ui->label_14->setText(tr("%1 s left").arg((sec*100-i)/100));
}

void Widget::changescene()
{
    round++;
    label1=qrand()%20;
    label2=qrand()%20;
    label3=qrand()%20;
    label4=qrand()%20;
    label5=qrand()%20;
    label6=qrand()%20;
    if(round==roundtoplay+1)
    {

        ui->label_name->setText(tr("finished"));
        emit finished();//change dialog to final dialog ,save the statics to xml file,
        //then play the finish animation,click button to return to login dialog
    }
    else
    {
        if(label1==1)    
            emit set1(clicklabel_1dollar);
        else if(label1 ==2)
            emit set1(clicklabel_halfdollar);
        else if(label1 ==3)
            emit set1(clicklabel_500kor);
        else if(label1==4)
            emit set1(clicklabel_500jap);
        else if(label1 == 5)
            emit set1(clicklabel_1yuan);
        else if(label1 == 6)
            emit set1(clicklabel_50cent);

        if(label2==1)           //*******************label2
            emit set2(clicklabel_1dollar);
        else if(label2 ==2)
            emit set2(clicklabel_halfdollar);
        else if(label2 ==3)
            emit set2(clicklabel_500kor);
        else if(label2==4)
            emit set2(clicklabel_500jap);
        else if(label2 == 5)
            emit set2(clicklabel_1yuan);
        else if(label2 == 6)
            emit set2(clicklabel_50cent);

        if(label3==1)        //label3
            emit set3(clicklabel_1dollar);
        else if(label3 ==2)
            emit set3(clicklabel_halfdollar);
        else if(label3 ==3)
            emit set3(clicklabel_500kor);
        else if(label3==4)
            emit set3(clicklabel_500jap);
        else if(label3 == 5)
            emit set3(clicklabel_1yuan);
        else if(label3 == 6)
            emit set3(clicklabel_50cent);

        if(label4==1)
            emit set4(clicklabel_1dollar);
        else if(label4 ==2)
            emit set4(clicklabel_halfdollar);
        else if(label4 ==3)
            emit set4(clicklabel_500kor);
        else if(label4==4)
            emit set4(clicklabel_500jap);
        else if(label4 == 5)
            emit set4(clicklabel_1yuan);
        else if(label4 == 6)
            emit set4(clicklabel_50cent);

        if(label5==1)
            emit set5(clicklabel_1dollar);
        else if(label5 ==2)
            emit set5(clicklabel_halfdollar);
        else if(label5 ==3)
            emit set5(clicklabel_500kor);
        else if(label5==4)
            emit set5(clicklabel_500jap);
        else if(label5 == 5)
            emit set5(clicklabel_1yuan);
        else if(label5 == 6)
            emit set5(clicklabel_50cent);

        if(label6==1)
            emit set6(clicklabel_1dollar);
        else if(label6 ==2)
            emit set6(clicklabel_halfdollar);
        else if(label6 ==3)
            emit set6(clicklabel_500kor);
        else if(label6==4)
            emit set6(clicklabel_500jap);
        else if(label6 == 5)
            emit set6(clicklabel_1yuan);
        else if(label6 == 6)
            emit set6(clicklabel_50cent);


    }
    ui->label_13->setText(tr("Round %1").arg(round));

}
void Widget::roundupdate(int ran)
{
    roundtoplay = ran;
}

//void Widget::movie_1dollarclicked()
//{
//    clickmovie_1dollar->setMovie(movie_1dollar_out);
//    movie_1dollar_out->start();

//}
//void Widget::stopmovie_1dollar()
//{
//    if(movie_1dollar->currentFrameNumber()==(movie_1dollar->frameCount()-1))
//    {

//        //clickmovie_1dollar->setPixmap(QPixmap(":/myimage/1dollar.png"));
//        //clickmovie_1dollar->setScaledContents(true);
//        movie_1dollar->stop();

//    }
//    if(movie_1dollar_out->currentFrameNumber()==(movie_1dollar_out->frameCount()-1))
//    {
//        movie_1dollar_out->stop();
//        clickmovie_1dollar->setDisabled(true);
//    }
//}
