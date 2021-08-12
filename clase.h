#ifndef CLASE_H
#define CLASE_H

#include<iostream>
#include<iomanip>
using namespace std;

class Bodega{
        string producto;
        int cantidad;
        float precio;
    public:
        Bodega();
        Bodega(const string &producto, int cantidad, float precio);
        void setProducto(const string&v);
        string getProducto();
        void setCantidad(int v);
        int getCantidad();
        void setPrecio(float v);
        float getPrecio();

        friend ostream& operator<<(ostream&out, const Bodega&b){
            
            out<<left;
            out<<setw(15)<<b.producto;
            out<<setw(10)<<b.cantidad;
            out<<setw(10)<<b.precio;
            
            return out;
        }

        friend istream& operator>>(istream&in, Bodega&b){

            string temp;
            int cantidad;
            float precio;

            cout<<"Producto: ";
            getline(cin,temp);
            b.setProducto(temp);

            cout<<"Cantidad: ";
            cin>>b.cantidad;

            cout<<"Precio: ";
            cin>>b.precio;

            
            return in;
        }
    };


#endif