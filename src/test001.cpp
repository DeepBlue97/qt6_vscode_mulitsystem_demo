#include "test001.h"

test001::test001(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_test001)
{
    ui->setupUi(this);
}

test001::~test001()
{
    delete ui; 
}