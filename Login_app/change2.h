#ifndef CHANGE2_H
#define CHANGE2_H

#include <QDialog>

namespace Ui {
class Change2;
}

class Change2 : public QDialog
{
    Q_OBJECT

public:
    explicit Change2(QWidget *parent = nullptr);
    ~Change2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Change2 *ui;
};

#endif // CHANGE2_H
