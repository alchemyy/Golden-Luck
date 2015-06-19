#include "myitem.h"
Myitem::Myitem()
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsMovable);
    color= QColor(qrand()%256,qrand()%256,qrand()%256);
    setToolTip("Click and drag me!"); //提示
    QCursor mycursor;
    QPixmap pixmap("/Users/HOTDOG/Documents/cursor3.png");
    mycursor=QCursor(pixmap,-1,-1);
    setCursor(mycursor);
    //setCursor(Qt::OpenHandCursor); //改变光标形状

}

Myitem::~Myitem()
{

}

void Myitem::advance(int phase)
{
    if(!phase)return;
    moveBy(0,10);
}

QRectF Myitem::boundingRect() const
{
    qreal penWidth =1;
    return QRectF(0-penWidth/2,0-penWidth/2,
                  20+penWidth,20+penWidth);

}
void Myitem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    //painter->setBrush(Qt::red);
    //painter->drawRect(0,0,20,20);
    //painter->setBrush(color);
    painter->setBrush(!collidingItems().isEmpty()?Qt::red:Qt::green);
    painter->drawEllipse(0,0,20,20);
}
void Myitem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()!=Qt::LeftButton)
    {
        event->ignore();    //如果不是左键按下，忽略事件
        return;
    }
    QCursor mycursor;
    QPixmap pixmap("/Users/HOTDOG/Documents/press.png");
    mycursor=QCursor(pixmap,-1,-1);
    setCursor(mycursor);
    //setCursor(Qt::ClosedHandCursor);//如果是鼠标左键按下，改变光标形状
}
void Myitem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(QLineF(event->screenPos(),event->buttonDownScreenPos(Qt::LeftButton))
            .length() < QApplication::startDragDistance())
    {
        return;
    }
    QDrag *drag=new QDrag(event->widget());
    QMimeData *mime = new QMimeData;//新建QMimeData对象，用来存储拖动的数据
    drag->setMimeData(mime);    //关联
    mime->setColorData(color);  //放入颜色数据

    QPixmap pix(21,21);
    pix.fill((Qt::white));
    QPainter painter(&pix);
    paint(&painter,0,0);
    drag->setPixmap(pix);

    drag->setHotSpot(QPoint(10,15));
    drag->exec();
    QCursor mycursor;
    QPixmap pixmap("/Users/HOTDOG/Documents/cursor3.png");
    mycursor=QCursor(pixmap,-1,-1);
    setCursor(mycursor);
}

void Myitem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QCursor mycursor;
    QPixmap pixmap("/Users/HOTDOG/Documents/cursor3.png");
    mycursor=QCursor(pixmap,-1,-1);
    setCursor(mycursor);
    //setCursor(Qt::OpenHandCursor);
}

RectItem::RectItem()
{
    setAcceptDrops(true);
    color = QColor(Qt::lightGray);
}

QRectF RectItem::boundingRect() const
{
    return QRectF(0,0,50,50);
}

void RectItem::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
{
    painter->setBrush(dragOver?color.light(130):color);
    painter->drawRect(0,0,50,50);

}

void RectItem::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
    if(event->mimeData()->hasColor())
    {
        event->setAccepted(true);
        dragOver = true;
        update();
    }
    else event->setAccepted(false);
}

void RectItem::dragLeaveEvent(QGraphicsSceneDragDropEvent *event)
{
    Q_UNUSED(event);
    dragOver = false;
    update();
}

void RectItem::dropEvent(QGraphicsSceneDragDropEvent *event)
{
    dragOver = false;
    if(event->mimeData()->hasColor())
    {
        color = qvariant_cast<QColor>(event->mimeData()->colorData());
        update();
    }
}

void Myitem::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_W:moveBy(0,-10);break;
    case Qt::Key_S:moveBy(0,10);break;
    case Qt::Key_A:moveBy(-10,0);break;
    case Qt::Key_D:moveBy(10,0);break;
    }

}
