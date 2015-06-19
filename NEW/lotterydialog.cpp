#include "lotterydialog.h"
#include "ui_lotterydialog.h"

lotterydialog::lotterydialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lotterydialog)
{
    roundtoplay = 0;
    ui->setupUi(this);
    ui->label_2->setDisabled(true);
    openit->setParent(this);
    timer->setParent(this);
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
    ui->label_name->setPalette(pe);
    ui->label->setPalette(pe);
    ui->label_2->setPalette(pe);
    openit->setMovie(clickhere);
    openit->setGeometry(0,0,480,400);
    openit->setScaledContents(true);
    //openit->resize(this->size());
    connect(clickhere,SIGNAL(frameChanged(int)),this,SLOT(stopmovie()));
    connect(clickhere_out,SIGNAL(frameChanged(int)),this,SLOT(stopmovie()));
    connect(openit,SIGNAL(Clicked(Clickedlabel*)),this,SLOT(movie_clicked()));
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
}

lotterydialog::~lotterydialog()
{
    delete ui;
}
void lotterydialog::initial()
{
    ui->label_2->setDisabled(true);
    clickhere->jumpToFrame(0);
    clickhere_out->jumpToFrame(0);
    openit->setDisabled(false);
    openit->setHidden(false);
    openit->setMovie(clickhere);

}

void lotterydialog::nameupdate(QString str)
{
    ui->label_name->setText(str);
}

void lotterydialog::movie_clicked()
{
    openit->setMovie(clickhere_out);
    clickhere_out->start();
//    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
//    roundtoplay =qrand() % 20;
    timer->start(5000);
    //generate random number


}
void lotterydialog::stopmovie()
{
    if(clickhere->currentFrameNumber()==(clickhere->frameCount()-1))
    {
        //clickmovie_1dollar->setPixmap(QPixmap(":/myimage/1dollar.png"));
        //clickmovie_1dollar->setScaledContents(true);
        clickhere->stop();
    }
    if(clickhere_out->currentFrameNumber()==(clickhere_out->frameCount()-1))
    {
        //timer->stop();
        clickhere_out->stop();
        openit->setDisabled(true);
        openit->setHidden(true);
        ui->label_2->setText(tr("Congratulations! You have got %1 round to play!").arg(roundtoplay));
        ui->label_2->setDisabled(false);
    }
}

void lotterydialog::timerUpdate()
{
    accept();
}
void lotterydialog::roundupdate(int ran)
{
    roundtoplay = ran;
}
