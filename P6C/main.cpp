#include "sistema.h"
#include <iostream>

int main()
{
    Sistema sistema;
    sistema.Simular("resultados.txt", 2, 10, 0.1); // Simula el sistema con 2 cuerpos durante 10 segundos con intervalos de 0.1 segundos

    std::cout << "Simulacion completada. Resultados escritos en 'resultados.txt'" << std::endl;

    return 0;
}
