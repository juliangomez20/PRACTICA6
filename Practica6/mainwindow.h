#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>

#include"particula.h"
#include"planeta.h"

#define dt 1
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    float calculoEscala();                                      //calcula la escala
    QList<float> calculoCentroMasas(QList<Planeta*> planetas);  //calcula el centro de masas del sistema
    void calculoAceleracion();                                  //calcula la aceleracion de cada cuerpo
    void inception();

private slots:
    void actualizar();

private:
    Ui::MainWindow *pantalla;
    Planeta *planet;
    QTimer *tiempo;
    QGraphicsScene *escena;
    QList<Planeta *> sistema;
    QList<float> origen;
    float s; //escala
};
#endif // MAINWINDOW_H
