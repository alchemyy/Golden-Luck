#ifndef MYITEM_H
#define MYITEM_H
#include <QApplication>
#include <QWidget>
#include <QObject>
#include <QPainter>
#include <QCursor>
#include <QGraphicsItem>
#include <QtGui>
#include <QDrag>
#include <QGraphicsSceneMouseEvent>
class Myitem : public QGraphicsItem
{
protected:
    void advance(int phase);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
public:
    Myitem();
    ~Myitem();
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
private:
    QColor color;
};

class RectItem:public QGraphicsItem
{
public:
    RectItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event);
    void dragLeaveEvent(QGraphicsSceneDragDropEvent *event);
    void dropEvent(QGraphicsSceneDragDropEvent *event);
private:
    QColor color;
    bool dragOver;
};

#endif // MYITEM_H
