#ifndef PARTICULA_H
#define PARTICULA_H

#include <iostream>
#include <cmath>
#include <vector>


#define G 1

class Particula
{
public:
    Particula(float x=0, float y=0, float Masa=0, float Radio=0, float vx=0, float vy=0, float ax=0, float ay=0);

    void asignarCuerpo(float x=0, float y=0, float Masa=0, float radio=0, float vx=0, float vy=0, float ax=0, float ay=0);

    float getX() const;
    float getY() const;
    float getVx() const;
    float getVy() const;
    float getAx() const;
    float getAy() const;
    float getMasa() const;

    float calcularDistancia(const Particula p);
    float calcularAngulo(const Particula p);
    float calcularAcX(const Particula p);
    float calcularAcY(const Particula p);
    void calcularPosicion(float dt);
    void sumarAceleracion(float Ax, float Ay);
    void asignarAceleracion(float Ax=0, float Ay=0);
    void asignarPosicion(float px, float py);

    float getRadio() const;

private:
    float x, y, Masa, Radio, vx, vy, ax, ay;

};

#endif // PARTICULA_H
