// AREAS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	float area;
	float radio;
	printf("radio: ");
	scanf_s("%f", &radio);
	area = radio * radio * 3.1416;
	printf("El circulo tiene area de %.2f", area);
}