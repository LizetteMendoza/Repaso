#include"matriz.h"
#include<fstream>
#include<string>

using namespace std;



template<class T>
void Matriz<T>::agregarBodega(const T&b){
    if(cont<5){
        arreglo[cont] = b;
        cont++;
    }
    else{
        cout<<"Arreglo llego"<<endl;
    }
}


template<class T>
void Matriz<T>::respaldar(){

    ofstream archivo("bodega.txt");
    if (archivo.is_open()){
        for(size_t i=0; i<cont; i++){
            Bodega &b = arreglo[i];
            archivo << b.getProducto()<<"|";
            archivo << b.getCantidad()<<"|";
            archivo << b.getPrecio()<<"*";

        }
    }
    archivo.close();
}

template<class T>
void Matriz<T>::recuperar(){

    ifstream archivo("bodega.txt");
    if(archivo.is_open()){
        string temp;
        int cantidad;
        float precio;
        Bodega b;

        while(true){
           
            getline(archivo,temp,'|');
            if(archivo.eof()){
                break;
            }
            
            b.setProducto(temp);
            getline(archivo, temp,'|');
            cantidad = stoi(temp);
            
            b.setCantidad(cantidad);
            
            getline(archivo, temp,'*');
            
            precio = stof(temp);
            b.setPrecio(precio);

            agregarBodega(b);
            
        }
    }
    archivo.close();
}