#pragma once

#include <QMainWindow>

#include "ViewField.h"

class MainWindow : public QMainWindow
{

public:
    MainWindow(QWidget* parent = nullptr)
        : QMainWindow()
    {
        setStyleSheet("QRadioButton { color: red};");
        setCentralWidget(new ViewField(this));
    }
};

