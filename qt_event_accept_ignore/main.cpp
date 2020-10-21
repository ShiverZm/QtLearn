
#include <QApplication>
#include "custombutton.h"

int main(int argc, char *argv[])
{
     QApplication a(argc, argv);

//     CustomButton btn;
//     btn.setText("This is a Button!");
//     btn.show();

     MainWindow win;
     win.show();

     return a.exec();
}
