#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    // Création d'un widget qui servira de fenêtre
      QWidget fenetre;
      fenetre.setFixedSize(300, 150);

    QPushButton bouton("bonjour le monde",&fenetre);
    bouton.move(60, 50);
    bouton.show();

    return app.exec();
}
