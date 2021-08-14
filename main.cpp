#include <iostream>
#include<limits>
#include"clase.h"
#include"matriz.h"

using namespace std;

int main() {
	
	Bodega b1= Bodega("Frituras",50,25.50);
	Bodega b2;
	b2.setProducto("Cerveza");
	b2.setCantidad(25);
	b2.setPrecio(32.50);
	Bodega b4 = Bodega("Jugo",30,43.50);
	Bodega b5 = Bodega("Agua",25,9.10);
	/*cout<<b2.getProducto()<<endl;
	cout<<b2.getCantidad()<<endl;
	cout<<b2.getPrecio()<<endl;*/
	

	Matriz <Bodega> m;
	m.insertar_final(b1);
	m.insertar_final(b2);
	m.insertar_final(b4);
	m.insertar_inicio(b5);

	cout<<"Tamanio"<<m.size()<<endl;
	

	/*for (size_t i = 0; i < m.size(); i++)
	{
		cout<<m[i]<<" ";
	}*/

	m.mostrar();
	cout<<endl<<endl<<endl;

	Bodega b6 = Bodega("Cigarros",45,30);

	m.insertar(b6,3);

	m.mostrar();
	cout<<endl;
	
	m.eliminar(3);

	m.mostrar();
	cout<<endl;
	m.eliminar_final();
	m.mostrar();
	cout<<endl;

	m.eliminar_inicio();
	m.mostrar();
	cout<<endl;
	Bodega b9;
	b9.setProducto("Frituras");

	Bodega *b = m.buscar(b9);
	cout<<b<<" "<<*b<<endl;
	cout<<endl;
	



	//cout<<b2;

	/*Bodega b3;
	cin>>b3;

	m<<b3;

	m.mostrar();
	cout<<"Recuperado"<<endl;
	m.recuperar();*/
	
	//m.mostrar();

	return 0;
}