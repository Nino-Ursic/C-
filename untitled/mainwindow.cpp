#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/res/img/pngwing.com.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QFile file("C:/Users/Victus/Desktop/Notepad+/untitled/img/users.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream in(&file);
    int flag = 0;
    QString username = "";
    QString password = "";
    while(!in.atEnd()){
        in >> username >> password;
        if(username == ui->lineEdit_username->text() && password == ui->lineEdit_password->text()){
            flag = 1;
            break;
        }
    }
    file.close();
    if(flag == 1){
        QString userPath = "C:/Users/Victus/Desktop/Notepad+/files/" + username + "/";
        hide();
        sec_w = new second_window(userPath);
        sec_w->show();
    }else{
        QMessageBox::warning(this, "Log in", "User not found");
    }

}


void MainWindow::on_pushButton_signIn_clicked()
{

    QFile file_check("C:/Users/Victus/Desktop/Notepad+/untitled/img/users.txt");

    if(!file_check.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream in(&file_check);
    int flag = 0;
    QString username = "";
    QString password = "";
    while(!in.atEnd()){
        in >> username >> password;
        if(username == ui->lineEdit_username->text() && password == ui->lineEdit_password->text()){
            flag = 1;
            break;
        }
    }
    file_check.close();
    if(flag == 1){
        QMessageBox::warning(this, "Log in", "User with this password and username already exist");
        ui->statusbar->showMessage("User not added", 5000);
        return;
    }



    QFile file("C:/Users/Victus/Desktop/Notepad+/untitled/img/users.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);

    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    out << username << " " << password << "\n";
    QString userPath = "C:/Users/Victus/Desktop/Notepad+/files/" + username;
    QDir().mkpath(userPath);
    ui->statusbar->showMessage("User succesfully added", 5000);


    file.close();
}

