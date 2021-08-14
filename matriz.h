#ifndef MATRIZ_H
#define MATRIZ_H
#include"clase.h"
#include<fstream>
#include<string>
#include<iostream>
#include<iomanip>

template<class T>
class Matriz{

    T *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 5;

    void expandir();


public:
    Matriz();
    ~Matriz();
    void agregarBodega(const T&b);
    void mostrar();
    void respaldar();
    void recuperar();
    void insertar_final(T &v);
    void insertar_inicio(T &v);
    void insertar(T &v, size_t p);
    void eliminar_final();
    void eliminar_inicio();
    void eliminar(size_t p);
    size_t size();
    T operator[](size_t p){
        return arreglo[p];
    }

    friend Matriz& operator <<(Matriz& m, const T&b){
        m.agregarBodega(b);

        return m;
    }

};

template<class T>
Matriz<T>::Matriz(){

    arreglo = new T[MAX];
    cont=0;
    tam = MAX;
}

template<class T>
Matriz<T>::~Matriz(){

    delete[] arreglo;
}

template<class T>
void Matriz<T>::expandir(){
    T *nuevo = new T[tam+MAX];

    for (size_t i=0; i<cont; i++){
        nuevo[i]=arreglo[i];
    }

    delete[] arreglo;
    arreglo = nuevo;
    tam=tam+MAX;
}

template<class T>
size_t Matriz<T>::size(){
    return cont;
}

template<class T>
void Matriz<T>::insertar_final(T &v){
    if(cont == tam){
        expandir();
    }

    arreglo[cont]=v;
    cont++;
}

template<class T>
void Matriz<T>::insertar_inicio(T &v){
    if(cont == tam){
        expandir();
    }

    for (size_t i =cont; i > 0; i--)
    {
        arreglo[i]=arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
    
}

template<class T>
void Matriz<T>::insertar(T &v, size_t p){
    
    if (p>=cont){
        cout<<"Posicion no valida"<<endl;
        return;
    }
    if(cont == tam){
        expandir();
    }
    for (size_t i = cont; i > p; i--)
    {
        arreglo[i]=arreglo[i-1];
    }
    arreglo[p] = v;
    cont++;
    
}

template<class T>
void Matriz<T>::eliminar_final(){
    if(cont==0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    cont--;
   
}

template<class T>
void Matriz<T>::eliminar_inicio(){
    if(cont==0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    for (size_t i = 0; i < cont; i++)
    {
        arreglo[i]=arreglo[i+1];
    }
    cont--;
   
}

template<class T>
void Matriz<T>::eliminar(size_t p){
    if(cont==0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    for (size_t i = p; i < cont-1; i++)
    {
        arreglo[i]=arreglo[i+1];
    }
    cont--;
   
}

template<class T>
void Matriz<T>::mostrar(){
    cout<<left;
    cout<<setw(15)<<"Producto";
    cout<<setw(10)<<"Cantidad";
    cout<<setw(10)<<"Precio";
    cout<<endl;
    for(size_t i=0; i<cont; i++){
        T & b = arreglo[i];
        /*cout<<"Producto: "<<b.getProducto()<<endl;
        cout<<"Cantidad: "<<b.getCantidad()<<endl;
        cout<<"Precio: "<<b.getPrecio()<<endl;*/
        cout<<b;
        //cout<<endl;
    }

}



#endif