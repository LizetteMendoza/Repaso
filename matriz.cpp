#include"matriz.h"
#include<fstream>

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
            archivo << b;
        }
    }
    archivo.close();
}