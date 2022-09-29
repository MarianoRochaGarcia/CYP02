#include <stdio.h>
int main()
{
	int Posicion, Tamanio, PosicionHex, TamanioExa, Cero1, Cero2;
	Cero1 = 0000;
	Cero2 = 0000;
	scanf_s("%i", &Tamanio);
	scanf_s("%i", &Posicion);
	TamanioExa = Tamanio;
	PosicionHex = Posicion;
	printf("%c%c%08X%04i%04i%08X", 66, 77, TamanioExa, Cero1, Cero2, PosicionHex);
	return 0;
}