#ifndef MATRIZ_H
#define MATRIZ_H
#include"clase.h"

class Matriz{

    Bodega arreglo[5];
    size_t cont;

public:
    Matriz();
    void agregarBodega(const Bodega&b);
    void mostrar();

};

#endif