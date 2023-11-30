#include "movimiento.h"

Movimiento::Movimiento()
{
}

Movimiento::Movimiento(double x, double y, double v, double ang)
{
    posx = x;
    posy = y;
    velocidad = v;
    angulo = ang;

}

void Movimiento::CalcularVelocidad()
{
    velx = velocidad * cos(angulo);
    vely = velocidad * sin(angulo) - 9.8 * tiempo;
}

void Movimiento::CalcularPosicion()
{
    posx += velx * tiempo;
    posy += vely * tiempo - 0.5 * 9.8 * tiempo * tiempo;
}

void Movimiento::ActualizarVelocidad()
{
    velocidad = sqrt(velx * velx + vely * vely);
    angulo = atan2(vely, velx);
}

double Movimiento::getPosx() const
{
    return posx;
}

double Movimiento::getPosy() const
{
    return posy;
}
