#include "particula.h"

Particula::Particula(float x, float y, float masa, float radio, float vx, float vy, float ax, float ay)
    : x(x), y(y), Masa(masa), Radio(radio), vx(vx), vy(vy), ax(ax), ay(ay)
{

}

void Particula::asignarCuerpo(float x, float y, float masa, float radio, float vx, float vy, float ax, float ay)
{
    this->x = x;
    this->y = y;
    this->Masa = masa;
    this->Radio = radio;
    this->vx = vx;
    this->vy = vy;
    this->ax = ax;
    this->ay = ay;
}


float Particula::getX() const
{
    return x;
}

float Particula::getY() const
{
    return y;
}

float Particula::getVx() const
{
    return vx;
}

float Particula::getVy() const
{
    return vy;
}

float Particula::getAx() const
{
    return ax;
}

float Particula::getAy() const
{
    return ay;
}

float Particula::getMasa() const
{
    return Masa;
}

float Particula::calcularDistancia(const Particula p)
{
    float distancia = 0;
    distancia = pow( x - p.getX(),2 ) + pow( y - p.getY(), 2 );      //  (x1-x2) + (y1-y2)
    distancia = sqrt(distancia);                                     // raiz de lo anterior
    return distancia;
}

float Particula::calcularAngulo(const Particula p)
{
    float angulo = 0;
    angulo = ( p.getY()- y ) / ( p.getX() - x);                     //  (y2-y1)/(y2-y1)
    angulo = atan(angulo);                                          //   tangente inversa de lo anterior
    return angulo;
}

float Particula::calcularAcX(const Particula p)
{
    float aceleracion = G * p.getMasa() * cos( calcularAngulo(p) ) / pow( calcularDistancia(p),2);     //gravitacion universal
    if( x > p.getX()){
        aceleracion = -aceleracion;  //Signo correcto de la aceleracion
    }
    return aceleracion;
}

float Particula::calcularAcY(const Particula p)
{
    float aceleracion = G * p.getMasa() * sin( calcularAngulo(p) ) / pow( calcularDistancia(p),2);
    if(x > p.getX()){
        aceleracion = -aceleracion;
    }
    return aceleracion;
}

void Particula::calcularPosicion(float dt)
{
    this->x += vx*dt + ax*dt*dt/2;
    this->y += vy*dt + ay*dt*dt/2;
    this->vx += ax*dt;
    this->vy += ay*dt;
}

void Particula::sumarAceleracion(float Ax, float Ay)
{
    this->ax += Ax;
    this->ay += Ay;
}

void Particula::asignarAceleracion(float Ax, float Ay)
{
   this->ax=Ax;
    this->ay=Ay;
}

void Particula::asignarPosicion(float px, float py)
{
    x += px;
    y += py;
}

float Particula::getRadio() const
{
    return Radio;
}
