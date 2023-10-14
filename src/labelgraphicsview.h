#ifndef LABELGRAPHICSVIEW_H
#define LABELGRAPHICSVIEW_H

#include <QGraphicsView>

class LabelGraphicsView : public QGraphicsView
{
public:
    LabelGraphicsView();
//    explicit LabelGraphicsView(QGraphicsView *parent = nullptr);

    LabelGraphicsView(QWidget *parent = nullptr);

//    LabelGraphicsView(QWidget *parent = nullptr) : QGraphicsView(parent)
//    {

//    }

};

#endif // LABELGRAPHICSVIEW_H
