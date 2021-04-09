#include "Polynomial.h"
#include<iostream>

using namespace std;

int Polynomial::maxDegree = 0; //static variable that holds the max degree created so far.

ostream & operator<<(ostream& out, const Polynomial& p) 
{
	int greatest_none_zero_power = p.getDegree(true);

	out << "Polynomial = ";

	if (greatest_none_zero_power == 0)
	{
		out << "0" << endl;;
		return out;
	}

	for (int i = 0;i <= greatest_none_zero_power;i++)

		if (i == greatest_none_zero_power)
			out << p.coefficents[i] << "X^" << i << endl;

		else out << p.coefficents[i] << "X^" << i << "+";


		return out;
}

int Polynomial::getMaxDegree()
{
	return maxDegree;
}

Polynomial::Polynomial(Polynomial& p)
{
	*this = p;
}

Polynomial::Polynomial(int deg)
{
	

	this->degree = deg;
	this->coefficents = new double[deg+1];

	for (int i = 0;i <= deg;i++)
		this->coefficents[i] = 0;

}

Polynomial::Polynomial(double* c, int deg)
{

	this->degree = deg;
	this->coefficents = c;

	int deg_ = this->getDegree(true);

	if (deg_ > maxDegree)
		maxDegree = deg_;
}

Polynomial::Polynomial()
{
	this->degree = 0;
	this->coefficents = new double[1];
	this->coefficents[0] = 0;
}

Polynomial::~Polynomial()
{
} //destructor???

void Polynomial::setCoeff(int pow, double coeff)
{
	if (pow <= this->degree)
	{
		this->coefficents[pow] = coeff;
	}

	int deg_ = this->getDegree(true);

	if (deg_ > maxDegree)
		maxDegree = deg_;
}

int Polynomial::getDegree(bool max) const
{
	if (max == false)
		return this->degree;

	int max_deg = 0;

	for (int i = 0;i <= degree;i++)
		if (this->coefficents[i] != 0)
			max_deg = i;

	return max_deg;
}




