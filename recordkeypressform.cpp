#include "recordkeypressform.h"
#include "ui_recordkeypressform.h"

RecordKeyPressForm::RecordKeyPressForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordKeyPressForm)
{
    ui->setupUi(this);
    record_edit = new RecorderLineEdit();
//    ui->frame->setLayout(new QGridLayout(ui->frame));
    ui->frame->layout()->addWidget(record_edit);

    record_edit->setFocus();
}

RecordKeyPressForm::~RecordKeyPressForm()
{
    record_edit->deleteLater();
    delete ui;
}


void RecordKeyPressForm::on_resetButton_clicked()
{
    if(record_edit)
    {
        record_edit->clear();
    }
}

void RecordKeyPressForm::on_doneButton_clicked()
{
    if(record_edit)
    {
        emit key_sequence(record_edit->text());
    }

    this->close();
}

void RecordKeyPressForm::on_cancelButton_clicked()
{
    this->close();
}
