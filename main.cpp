#include "authorization.h"

#include <QApplication>
#include <QImage>
#include <QLabel>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  Authorization authWindow;
  authWindow.show();
  return app.exec();
}
