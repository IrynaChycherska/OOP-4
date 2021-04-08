//Arithmecic.cpp
#include "Arithmecic.h"
void Arithmecic::SetA(double a) { this->a = a; }
void Arithmecic::SetA1(double a1) { this->a1 = a1; }
void Arithmecic::SetD(double d) { this->d = d; }
void Arithmecic::SetN(int n) { this->n = n; }

double Arithmecic::GetA() const { return a; }
double Arithmecic::GetA1() const { return a1; }
double Arithmecic::GetD() const { return d; }
int Arithmecic::GetN() const { return n; }

Arithmecic::Arithmecic() : a(0), a1(0), d(0), n(0) {}
Arithmecic::Arithmecic(double a = 0, double a1 = 0, double d = 0, int n = 0) : a(a), a1(a1), d(d), n(n) {}
Arithmecic::Arithmecic(Arithmecic& c) : Arithmecic(c.GetA(), c.GetA1(), c.GetD(), c.GetN()) {}

void Arithmecic::Print() {
	cout << "aj = a0 + j*d" << endl;
	cout << "a0: " << GetA() << endl;
	cout << "a1: " << GetA1() << endl;
	cout << "d: " << GetD() << endl;
	cout << "n: "; cin >> n;
}
double Arithmecic::Sum_progression()
{
	double an;
	an = GetA() + GetN() * GetD();
	return ((GetN() + 1) * (GetA() + an)) / 2;
}
