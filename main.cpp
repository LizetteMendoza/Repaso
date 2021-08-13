#include <iostream>
#include<limits>
#include"clase.h"
#include"matriz.h"

using namespace std;

int main() {
	
	/*Bodega b1= Bodega("Frituras",50,25.50);
	Bodega b2;
	b2.setProducto("Cerveza");
	b2.setCantidad(25);
	b2.setPrecio(32.50);*/
	/*cout<<b2.getProducto()<<endl;
	cout<<b2.getCantidad()<<endl;
	cout<<b2.getPrecio()<<endl;*/

	Matriz m;

	/*m.agregarBodega(b2);
	m.agregarBodega(b1);*/



	//cout<<b2;

	/*Bodega b3;
	cin>>b3;

	m<<b3;

	m.mostrar();*/
	cout<<"Recuperado"<<endl;
	m.recuperar();
	
	m.mostrar();

	return 0;
}