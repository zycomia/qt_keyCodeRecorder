#ifndef RECORDKEYPRESSFORM_H
#define RECORDKEYPRESSFORM_H

#include <QWidget>
#include <recorderlineedit.h>

namespace Ui {
class RecordKeyPressForm;
}

class RecordKeyPressForm : public QWidget
{
    Q_OBJECT

public:
    explicit RecordKeyPressForm(QWidget *parent = 0);
    ~RecordKeyPressForm();

private slots:
    void on_resetButton_clicked();
    void on_doneButton_clicked();
    void on_cancelButton_clicked();

signals:
    void key_sequence(QString sequence);

private:
    Ui::RecordKeyPressForm *ui;
    RecorderLineEdit *record_edit;
};

#endif // RECORDKEYPRESSFORM_H
