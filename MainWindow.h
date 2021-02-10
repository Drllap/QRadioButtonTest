#pragma once

#include <QMainWindow>

#include "ViewField.h"

class MainWindow : public QMainWindow
{

public:
    MainWindow()
    {
        setStyleSheet("QRadioButton { color: red};");
        setCentralWidget(new ViewField);
    }
};

