// AREAS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	float area;
	float altura;
	float base;
	printf("Altura: ");
	scanf_s("%f", &altura);
	printf("Base: ");
	scanf_s("%f", &base);
	area = (base * altura) / 2;
	printf("El triangulo tiene area de %.1f", area);
}