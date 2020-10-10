#ifndef USERAGEDIALOG_H
#define USERAGEDIALOG_H

#include <QDialog>

class UserAgeDialog :public QDialog{

    Q_OBJECT
public:
    UserAgeDialog(QWidget *parent = nullptr);
    ~UserAgeDialog();


    void reject() override{
        emit userAgeChanged(newAge); // newAge is an int
        QDialog::reject();
    };

Q_SIGNALS:
    void userAgeChanged(int);
private:
    int newAge = 100;

};

#endif // USERAGEDIALOG_H

