#include <QWidget>

#include "ui_ViewField.h"

class ViewField : public QWidget
{
public:
    ViewField(QWidget* parent = nullptr)
        : QWidget(parent)
    {
        auto vf = new Ui::ViewField();
        vf->setupUi(this);
    }
};