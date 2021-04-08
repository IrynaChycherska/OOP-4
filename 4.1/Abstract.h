//Abstract.h
#pragma once
#include<iostream>
using namespace std;
class Abstract
{
	double a;
public:
	void SetA(double);
	double GetA() const;
	virtual double Sum_progression() = 0;
	virtual void Print() = 0;
};
