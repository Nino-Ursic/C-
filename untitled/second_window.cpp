#include "second_window.h"
#include "ui_second_window.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

second_window::second_window(QString &userPath, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::second_window)
{
    ui->setupUi(this);
    ui->lineEdit->setText(userPath);
    user_path = userPath;
}

second_window::~second_window()
{
    delete ui;
}

void second_window::on_actionnew_triggered()
{
    file_path = user_path;
    ui->plainTextEdit->setPlainText("");
    ui->lineEdit->setText(user_path);
}


void second_window::on_actionopen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the file", user_path);
    file_path = file_name;
    ui->lineEdit->setText(file_path);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}



void second_window::on_pushButton_open_clicked()
{
    QString file_name = ui->lineEdit->text();
    file_path = file_name;
    ui->lineEdit->setText(file_path);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}


void second_window::on_actionsave_triggered()
{
    QString file_name = file_path;
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
    ui->statusBar->showMessage("file saved", 5000);
}


void second_window::on_pushButton_save_clicked()
{
    QString file_name = ui->lineEdit->text();
    file_path = file_name;
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
    ui->statusBar->showMessage("file saved", 5000);
}


void second_window::on_actionsave_as_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Choose the file", user_path);
    file_path = file_name;
    ui->lineEdit->setText(file_path);
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void second_window::on_actionundo_triggered()
{
    ui->plainTextEdit->undo();
}


void second_window::on_actionredo_triggered()
{
    ui->plainTextEdit->redo();
}







