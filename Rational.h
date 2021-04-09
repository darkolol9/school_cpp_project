#pragma once
#include"Polynomial.h"
#include<iostream>

using namespace std;


class Rational
{
	friend ostream& operator<<(ostream&, const Rational&);

public:

	Rational();
	Rational(const Polynomial&,const Polynomial&);
	void print();
	Polynomial getNom();
	Polynomial getDom();

private:
	Polynomial nom;
	Polynomial denom;

};

