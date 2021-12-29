#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{

    int day, month, year;



    for( day=1;day<32;day++){
        ui ->comboBox ->addItem(QString::number(day));
    }

    for( month=1;month<13;month++){
        ui ->comboBox_2 ->addItem(QString::number(month));
    }

    for( year=1950;year<2021;year++){
        ui ->comboBox_3 ->addItem(QString::number(year));
    }


    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    QDateTime dateTime = dateTime.currentDateTime();

    if ((time.second() % 100) == 0) {
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->label_date_time->setText(time_text);
}




void MainWindow::on_pushButton_clicked()
{
    std::ifstream dosya("C:/Users/bedir/Desktop/burcyazilimi2-0-0/dailycomments.txt");

    std::string satir;

    std::string dizi[14];

    int sayac = 0;

    if(dosya.is_open()){ //File Operations

        while(std::getline(dosya,satir)){

           dizi[sayac]=satir;

           sayac=sayac+1;
        }
        dosya.close();
    }


    int rastgele_sayi;

  //Dogum tarihini text yazdırma
   ui->dogumtarihi->setText(ui->comboBox->currentText()+"/"+ ui->comboBox_2->currentText()+"/" + ui->comboBox_3->currentText());



   //-------------------------------------------------------------------------------------

    //Ocak Ayı 1

    if(ui->comboBox_2->currentIndex()==0){

        if(ui->comboBox->currentIndex()<=18)
         {
          ui->burc->clear();
          ui->burc->setText("Oğlak Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>18 && ui->comboBox->currentIndex()<=30){
        ui->burc->clear();
        ui->burc->setText("Kova Burcusunuz");
      }



}
     //--------------------------------------------------------------------------

    //Şubat Ayı 2

    if(ui->comboBox_2->currentIndex()==1){

        if(ui->comboBox->currentIndex()<=17)
         {
          ui->burc->clear();
          ui->burc->setText("Kova Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>17 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Balik Burcusunuz");
      }
}
    //------------------------------------------------------------------------
        //Mart 3

    if(ui->comboBox_2->currentIndex()==2){

        if(ui->comboBox->currentIndex()<=19)
         {
          ui->burc->clear();
          ui->burc->setText("Balık Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>19 && ui->comboBox->currentIndex()<=30){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Koç Burcusunuz");
      }
}
    //-------------------------------------------------------------------------

    //Nisan  4

    if(ui->comboBox_2->currentIndex()==3){

        if(ui->comboBox->currentIndex()<=18)
         {
          ui->burc->clear();
          ui->burc->setText("Koç Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>18 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Boğa Burcusunuz");
      }
}
    //---------------------------------------------------------------------------

    //Mayıs Ayı 5

    if(ui->comboBox_2->currentIndex()==4){

        if(ui->comboBox->currentIndex()<=19)
         {
          ui->burc->clear();
          ui->burc->setText("Boğa Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>18 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("İkizler Burcusunuz");
      }
}

    //------------------------------------------------------------------------------

    //Haziran 6

    if(ui->comboBox_2->currentIndex()==5){

        if(ui->comboBox->currentIndex()<=19)
         {
          ui->burc->clear();
          ui->burc->setText("İkizler Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>19 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Yengeç Burcusunuz");
      }
}

    //-------------------------------------------------------------------------------

    //Temmuz 7

    if(ui->comboBox_2->currentIndex()==6){

        if(ui->comboBox->currentIndex()<=21)
         {
          ui->burc->clear();
          ui->burc->setText("Yengeç Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>21 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Aslan Burcusunuz");
      }
}
    //-------------------------------------------------------------------------------

   //Ağustos 8

    if(ui->comboBox_2->currentIndex()==7){

        if(ui->comboBox->currentIndex()<=21)
         {
          ui->burc->clear();
          ui->burc->setText("Aslan Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>21 && ui->comboBox->currentIndex()<=30){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Başak Burcusunuz");
      }
}


    //-------------------------------------------------------------------------------

       //Eylül Ayı 9

    if(ui->comboBox_2->currentIndex()==8){

        if(ui->comboBox->currentIndex()<=21)
         {
          ui->burc->clear();
          ui->burc->setText("Başak Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>21 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Terazi Burcusunuz");
      }
}

    //---------------------------------------------------------------------------------
       //Ekim Ayı 10
    if(ui->comboBox_2->currentIndex()==9){

        if(ui->comboBox->currentIndex()<=21)
         {
          ui->burc->clear();
          ui->burc->setText("Terazi Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>21 && ui->comboBox->currentIndex()<=30){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Akrep Burcusunuz");
      }
}

    //-------------------------------------------------------------------------------------

    //Kasım 11
    if(ui->comboBox_2->currentIndex()==10){

        if(ui->comboBox->currentIndex()<=20)
         {
          ui->burc->clear();
          ui->burc->setText("Akrep Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>20 && ui->comboBox->currentIndex()<=29){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Yay Burcusunuz");
      }
}
    //---------------------------------------------------------------------------------------------

    //Aralık Ayı 12

    if(ui->comboBox_2->currentIndex()==11){

        if(ui->comboBox->currentIndex()<=20)
         {
          ui->burc->clear();
          ui->burc->setText("Akrep Burcusunuz");
         }

        else if(ui->comboBox->currentIndex()>20 && ui->comboBox->currentIndex()<=30){ //2 sum
        ui->burc->clear();
        ui->burc->setText("Yay Burcusunuz");
      }
}
    //----------------------------------------------------------------------------------------
    //
    srand(time(NULL));

    rastgele_sayi=std::rand()%15;


    QString burc_yorumu = QString::fromStdString(dizi[rastgele_sayi]);

    ui->burcyorumu->setText(burc_yorumu);



    //28-07-2001

}




