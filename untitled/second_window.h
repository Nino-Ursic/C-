#ifndef SECOND_WINDOW_H
#define SECOND_WINDOW_H

#include <QMainWindow>

namespace Ui {
class second_window;
}

class second_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit second_window(QString &userPath, QWidget *parent = nullptr);
    ~second_window();

private slots:
    void on_actionnew_triggered();

    void on_actionopen_triggered();

    void on_actionsave_triggered();

    void on_pushButton_clicked();

    void on_actionsave_as_triggered();

    void on_actionundo_triggered();

    void on_actionredo_triggered();

    void on_pushButton_open_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::second_window *ui;
    QString file_path;
    QString user_path;
};

#endif // SECOND_WINDOW_H
