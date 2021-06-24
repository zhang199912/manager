#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>

namespace Ui {
class Application;
}
class Controller;
class Application : public QWidget
{
    Q_OBJECT

public:
    explicit Application(Controller *c,QWidget *parent = nullptr);
    ~Application();

private slots:
    void on_confirmSubmission_clicked();

private:
    Ui::Application *ui;
    Controller *c;
};

#endif // APPLICATION_H
