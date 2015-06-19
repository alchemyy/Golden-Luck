#include "widget.h"
#include "logindialog.h"
#include "lotterydialog.h"
#include "introdialog.h"
#include "seldialog.h"
#include "finaldialog.h"
#include "gamedialog.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <myitem.h>
#include <QTimer>
#include <QDateTime>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
//    QGraphicsScene *scene= new QGraphicsScene;
//    //QGraphicsRectItem *item2= new QGraphicsRectItem(100,100,50,50);//白色矩形图形项
//    //Myitem *item =new Myitem;         //红色矩形图形项
//    //scene->addItem(item);
//    //scene->addItem(item2);
//    for(int i=0;i<5;i++)
//    {
//        Myitem *item = new Myitem;
//        item->setPos(i*50+30,100);
//        scene->addItem(item);
//    }
//    QTimer timer;
//    QObject::connect(&timer,SIGNAL(timeout()),scene,SLOT(advance()));
//    QGraphicsLineItem *line = new QGraphicsLineItem(0,50,300,50);
//    scene->addItem(line);
//    RectItem *rect = new RectItem;
//    rect->setPos(100,200);
//    scene->addItem(rect);
//    QGraphicsView *view= new QGraphicsView;
//    view->setScene(scene);
//    view->resize(400,300);
//    timer.start(1000);
//    view->show();
    //Widget a;
    //a.setWindowTitle("HELLO SYDNEY");

    //Clickedlabel *clicklabel= new Clickedlabel(&a);
    //clicklabel->setGeometry(QRect(30,40,50,60));
    //QPixmap(101,81);
    //clicklabel->setPixmap(QPixmap(":/myimage/1dollar.png"));
    //clicklabel->adjustSize();
    //a.connect(clicklabel,SIGNAL(Clicked(Clickedlabel*)),&a,SLOT(labelclicked()));
    logindialog dlg;
    lotterydialog lottery;
    introdialog intro;
    seldialog select;
    gameDialog game;
    finaldialog final;
    dlg.setWindowTitle("Golden ▣▣ Luck");
    login:if(dlg.exec()==QDialog::Accepted){
         selectdialog:select.show();
            if(select.exec()==QDialog::Accepted){
                if(select.state==0)
                {
                    intro.show();
                    if(intro.exec()==QDialog::Accepted)
                    {
                        intro.close();
                        select.show();
                        goto selectdialog;  //如何返回另一个界面
                    }
                 }
                else if(select.state==1)
                    {
                    lottery.initial();
                    lottery.nameupdate(dlg.myname);
                    lottery.show();
                    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
                    int random =qrand() % 20;
                    lottery.roundupdate(random);
                    lottery.clickhere->start();
                    if(lottery.exec()==QDialog::Accepted)
                        lottery.timer->stop();
                        game.roundupdate(random);
                        game.nameupdate(dlg.myname);
                        game.start_progress();
                        game.show();
                        if(game.exec()==QDialog::Accepted)
                        {
                        game.stop_progress();
                        //xml write
                        if(game.hongbao>4000)
                        {
                            final.sethonor1();

                        }
                        else if(game.hongbao>3000)
                        {
                            final.sethonor2();
                        }
                          else if(game.hongbao>2000)
                        {
                            final.sethonor3();
                        }
                        else
                        {
                            final.sethonorbad();
                        }
                        game.resetpar();
                        game.close();
                        //xml read to final.listview
                        final.show();
                        if(final.exec()==QDialog::Accepted)
                            {
                                final.close();
                                goto login;
                            }
                        }
                      }
                    }
                }

    return app.exec();
}
