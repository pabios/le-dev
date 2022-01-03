#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    affichageTab();
    this->setStyleSheet("background-color: #212B23; font-size: 15px;");
    this->setWindowTitle("Les sequences Contigue Avec longueurs explicite");
}

MainWindow::~MainWindow()
{
    delete ui;
}

const int taille = 5;
QString tab[taille];
int l = 0;
QString valeur;
bool rep;

void MainWindow::on_pushButton_clicked()
{
     valeur = ui->lineEdit->text();
   // int val = valeur.toInt();
    tab[l] = valeur;
    l = l + 1;

   // QMessageBox msgBox;
    //msgBox.setText("vous venez d'ajouter "+valeur+" a la liste");
    //msgBox.exec();

}


void MainWindow::on_pushButton_2_clicked()
{
      const int numRows = 1;
          const int numColumns = l;

          QStandardItemModel* model = new QStandardItemModel(numRows, numColumns);

          if(l == 0){
              QString text = "saisir avant ";
              QStandardItem* item = new QStandardItem(text);
               model->setItem(0, 0, item);
          }else{
              for (int row = 0; row < numRows; ++row)
              {
                  for (int column = 0; column < numColumns; ++column)
                  {
                      QString text = tab[column];

                      QStandardItem* item = new QStandardItem(text);
                      model->setItem(row, column, item);
                       model->setHeaderData(column, Qt::Horizontal, QObject::tr("pos"));
                  }
                     model->setHeaderData(row, Qt::Vertical, QObject::tr("elt"));
               }
          }

          ui->tableView->setModel(model);
}

void MainWindow::affichageTab(){
    QStandardItemModel* model = new QStandardItemModel(l, l);

    if(l == 0){
        QString text = "tableau vide ";
        QStandardItem* item = new QStandardItem(text);

         model->setItem(0, 0, item);

    }
      ui->tableView->setModel(model);

}

void MainWindow::estConsecutif(){
     QMessageBox msgBox;
    int i = 0;
    int j = 0;
    rep = false;

    int length = sizeof(tab) / sizeof(QString);

    if(length == 0){
        msgBox.setText("la liste est vide ");
        msgBox.exec();
        }else if(l == 1){
        msgBox.setText("la liste ne comporte qu'un seul element");
        msgBox.exec();
        }else{
        while(i != l){
            j = i + 1;
            while(j !=l){
                if( (tab[j].toInt() - 1) != tab[i].toInt()){
                    rep = false;
                }else{
                    rep = true;
                }
                j++;
            }
            i = i + 1;
        }

        if( rep == false){

             msgBox.setText("la liste n'est pas consecutive");
             msgBox.exec();

        }else{
           /* QString aString = "elt consecutif";
            qDebug() << aString;  */

             msgBox.setText("Tout les elements de la liste sont consecutifs");
             msgBox.exec();
        }
    }


}

void MainWindow::on_pushButton_3_clicked()
{
     this->setStyleSheet("background-color: #430B0B; font-size: 15px; color: white;");
    estConsecutif();


}

