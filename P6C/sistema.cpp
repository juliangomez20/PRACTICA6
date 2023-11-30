#include "sistema.h"
#include "movimiento.h"
#include <iostream>
#include <fstream>

Sistema::Sistema()
{
    cuerpos.push_back(new Movimiento(0, 0, 10, 45)); // Cuerpo 1     posx = x; posy = y; velocidad = v; angulo = ang;r = 15;
    cuerpos.push_back(new Movimiento(5, 0, 15, 30)); // Cuerpo 2
    // Aquí puedeo agregar mas cuerpos en el vector
}

Sistema::~Sistema()
{
    for (auto &cuerpo : cuerpos)
    {
        delete cuerpo;
    }
}

void Sistema::Simular(const std::string &nombreArchivo, int numCuerpos, double tiempoTotal, double intervalo)
{
    std::ofstream archivo(nombreArchivo);

    // Encabezado del archivo
    for (int i = 1; i <= numCuerpos; ++i)
    {
        archivo << "Posicion_X_Cuerpo" << i << "\tPosicion_Y_Cuerpo" << i << "\t";
    }
    archivo << std::endl;

    // Simulación
    for (double tiempo = 0; tiempo <= tiempoTotal; tiempo += intervalo)
    {
        for (const auto &cuerpo : cuerpos)
        {
            cuerpo->CalcularVelocidad();
            cuerpo->CalcularPosicion();
            cuerpo->ActualizarVelocidad();
            archivo << cuerpo->getPosx() << "\t" << cuerpo->getPosy() << "\t";
        }
        archivo << std::endl;
    }

    archivo.close();
}
