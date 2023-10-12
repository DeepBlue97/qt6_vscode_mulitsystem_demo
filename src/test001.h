#pragma once
#include "ui_test001.h"
#include <QMainWindow>

class test001 : public QMainWindow {
    Q_OBJECT
    
public:
    test001(QWidget* parent = nullptr);
    ~test001();

private:
    Ui_test001* ui;
};