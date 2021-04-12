//Rational.h
#pragma once
#include "Pair.h"
#include<string>
using namespace std;
class Rational :public Pair
{
public:
	Rational();
	Rational(double x, double y);
	Rational(const Rational& v);
	double value();
	virtual Rational* operator = (Pair* r);
	virtual Rational* operator + (Pair* Z);
	virtual Rational* operator - (Pair* Z);
	virtual Rational* operator * (Pair* Z);
	virtual Rational* operator / (Pair* Z);
	virtual bool operator == (Pair* Z);
	friend ostream& operator << (ostream&, const Rational&);
	friend istream& operator >> (istream&, Rational&);
	operator string() const;
	char t();
	virtual ostream& Display(ostream& out) const;    
	virtual istream& Conclusion(istream& in);
};

