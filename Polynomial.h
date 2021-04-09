#pragma once
#include<iostream>
using namespace std;


class Polynomial
{
	friend ostream& operator<<(ostream&, const Polynomial&);

public:
	static int getMaxDegree();
	Polynomial(Polynomial&);
	Polynomial();
	Polynomial(int);
	Polynomial(double*,int);
	~Polynomial();
	void setCoeff(int, double);
	int getDegree(bool) const;

private:
	static int maxDegree;
	double* coefficents;
	int degree;
};

