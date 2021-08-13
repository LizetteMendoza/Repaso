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
    void respaldar();

    friend Matriz& operator <<(Matriz& m, const Bodega&b){
        m.agregarBodega(b);

        return m;
    }

};

#endif