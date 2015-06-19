#include "gamedialog.h"
#include "ui_gamedialog.h"
#include <QTimer>
#include <QDateTime>
gameDialog::gameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameDialog)
{
      round=1;
      hongbao=0.0;
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
      clicklabel_2eur->setParent(this) ;
      clicklabel_5rouble->setParent(this)  ;
      clicklabel_vie5000->setParent(this)  ;
      clicklabel_mexico20->setParent(this)  ;
      clicklabel_malai50sen->setParent(this)  ;
      clicklabel_ind1->setParent(this)  ;
      clicklabel_eng1->setParent(this)  ;
      clicklabel_aus5 ->setParent(this)  ;
      clicklabel_aus50->setParent(this)  ;
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
    clicklabel_1yuan->setFrameShape(QFrame::Box);
    clicklabel_50cent->setPixmap(QPixmap(":/myimage/50cent_canada.png"));
    clicklabel_50cent->setScaledContents(true);
    clicklabel_50cent->setGeometry(380,220,81,81);
    clicklabel_1dollar->setFrameShape(QFrame::NoFrame);
    clicklabel_2eur->setPixmap(QPixmap(":/myimage/europe_2eur.png"));
    clicklabel_2eur->setScaledContents(true);
    clicklabel_2eur->setFrameShape(QFrame::Panel);
    clicklabel_5rouble->setPixmap(QPixmap(":/myimage/Russian_5rouble.png"));
    clicklabel_5rouble->setScaledContents(true);
    clicklabel_vie5000->setPixmap(QPixmap(":/myimage/vie5000dong.png"));
    clicklabel_vie5000->setScaledContents(true);
    clicklabel_mexico20->setPixmap(QPixmap(":/myimage/mexico20bisuo.png"));
    clicklabel_mexico20->setScaledContents(true);
    clicklabel_malai50sen->setPixmap(QPixmap(":/myimage/malai50sen.png"));
    clicklabel_malai50sen->setScaledContents(true);
    clicklabel_ind1->setPixmap(QPixmap(":/myimage/ind1rubee.png"));
    clicklabel_ind1->setScaledContents(true);
    clicklabel_eng1->setPixmap(QPixmap(":/myimage/eng1pound.png"));
    clicklabel_eng1->setScaledContents(true);
    clicklabel_aus5 ->setPixmap( QPixmap(":/myimage/aus5-Dollars.png"));
    clicklabel_aus5 ->setScaledContents(true);
    clicklabel_aus50->setPixmap(QPixmap(":/myimage/aus50.png"));
    clicklabel_aus50->setScaledContents(true);
    clicklabel_2eur->setGeometry(80,90,81,81);
    clicklabel_5rouble->setGeometry(80,90,81,81);
    clicklabel_vie5000->setGeometry(80,90,81,81);
    clicklabel_mexico20->setGeometry(80,90,81,81);
    clicklabel_malai50sen->setGeometry(80,90,81,81);
    clicklabel_ind1->setGeometry(80,90,81,81);
    clicklabel_eng1->setGeometry(80,90,81,81);
    clicklabel_aus5 ->setGeometry(80,90,81,81);
    clicklabel_aus50->setGeometry(80,90,81,81);

    emit sceneinitial();

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
    connect(clicklabel_2eur,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_2eurclicked())) ;
    connect(clicklabel_5rouble,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_5roubleclicked()))  ;
    connect(clicklabel_vie5000,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_5000vieclicked()))  ;
    connect(clicklabel_mexico20,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_20mexicoclicked()))  ;
    connect(clicklabel_malai50sen,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_50malaicentclicked()))  ;
    connect(clicklabel_ind1,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_1indclicked()))  ;
    connect(clicklabel_eng1,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_1engclicked()))  ;
    connect(clicklabel_aus5 ,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_5ausclicked()))  ;
    connect(clicklabel_aus50,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(label_50ausclicked()))  ;

    connect(clicklabel_1dollar,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_halfdollar,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_1yuan,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_500kor,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_500jap,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_vie5000,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_50cent,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_aus50,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_aus5,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_2eur,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_mexico20,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_malai50sen,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_eng1,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_ind1,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));
    connect(clicklabel_5rouble,SIGNAL(Clicked(Clickedlabel*)),&thread,SLOT(progressbarreset()));

    connect(this,SIGNAL(sceneinitial()),this,SLOT(changescene()));
    connect(&thread,SIGNAL(timesup()),this,SLOT(changescene()));
    connect(clicklabel_1dollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_halfdollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_1yuan,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_500kor,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_500jap,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_50cent,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_vie5000,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_aus50,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_aus5,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_2eur,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_mexico20,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_malai50sen,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_eng1,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_ind1,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));
    connect(clicklabel_5rouble,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(changescene()));

    connect(this,SIGNAL(set1(Clickedlabel*)),this,SLOT(slotset1(Clickedlabel*)));
    connect(this,SIGNAL(set2(Clickedlabel*)),this,SLOT(slotset2(Clickedlabel*)));
    connect(this,SIGNAL(set3(Clickedlabel*)),this,SLOT(slotset3(Clickedlabel*)));
    connect(this,SIGNAL(set4(Clickedlabel*)),this,SLOT(slotset4(Clickedlabel*)));
    connect(this,SIGNAL(set5(Clickedlabel*)),this,SLOT(slotset5(Clickedlabel*)));
    connect(this,SIGNAL(set6(Clickedlabel*)),this,SLOT(slotset6(Clickedlabel*)));

    //connect(this,SIGNAL(finished()),this,SLOT(stateupdate()));
    timer->start(1000);
   // id1=startTimer(1000);


//**************************fade in/out animation connection****************************//
    //connect(movie_1dollar,SIGNAL(frameChanged(int)),this,SLOT(stopmovie_1dollar()));
    //connect(movie_1dollar_out,SIGNAL(frameChanged(int)),this,SLOT(stopmovie_1dollar()));
    //connect(clickmovie_1dollar,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(movie_1dollarclicked()));
    //movie_1dollar->start();
    //setLayout(gridLayout);
    //id2=startTimer(2000);
    //id3=startTimer(100000);
}

gameDialog::~gameDialog()
{
    delete ui;
}

void gameDialog::slotset1(Clickedlabel *click)
{  click->setScaledContents(true);
    click->setGeometry(80,90,81,81);


}
void gameDialog::slotset2(Clickedlabel *click)
{  click->setScaledContents(true);
    click->setGeometry(230,90,81,81);

}
void gameDialog::slotset3(Clickedlabel *click)
{
    click->setScaledContents(true);
    click->setGeometry(380,90,81,81);
}
void gameDialog::slotset4(Clickedlabel *click)
{
    click->setScaledContents(true);
    click->setGeometry(80,220,81,81);


}
void gameDialog::slotset5(Clickedlabel *click)
{    click->setScaledContents(true);
    click->setGeometry(230,220,81,81);


}
void gameDialog::slotset6(Clickedlabel *click)
{    click->setScaledContents(true);
    click->setGeometry(380,220,81,81);


}
void gameDialog::initialize_progressbar(int sec)
{
    ui->progressBar->setRange(0,sec*100);
    ui->progressBar->setValue(0);
}

void gameDialog::start_progress()
{
    thread.start();
}
void gameDialog::stop_progress()
{
    thread.stopped=true;
}

void gameDialog::label_1dollarclicked()
{
    emit is1dollar();
    hongbao=hongbao+6;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_halfdollarclicked()
{
    emit ishalfdollar();
    hongbao=hongbao+3;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_1yuanclicked()
{
    emit is1yuan();
    hongbao=hongbao+1;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_500japclicked()
{
    emit is500jap();
    hongbao=hongbao+25;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_500korclicked()
{
    emit is500kor();
    hongbao=hongbao+3;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_50centclicked()
{
    //movie->start();
    emit is50cent();
    hongbao=hongbao+5;
    ui->label_15->setText(tr("%1").arg(hongbao));
}
void gameDialog::label_2eurclicked()
{
    hongbao=hongbao+14;
    ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_5000vieclicked()
{
     hongbao=hongbao+2;

    ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_50ausclicked()
{
     hongbao=hongbao+250;

ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_5ausclicked()
{
     hongbao=hongbao+25;

ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_1indclicked()
{
     hongbao=hongbao+0.1;

ui->label_15->setText(tr("%1").arg(hongbao));
}

void gameDialog::label_1engclicked()
{
     hongbao=hongbao+10;

ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_5roubleclicked(){
     hongbao=hongbao+0.5;

ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_50malaicentclicked()
{
     hongbao=hongbao+80;

ui->label_15->setText(tr("%1").arg(hongbao));}

void gameDialog::label_20mexicoclicked()
{
     hongbao=hongbao+8;

ui->label_15->setText(tr("%1").arg(hongbao));}


//void gameDialog::timerEvent(QTimerEvent *e)
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
void gameDialog::resetpar()
{
    round=1;
    hongbao=0.0;
    ui->label_15->setText(tr("%1").arg(hongbao));
    ui->label_13->setText(tr("Round %1").arg(round));
}

void gameDialog::timerUpdate()
{
    int q=qrand()%10000;
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("hh:mm:ss dddd");//("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_3->setText(str);
    //ui->label->setText(tr("%1").arg(q));
//    if(q>9500)
//    {
//        movie->start();
//    }
}
void gameDialog::nameupdate(QString str)
{
    ui->label_name->setText(str);
}

void gameDialog::changeBar(const long i)
{
    ui->progressBar->setValue(sec*100-i);
    ui->label_14->setText(tr("%1 s left").arg((sec*100-i)/100));
}

void gameDialog::changescene()
{
    round++;
    label1=qrand()%15;
    label2=qrand()%15;
    label3=qrand()%15;
    label4=qrand()%15;
    label5=qrand()%15;
    label6=qrand()%15;

    if(round==roundtoplay+1 | round>roundtoplay+1)
    {
        ui->label_name->setText(tr("finished"));
//        round=1;
//        hongbao=0.0;
//        ui->label_15->setText(tr("%1").arg(hongbao));
//        ui->label_13->setText(tr("Round %1").arg(round));
        accept();
        //change dialog to final dialog ,save the statics to xml file,
        //then play the finish animation,click button to return to login dialog
    }
    else
    {
//        if(label1==1)  emit set1(clicklabel_1dollar);
//        else if(label2==1)  emit set2(clicklabel_1dollar);
//        else if(label3==1)  emit set3(clicklabel_1dollar);
//        else if(label4==1)  emit set4(clicklabel_1dollar);
//        else if(label5==1)  emit set5(clicklabel_1dollar);
//        else if(label6==1)  emit set6(clicklabel_1dollar);

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
        else if(label1 ==7)
            emit set1(clicklabel_aus5);
        else if(label1 ==8)
            emit set1(clicklabel_aus50);
        else if(label1==9)
            emit set1(clicklabel_eng1);
        else if(label1 == 10)
            emit set1(clicklabel_vie5000);
        else if(label1 == 11)
            emit set1(clicklabel_ind1);
        else if(label1 ==12)
            emit set1(clicklabel_5rouble);
        else if(label1 ==13)
            emit set1(clicklabel_mexico20);
        else if(label1==14)
            emit set1(clicklabel_malai50sen);
        else if(label1 == 15)
            emit set1(clicklabel_2eur);

        if(label2==1)     //  label2
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
        else if(label2 ==7)
            emit set2(clicklabel_aus5);
        else if(label2 ==8)
            emit set2(clicklabel_aus50);
        else if(label2==9)
            emit set2(clicklabel_eng1);
        else if(label2 == 10)
            emit set2(clicklabel_vie5000);
        else if(label2 == 11)
            emit set2(clicklabel_ind1);
        else if(label2 ==12)
            emit set2(clicklabel_5rouble);
        else if(label2 ==13)
            emit set2(clicklabel_mexico20);
        else if(label2==14)
            emit set2(clicklabel_malai50sen);
        else if(label2 == 15)
            emit set2(clicklabel_2eur);


        if(label3==1)
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
        else if(label3 ==7)
            emit set3(clicklabel_aus5);
        else if(label3 ==8)
            emit set3(clicklabel_aus50);
        else if(label3==9)
            emit set3(clicklabel_eng1);
        else if(label3 == 10)
            emit set3(clicklabel_vie5000);
        else if(label3 == 11)
            emit set3(clicklabel_ind1);
        else if(label3 ==12)
            emit set3(clicklabel_5rouble);
        else if(label3 ==13)
            emit set3(clicklabel_mexico20);
        else if(label3==14)
            emit set3(clicklabel_malai50sen);
        else if(label3 == 15)
            emit set3(clicklabel_2eur);

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
        else if(label4 ==7)
            emit set4(clicklabel_aus5);
        else if(label4 ==8)
            emit set4(clicklabel_aus50);
        else if(label4==9)
            emit set4(clicklabel_eng1);
        else if(label4 == 10)
            emit set4(clicklabel_vie5000);
        else if(label4 == 11)
            emit set4(clicklabel_ind1);
        else if(label4 ==12)
            emit set4(clicklabel_5rouble);
        else if(label4 ==13)
            emit set4(clicklabel_mexico20);
        else if(label4==14)
            emit set4(clicklabel_malai50sen);
        else if(label4 == 15)
            emit set4(clicklabel_2eur);


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
        else if(label5 ==7)
            emit set5(clicklabel_aus5);
        else if(label5 ==8)
            emit set5(clicklabel_aus50);
        else if(label5==9)
            emit set5(clicklabel_eng1);
        else if(label5 == 10)
            emit set5(clicklabel_vie5000);
        else if(label5 == 11)
            emit set5(clicklabel_ind1);
        else if(label5 ==12)
            emit set5(clicklabel_5rouble);
        else if(label5 ==13)
            emit set5(clicklabel_mexico20);
        else if(label5==14)
            emit set5(clicklabel_malai50sen);
        else if(label5 == 15)
            emit set5(clicklabel_2eur);


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
        else if(label6 ==7)
            emit set6(clicklabel_aus5);
        else if(label6 ==8)
            emit set6(clicklabel_aus50);
        else if(label6==9)
            emit set6(clicklabel_eng1);
        else if(label6 == 10)
            emit set6(clicklabel_vie5000);
        else if(label6 == 11)
            emit set6(clicklabel_ind1);
        else if(label6 ==12)
            emit set6(clicklabel_5rouble);
        else if(label6 ==13)
            emit set6(clicklabel_mexico20);
        else if(label6==14)
            emit set6(clicklabel_malai50sen);
        else if(label6 == 15)
            emit set6(clicklabel_2eur);

    }
    ui->label_13->setText(tr("Round %1").arg(round));

}
void gameDialog::roundupdate(int ran)
{
    roundtoplay = ran;
}

//void gameDialog::movie_1dollarclicked()
//{
//    clickmovie_1dollar->setMovie(movie_1dollar_out);
//    movie_1dollar_out->start();

//}
//void gameDialog::stopmovie_1dollar()
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
