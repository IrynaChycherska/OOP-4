//Complex.h
#pragma once
#include "Pair.h"
#include<string>
using namespace std;
class Complex : public Pair {
public:
	Complex();         
	Complex(double x, double y); 
	Complex(const Complex& v);    
	virtual Complex* operator = (Pair* r); 
	virtual Complex* operator + (Pair* Z);  
	virtual Complex* operator - (Pair* Z);  
	virtual Complex* operator * (Pair* Z); 
	virtual Complex* operator / (Pair* Z);  
	virtual bool operator == (Pair* Z);   
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
	operator string() const;
	virtual ostream& Display(ostream& out) const;    
	virtual istream& Conclusion(istream& in);     
};
