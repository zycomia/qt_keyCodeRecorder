#ifndef RECORDERLINEEDIT_H
#define RECORDERLINEEDIT_H

#include <QLineEdit>
#include <QKeyEvent>

class RecorderLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit RecorderLineEdit(QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent *event);

signals:

public slots:

};

#endif // RECORDERLINEEDIT_H
