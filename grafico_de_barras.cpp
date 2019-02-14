#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int grafico(int, int, int);
int calculo(int,int);


int main()
{
	int valor1 = 0, valor2 = 0, valor3 = 0;
  cout << "     GRAFICOS DE BARRAS .  "<< endl;
  cout << "_____________________________" << endl;
  Sleep(3);
	do
	{
		cout << " digite primeiro valor : ";
		cin >> valor1;
		
	} while (valor1 < 0);	
	do
	{
		cout << " digite segundo valor : ";
		cin >> valor2;	
		

	} while (valor2 < 0);

	do
	{
		cout << " digite terceiro valor : ";
		cin >> valor3;
		
	} while (valor3 < 0);	
  cout << " valores sao " << valor1 << " , "<< valor2 << " , " << valor3 << endl;	  

	grafico(valor1, valor2, valor3);	
}
int grafico(int x, int y,int z)
{	
	int a, b, c;
	if ((x > y) && (x > z))
	{
		a = x;
		//x = 100;
		calculo(x, a);
		calculo(y,a);
		calculo(z,a); 
	}
	else if ((y > x) && (y > z))
	{
		b = y;
		//y = 100;
		calculo(x, b);
		calculo(y,b);
		calculo(z,b);
	}
	else if ((z > x) && (z > y))
	{
		c = z;
		//z = 100;
		calculo(x, c);
		calculo(y,c);
		calculo(z,c);
	}
	
	else
	{
		calculo(x, c);
		calculo(y, c);
		calculo(z, c);

	}
	return 0;
}

 
int calculo(int valor ,int parametro)
{
	int aux=0;
	//maior = (maior * 100) / parametro;

	aux = (valor * 60) / parametro;
	cout << valor << " : ";

		for (int i = 0; i < aux ; i++) 
		{
			cout << "*";
			
		}
		cout << endl;
		return 0;

}