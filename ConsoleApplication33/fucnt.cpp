#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <math.h>
#include "Header.h"

using namespace std;

int F(int m2, int m1, int m0)
{
	int x = m2 * 100 + m1 * 10 + m0;
	return x;
}

//��������� ������������
int f(int a, int b)
{
	cout << "������������ ���� �����: " << a * b << endl << endl;
	return 0;
}

//��������� �����
int f(int a, int b, int c, int d)
{
	cout << "����� ���� �����: " << a + b + c + d << endl << endl;
	return 0;
}

void cathetus(double& a, double& b, double c, double q)
{
	b= c*cos(q);
	cout <<"����� ������� ������: " << b << endl;
	a = sqrt(c*c - b*b);
	cout << "����� ������� ������: " << a << endl;
}

void cathetus(double * a, double* b, double c, double q)
{
	*b = c*cos(q);
	cout << "����� ������� ������: " << *b << endl;
	*a = sqrt(c*c - *b*(*b));
	cout << "����� ������� ������: " << *a << endl;
}