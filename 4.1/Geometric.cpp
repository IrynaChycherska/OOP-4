//Geometric.cpp
#include"Geometric.h"
void Geometric::SetA(double a) { Abstract::SetA(a); }
void Geometric::SetA1(double a1) { this->a1 = a1; }
void Geometric::SetR(double d) { this->r = r; }
void Geometric::SetJ(int j) { this->j = j; }

double Geometric::GetA() const { return Abstract::GetA(); }
double Geometric::GetA1() const { return a1; }
double Geometric::GetR() const { return r; }
int Geometric::GetJ() const { return j; }

Geometric::Geometric() : a1(0), r(0), j(0) { Abstract::SetA(0); }
Geometric::Geometric(double a = 0, double a1 = 0, double r = 0, int j =0) : a1(a1), r(r), j(j) { Abstract::SetA(a); }
Geometric::Geometric(Geometric& c) : Geometric(c.GetA(), c.GetA1(), c.GetR(), c.GetJ()) {}

void Geometric::Print() 
{
	cout << "aj = a0 * r^j" << endl;
	cout << "a0: " << GetA() << endl;
	cout << "a1: " << GetA1() << endl;
	cout << "r:  " << GetR() << endl;
	cout << "j: "; cin >> j;
}
double Geometric::Sum_progression()
{
	double an;
	an = GetA() * pow(GetR(),GetJ());
	return ((GetA() - an*GetR()) / (1-GetR()));
}