#ifndef PROGRESSBAR_THREAD_H
#define PROGRESSBAR_THREAD_H

#include <QObject>
#include <QThread>
#include <clickedlabel.h>
//#include <widget.h>
class progressbar_thread : public QThread
{
    Q_OBJECT
public:
    explicit progressbar_thread();
    ~progressbar_thread();
    void stop();
    volatile bool stopped;
protected:
    void run();
signals:
    void barChanged(const long );
    void timesup();
private:
    long int i;
private slots:
    void progressbarreset();
};

#endif // PROGRESSBAR_THREAD_H
