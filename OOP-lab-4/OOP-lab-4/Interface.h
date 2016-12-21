#pragma once
#include "CVector.h"
#include <iostream>
#include <conio.h>
#include "ctime"

void equel();
void mult();
void smult();
void div();
void sdiv();
void out();

void interface()
{
	bool f = 1;
	srand(time(0));
	while (f)
	{
		out();
		char ch= _getch();
		switch (ch)
		{
		case '1': {equel();system("pause");break;}
		case '2': {mult();system("pause");break;}
		case '3': {smult();system("pause");break;}
		case '4': {div();system("pause");break;}
		case '5': {sdiv();system("pause");break;}
		case 'q': {f=0;break;}
		case 'Q': {f=0;break;}
		default:
			break;
		}
		system("cls");
	}
}

void out()
{
	printf("1 =\n");
	printf("2 *\n");
	printf("3 *=\n");
	printf("4 /\n");
	printf("5 /=\n");
	printf("q exit\n");
}
void equel()
{
	CVector A, B;
	puts("vector A\n");
	A.getV();
	puts("vector B\n");
	B.getV();
	puts("A=B\n");
	A=B;
	puts("new vector A\n");
	A.getV();
}
void mult()
{
	CVector A, B, C;
	puts("vector A\n");
	A.getV();
	puts("vector B\n");
	B.getV();
	puts("C = A*B\n");
	C = A*B;
	puts("Matrix\n");
	C.getM();
}
void smult()
{
	CVector A, B, C;
	puts("vector A\n");
	A.getV();
	puts("vector B\n");
	B.getV();
	puts("A*= B\n");
	A*= B;
	puts("Matrix\n");
	A.getM();
}
void div()
{
	double r;
	while (true)
	{
		std::cout << "Enter num" << std::endl;
		std::cin >> r;
		if (r == 0)
			puts("try again\n");
		else
			break;
	}
	CVector A, B;
	puts("vector A\n");
	A.getV();
	puts("vector B\n");
	B.getV();
	puts("A = B/num\n");
	A = B/r;
	puts("new vector A\n");
	A.getV();
}
void sdiv()
{
	double r;
	while (true)
	{
		std::cout << "Enter num" << std::endl;
		std::cin >> r;
		if (r == 0)
			puts("try again\n");
		else
			break;
	}
	CVector A, B;
	puts("vector A\n");
	A.getV();
	puts("A /=num\n");
	A /=r;
	puts("new vector A\n");
	A.getV();
}
