#include "NodoPila.hpp"

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(int v);
	int extrear();
	int cima;
	void mostrar();
	int getLongitud();
	
private:
	pnodoPila ultimo;
	int longitud;

};