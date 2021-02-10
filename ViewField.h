#include <QWidget>

#include "ui_ViewField.h"

class ViewField : public QWidget
{
public:
    ViewField()
    {
        auto vf = new Ui::ViewField();
        vf->setupUi(this);
    }
};