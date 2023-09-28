#include "Pila.hpp"

Pila::Pila()
{
	ultimo = NULL;
	longitud = 0;
}
void Pila::insertar(int v)
{
	pnodoPila nuevo;
	nuevo = new NodoPila(v, ultimo);
	ultimo = nuevo;
	logitud++;
}
int Pila:: extraer()
{
	pnodoPila nodo;
	int v;
	if(!ultimo)
		return 0;
	nodo = ultimo;
	ultimo = nodo ->valor;
	longitud--;
	delete nodo;
	return v;
	
}