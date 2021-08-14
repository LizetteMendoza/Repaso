#ifndef MATRIZ_H
#define MATRIZ_H
#include"clase.h"

class Matriz{

    Bodega *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 5;

    void expandir();


public:
    Matriz();
    ~Matriz();
    void agregarBodega(const Bodega&b);
    void mostrar();
    void respaldar();
    void recuperar();
    void insertar_final(Bodega &v);
    void insertar_inicio(Bodega &v);
    size_t size();
    Bodega operator[](size_t p){
        return arreglo[p];
    }

    friend Matriz& operator <<(Matriz& m, const Bodega&b){
        m.agregarBodega(b);

        return m;
    }

};

#endif