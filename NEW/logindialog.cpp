#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QWidget>
logindialog::logindialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logindialog)
{
    ui->setupUi(this);
}

logindialog::~logindialog()
{
    delete ui;
}

void logindialog::on_loginbtn_clicked()
{
//    if(ui->usernameline->text().trimmed()==tr("yanghaojian")&&
//            ui->passwordline->text()==tr("1234")
//       || ui->usernameline->text().trimmed()==tr("nihao") &&
//            (ui->passwordline->text()==tr("1234")))
    if(ui->usernameline->text().trimmed()==tr("2012130194"))
    {
        accept();
        myname = tr("杨豪健");//ui->usernameline->text().trimmed();
    }
    else if(ui->usernameline->text().trimmed()==tr("2010130336")){accept();myname=tr("李鸿哲");}
    else if(ui->usernameline->text().trimmed()==tr("2011130138")){accept();myname=tr("张小虎");}
    else if(ui->usernameline->text().trimmed()==tr("2011130294")){accept();myname=tr("丁雪林");}
    else if(ui->usernameline->text().trimmed()==tr("2011130305")){accept();myname=tr("余立奇");}
    else if(ui->usernameline->text().trimmed()==tr("2012130009")){accept();myname=tr("陈涛");}
    else if(ui->usernameline->text().trimmed()==tr("2012130010")){accept();myname=tr("刘万盛");}
    else if(ui->usernameline->text().trimmed()==tr("2012130011")){accept();myname=tr("杨铭浩");}
    else if(ui->usernameline->text().trimmed()==tr("2012130015")){accept();myname=tr("王炎杰");}
    else if(ui->usernameline->text().trimmed()==tr("2012130028")){accept();myname=tr("周志彬");}
    else if(ui->usernameline->text().trimmed()==tr("2012130029")){accept();myname=tr("曾志锦");}
    else if(ui->usernameline->text().trimmed()==tr("2012130032")){accept();myname=tr("孙源宏");}
    else if(ui->usernameline->text().trimmed()==tr("2012130043")){accept();myname=tr("李林春");}
    else if(ui->usernameline->text().trimmed()==tr("2012130047")){accept();myname=tr("刘晨");}
    else if(ui->usernameline->text().trimmed()==tr("2012130053")){accept();myname=tr("钱宝根");}
    else if(ui->usernameline->text().trimmed()==tr("2012130081")){accept();myname=tr("杨波");}
    else if(ui->usernameline->text().trimmed()==tr("2012130093")){accept();myname=tr("吴昌夺");}
    else if(ui->usernameline->text().trimmed()==tr("2012130097")){accept();myname=tr("陈灿明");}
    else if(ui->usernameline->text().trimmed()==tr("2012130124")){accept();myname=tr("潘安");}
    else if(ui->usernameline->text().trimmed()==tr("2012130128")){accept();myname=tr("李华章");}
    else if(ui->usernameline->text().trimmed()==tr("2012130152")){accept();myname=tr("崔迪");}
    else if(ui->usernameline->text().trimmed()==tr("2012130184")){accept();myname=tr("林晓霞");}
    else if(ui->usernameline->text().trimmed()==tr("2012130194")){accept();myname=tr("杨豪健");}
    else if(ui->usernameline->text().trimmed()==tr("2012130197")){accept();myname=tr("江金洪");}
    else if(ui->usernameline->text().trimmed()==tr("2012130226")){accept();myname=tr("王志铭");}
    else if(ui->usernameline->text().trimmed()==tr("2012130228")){accept();myname=tr("陈传杰");}
    else if(ui->usernameline->text().trimmed()==tr("2012130229")){accept();myname=tr("王玉琮");}
    else if(ui->usernameline->text().trimmed()==tr("2012130237")){accept();myname=tr("郑润华");}
    else if(ui->usernameline->text().trimmed()==tr("2012130239")){accept();myname=tr("卢远");}
    else if(ui->usernameline->text().trimmed()==tr("2012130246")){accept();myname=tr("孙泽威");}
    else if(ui->usernameline->text().trimmed()==tr("2012130248")){accept();myname=tr("陈俊安");}
    else if(ui->usernameline->text().trimmed()==tr("2012130249")){accept();myname=tr("刘泽");}
    else if(ui->usernameline->text().trimmed()==tr("2012130254")){accept();myname=tr("杨善棠");}
    else if(ui->usernameline->text().trimmed()==tr("2012130266")){accept();myname=tr("罗嗣达");}
    else if(ui->usernameline->text().trimmed()==tr("2012130279")){accept();myname=tr("徐兴航");}
    else if(ui->usernameline->text().trimmed()==tr("2012130282")){accept();myname=tr("杨司敏");}
    else if(ui->usernameline->text().trimmed()==tr("2012130283")){accept();myname=tr("肖松松");}
    else if(ui->usernameline->text().trimmed()==tr("2012130284")){accept();myname=tr("陈泽宾");}
    else if(ui->usernameline->text().trimmed()==tr("2012130285")){accept();myname=tr("陈儒锋");}
    else if(ui->usernameline->text().trimmed()==tr("2012130286")){accept();myname=tr("靳东升");}
    else if(ui->usernameline->text().trimmed()==tr("2012130293")){accept();myname=tr("吴泽鑫");}
    else if(ui->usernameline->text().trimmed()==tr("2012130340")){accept();myname=tr("郑少伟");}
    else if(ui->usernameline->text().trimmed()==tr("2012130341")){accept();myname=tr("程孟康");}
    else if(ui->usernameline->text().trimmed()==tr("2012130342")){accept();myname=tr("彭志峰");}
    else if(ui->usernameline->text().trimmed()==tr("2012130362")){accept();myname=tr("陈远升");}
    else if(ui->usernameline->text().trimmed()==tr("2012130367")){accept();myname=tr("厉东武");}
    else if(ui->usernameline->text().trimmed()==tr("2012200029")){accept();myname=tr("林国钊");}
    else if(ui->usernameline->text().trimmed()==tr("2013800323")){accept();myname=tr("李祖豪");}
    else if(ui->usernameline->text().trimmed()==tr("2013800605")){accept();myname=tr("孙锐群");}
    else if(ui->usernameline->text().trimmed()==tr("2013800609")){accept();myname=tr("丘传欣");}
    else if(ui->usernameline->text().trimmed()==tr("2013800649")){accept();myname=tr("陈俊峰");}


    else
    {
        QMessageBox::warning(this,tr("You are Naughty"),
                             tr("Student ID error!"),
                             QMessageBox::Yes);
        ui->usernameline->clear();
        //ui->passwordline->clear();
        ui->usernameline->setFocus();
    }
}

void logindialog::on_exitbtn_clicked()
{
    close();
}
