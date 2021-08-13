#include"matriz.h"
#include<fstream>
#include<string>

using namespace std;
Matriz::Matriz(){

    cont=0;
}

void Matriz::agregarBodega(const Bodega&b){
    if(cont<5){
        arreglo[cont] = b;
        cont++;
    }
    else{
        cout<<"Arreglo llego"<<endl;
    }
}

void Matriz::mostrar(){
    cout<<left;
    cout<<setw(15)<<"Producto";
    cout<<setw(10)<<"Cantidad";
    cout<<setw(10)<<"Precio";
    cout<<endl;
    for(size_t i=0; i<cont; i++){
        Bodega &b = arreglo[i];
        /*cout<<"Producto: "<<b.getProducto()<<endl;
        cout<<"Cantidad: "<<b.getCantidad()<<endl;
        cout<<"Precio: "<<b.getPrecio()<<endl;*/
        cout<<b;
        //cout<<endl;
    }

}

void Matriz::respaldar(){

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

void Matriz::recuperar(){

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