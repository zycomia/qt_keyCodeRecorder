#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <recordkeypressform.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_recordButton_clicked()
{
    RecordKeyPressForm * record_form = new RecordKeyPressForm();
    connect(record_form, SIGNAL(key_sequence(QString)), ui->recordKeyOutput, SLOT(setPlainText(QString)));
    record_form->setAttribute(Qt::WA_DeleteOnClose);
    record_form->show();
}
