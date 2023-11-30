#ifndef SISTEMA_H
#define SISTEMA_H
#include "movimiento.h"
#include <vector>
#include <string>



class Sistema
{
private:
    std::vector<Movimiento *> cuerpos;

public:
    Sistema();//Constru Defecto
    ~Sistema(); // Agregamos el destructor del sistema
    void Simular(const std::string &nombreArchivo, int numCuerpos, double tiempoTotal, double intervalo);
};

#endif // SISTEMA_H
