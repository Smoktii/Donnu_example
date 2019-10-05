﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 2019-10-05 

#include "pch.h"
#include <iostream>

using namespace std;

class A1
{
public:
	virtual int f(A1& a) {
		cout << "\n F in A1. Type = "<< typeid(a).name()<<"\n";
		return 1;
	}
};

class A2 : public A1
{
public:
	virtual int f(A1& a) {
		cout << "\n F in A2. Type = " << typeid(a).name() << "\n";
		return 2;
	}
};

class A3 : public A2
{
public:
	int i;
};

class A4 : public A3
{
public:
	int f(A1& d) {
		cout << "\n F in A4. Type = " << typeid(d).name() << "\n";
		return 4;
	}
};

int MyF(A1& var1)
{
	cout << var1.f(var1);
	return 1;
};


int main()
{
	std::cout << "TEST!\n";
	A1 a;
	A2 b;
	A3 c;
	A4 d;
	MyF(a);
	MyF(b);
	MyF(d);
	cout << "\n Output diff type \n";
	cout << d.f(c);

}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
