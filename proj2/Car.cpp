#include "Car.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS 
using namespace std;

Car::Car()
{
	this->model = nullptr;
	this->color = nullptr;
	this->year = NULL;
	this->price = NULL;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->price = pr;
	this->year = y;
}

Car::~Car()
{
	delete[]this->model;
	delete[]this->color;
}

void Car::Input()
{
	cout << "\n\tNew registration certificate..." << endl;

	char buff[100];
	cout << "Enter model: ";
	cin >> buff;
	if (this->model != nullptr)
	{
		cout << "[Deleting model: " << this->model << "...]" << "\n";
		delete[]this->model;
	}
	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);

	cout << "Enter color: ";
	cin >> buff;
	if (this->color != nullptr)
	{
		cout << "[Deleting color: " << this->color << "...]" << "\n";
		delete[]this->color;
	}
	this->color = new char[strlen(buff) + 1];
	strcpy_s(this->color, strlen(buff) + 1, buff);

	cout << "Enter year: ";
	cin >> this->year;

	cout << "Enter price: ";
	cin >> this->price;
	cout << "\n";

}

void Car::Print()
{
	cout << "\n\tPrinting info..." << endl;
	cout << "Model: " << this->model << "\nColor: " << this->color << "\nYear: " << this->year << "\nPrice: "<< this->price << "\n" << endl;
}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return this->year;
}

double Car::GetPrice()
{
	return this->price;
}

void Car::SetModel(const char* m)
{
	if (this->model != nullptr)
	{
		delete[]this->model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy(this->model, m);
}

void Car::SetColor(const char* c)
{
	if (this->color != nullptr)
	{
		delete[]this->color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy(this->color, c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double pr)
{
	this->price = pr;
}
