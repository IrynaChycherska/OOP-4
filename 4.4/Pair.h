//Pair.h
#pragma once
#include<iostream>
class Pair
{
	double a, b;
public:
	void SetA(double);
	double GetA() const;
	void SetB(double);
	double GetB() const;
	Pair();  
	Pair(double x, double y);  
	Pair(const Pair& v);
	virtual Pair* operator = (Pair* r) = 0; 
	virtual Pair* operator + (Pair* Z) = 0; 
	virtual Pair* operator - (Pair* Z) = 0; 
	virtual Pair* operator * (Pair* Z) = 0; 
	virtual Pair* operator / (Pair* Z) = 0; 
	virtual bool operator == (Pair* Z) = 0;  
};

