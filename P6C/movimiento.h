#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <cmath>



class Movimiento
{
private:
    double posx, posy, velx, vely, velocidad, angulo;
    int r;
    double tiempo = 0.1;

public:
    Movimiento();
    Movimiento(double x, double y, double v, double ang);
    void CalcularVelocidad();
    void CalcularPosicion();
    void ActualizarVelocidad();
    double getPosx() const;
    double getPosy() const;
};

#endif // MOVIMIENTO_H
