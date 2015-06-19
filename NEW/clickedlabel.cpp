#include "clickedlabel.h"
Clickedlabel::Clickedlabel(QWidget *parent):
    QLabel(parent)
{
    QCursor mycursor;
    QPixmap pixmap("/Users/HOTDOG/Documents/cursor3.png");
    mycursor=QCursor(pixmap,-1,-1);
    setCursor(mycursor);
}

void Clickedlabel::mouseReleaseEvent(QMouseEvent *e)
{
    emit Clicked(this);
    //QLabel::mouseReleaseEvent(e);
}
