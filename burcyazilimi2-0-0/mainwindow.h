#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>


namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    std::string dizi[14];//Normal Series


public slots:
    void myfunction();


private slots:
    //void on_label_date_time_2_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_comboBox_2_currentIndexChanged(const QString &arg1);


private:
    Ui::MainWindow *ui;
    QTimer *timer;
};

#endif // MAINWINDOW_H
