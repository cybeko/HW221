#include"Car.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
	Car a("Jeep Renegade", "Grey", 2018, 15000);
	cout << "\n\tPrinting info..." << endl;
	cout << "Model name: " << a.GetModel() << endl;
	cout << "Color: " << a.GetColor() << endl;
	cout << "Year: " << a.GetYear() << endl;
	cout << "Price: " << a.GetPrice() << endl << "\n";

	Car b("Hyundai Tucson", "Black", 2010, 10000);
	b.Print();
	b.Input();
	b.Print();

	b.SetModel("Kia Soul");
	b.SetColor("Silver");
	b.SetPrice(8000);
	b.SetYear(2011);
	b.Print();
}