#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>

namespace Ui {
class SmallWidget;
}

class SmallWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SmallWidget(QWidget *parent = nullptr);
    ~SmallWidget();
    void setNum(int num);
    int getNum();

private:
    Ui::SmallWidget *ui;
};

#endif // SMALLWIDGET_H
