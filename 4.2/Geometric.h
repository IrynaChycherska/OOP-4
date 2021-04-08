//Geometric.h
#pragma once
#include "Abstract.h"
class Geometric :public Abstract
{
	double a;
	double a1;
	double r;
	int j;
public:
	void SetA(double);
	void SetA1(double);
	void SetR(double);
	void SetJ(int);
	double GetA() const;
	double GetA1() const;
	double GetR() const;
	int GetJ() const;
	Geometric();
	Geometric(double, double, double, int);
	Geometric(Geometric&);
	virtual void Print();
	virtual double Sum_progression();
};
