#include "stdafx.h"
#include "CVector.h"
#include "ctime"
#include <cstdlib>
#include <iostream>
#include <stdio.h>


CVector::CVector()
{
	setV();
}

void CVector::setV()
{
	for (int i = 0; i < Vsize; i++)
		A[i] = rand() % int(1e3 + 1) / 1e2 *  (rand() % 2 ? 1 : (-1));
}

void CVector::getV()
{
	for (int i = 0; i < Vsize; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}
void CVector::getM()
{
	for (int i = 0; i < Vsize; i++,printf("\n"))
		for (int j = 0; j < Vsize; j++)
		printf("%8.3Lf",B[i][j]);
	std::cout << std::endl;
}
CVector CVector::operator= (const CVector &obj)
{
	for (int i = 0; i < Vsize; i++)
		this->A[i] = obj.A[i];
	for (int i = 0; i < Vsize; i++)
		for (int j = 0; j < Vsize; j++)
		this->B[i][j] = obj.B[i][j];
	return *this;
}

const CVector CVector::operator* (const CVector &obj) const {
	CVector tmp;
	for (int i = 0; i < Vsize; i++)
	{
		for (int j = 0; j < Vsize; j++)
		{
			tmp.B[j][i] = this->A[i] * obj.A[j];
		}
	}
	return tmp;
}

CVector& CVector::operator*= (const CVector &obj) {
	for (int i = 0; i < Vsize; i++)
	{
		for (int j = 0; j < Vsize; j++)
		{
			this->B[j][i] = this->A[i] * obj.A[j];
		}
	}
	return (*this);
}
const CVector CVector::operator/ (double r) const {
	CVector tmp;
	for (int i = 0; i < Vsize; i++)
		tmp.A[i] = this->A[i] / r;
	return tmp;
}

CVector& CVector::operator/= (double r) {
	for (int i = 0; i < Vsize; i++)
	this->A[i] = this->A[i] / r;
	return (*this);
}