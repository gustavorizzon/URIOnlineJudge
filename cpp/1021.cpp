#include <iostream>

using namespace std;

void mostrarMsg(int quantidade, string tipo, string valor)
{
	cout << quantidade << " " << tipo << "(s) de R$ " << valor << "\n";
}

int main()
{
	double n;
	cin >> n;

	int v = n * 100;

	cout << "NOTAS:\n";
	mostrarMsg((int) (v / 10000), "nota", "100.00");
	v = v % 10000;
	
	mostrarMsg((int) (v / 5000), "nota", "50.00");
	v = v % 5000;
	
	mostrarMsg((int) (v / 2000), "nota", "20.00");
	v = v % 2000;
	
	mostrarMsg((int) (v / 1000), "nota", "10.00");
	v = v % 1000;
	
	mostrarMsg((int) (v / 500), "nota", "5.00");
	v = v % 500;
	
	mostrarMsg((int) (v / 200), "nota", "2.00");
	v = v % 200;

	cout << "MOEDAS:\n";
	mostrarMsg((int) (v / 100), "moeda", "1.00");
	v = v % 100;
	
	mostrarMsg((int) (v / 50), "moeda", "0.50");
	v = v % 50;
	
	mostrarMsg((int) (v / 25), "moeda", "0.25");
	v = v % 25;
	
	mostrarMsg((int) (v / 10), "moeda", "0.10");
	v = v % 10;
	
	mostrarMsg((int) (v / 5), "moeda", "0.05");
	v = v % 5;
	
	mostrarMsg((int) (v / 1), "moeda", "0.01");

	return 0;
}