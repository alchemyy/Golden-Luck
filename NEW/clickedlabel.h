#ifndef CLICKEDLABEL_H
#define CLICKEDLABEL_H

#include <QWidget>
#include <QLabel>
class Clickedlabel : public QLabel
{
    Q_OBJECT

public:
    explicit Clickedlabel(QWidget *parent =0);
    ~Clickedlabel(){};
protected:
    virtual void mouseReleaseEvent(QMouseEvent *e);
signals:
    void Clicked(Clickedlabel *clicked);//(Clickedlabel *clicked);
private:
    QString m_str;
};

#endif // CLICKEDLABEL_H
