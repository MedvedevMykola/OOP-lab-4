#pragma once
#define Vsize 5
class CVector
{
	double A[Vsize];
	double B[Vsize][Vsize];
public:
	CVector();
	void getV();
	void getM();
	void setV();
	~CVector() {};

CVector operator= (const CVector &obj);

const CVector operator* (const CVector &obj) const;
CVector& operator*= (const CVector &obj);

const CVector operator/ (double) const;
CVector& operator/= (double);
};