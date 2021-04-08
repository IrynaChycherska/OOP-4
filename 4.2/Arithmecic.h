//Arithmecic.h
#pragma once
#include "Abstract.h"
class Arithmecic :public Abstract
{
	double a;
	double a1;
	double d;
	int n;
public:
	void SetA(double);
	void SetA1(double);
	void SetD(double);
	void SetN(int);
	double GetA() const;
	double GetA1() const;
	double GetD() const;
	int GetN() const;
	Arithmecic();
	Arithmecic(double, double, double, int);
	Arithmecic(Arithmecic&);
	virtual void Print();
	virtual double Sum_progression();
};


