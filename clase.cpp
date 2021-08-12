#include <iostream>
#include"clase.h"

using namespace std;

Bodega::Bodega(){}
Bodega::Bodega(const string &producto, int cantidad, float precio){
    this->producto=producto; 
    this->cantidad=cantidad;
    this->precio=precio;
}
void Bodega::setProducto(const string&v){
    producto=v;
}
string Bodega::getProducto(){
    return producto;
}

void Bodega::setCantidad(int v){
    cantidad=v;
}

int Bodega::getCantidad(){
    return cantidad;
}


void Bodega::setPrecio(float v){
    precio=v;
}
        
float Bodega::getPrecio(){
    return precio;
}



