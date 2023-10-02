#include <iostream>
#include <string>

using namespace std;


int PrimerosPasos()
{
	cout << "como te llamas\n";
	string nombre;
	cin >> nombre;
	cout << "Hola" << nombre;

	int numero1,numero2;
	cout << "Dame el priemro numero";
	cin >> numero1;
	cout << "Dame el segundo numero";
	cin >> numero2;
	int suma = numero1 + numero2;
	cout << "La suma es:" << suma;
}

int main()
{
	int base;
	int altura;
	cin >> base;
	cout << "Dame la altura del triangulo";
	cin >> altura;
	float area = base * altura / 2;
	cout << "El area es:" << area;

	int edad;
	cout << "Dame tu edad";
	cin >> edad;
	float diasvida = edad * 365;
	float segundosVida = diasvida * 86.400;
	cout << "Tienes " << segundosVida << " de vida";
}
