#include "progressbar_thread.h"

progressbar_thread::progressbar_thread()
{
    stopped = false;
    //connect(Clickedlabel ,SIGNAL,this,SLOT(progressbarreset()));
}

progressbar_thread::~progressbar_thread()
{
    //terminate();
    //quit();
}

void progressbar_thread::run()
{
    i = 0;
    while(!stopped){
        //qDebug()<<QString("mythread %1").arg(i++);
    //QString str = QString("%1 %").arg(i);
    emit barChanged(i);
    msleep(10);
    i++;
    if(i==500) {
        i=0;
        emit timesup();
    }}
    stopped = false;
}

void progressbar_thread::progressbarreset()
{
    stopped = true;
    i = 0;
    stopped = false;
}
