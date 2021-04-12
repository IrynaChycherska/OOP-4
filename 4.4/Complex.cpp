//Complex.cpp
#include "Complex.h"
#include<sstream>
using namespace std;
Complex::Complex() : Pair() {}
Complex::Complex(double x, double y) : Pair(x, y) {}
Complex::Complex(const Complex& v) : Pair(v) {}
Complex::operator string () const
{
	stringstream ss;
	ss << " a = " << GetA() << endl;
	ss << " b = " << GetB() << endl;
	return ss.str();
}
Complex* Complex::operator = (Pair* r)
{
	this->SetA(r->GetA());
	this->SetB(r->GetB());
	return this;
}
Complex* Complex::operator + (Pair* Z)
{
	Complex* T = new Complex();
	T->SetA(this->GetA() + ((Complex*)Z)->GetA());
	T->SetB(this->GetB() + ((Complex*)Z)->GetB());
	return T;
}
Complex* Complex::operator - (Pair* Z)
{
	Complex* T = new Complex();
	T->SetA(this->GetA() - ((Complex*)Z)->GetA());
	T->SetB(this->GetB() - ((Complex*)Z)->GetB());
	return T;
}
Complex* Complex::operator * (Pair* Z)
{
	Complex* T = new Complex();
	T->SetA(this->GetA() * ((Complex*)Z)->GetA() - this->GetB() * ((Complex*)Z)->GetB());
	T->SetB(this->GetA() * ((Complex*)Z)->GetB() + ((Complex*)Z)->GetA() * this->GetB());
	return T;
}
Complex* Complex::operator / (Pair* Z)
{
	Complex* T = new Complex();
	T->SetA((this->GetA() * ((Complex*)Z)->GetA() + this->GetB() * ((Complex*)Z)->GetB()) / (((Complex*)Z)->GetA() * ((Complex*)Z)->GetA() + ((Complex*)Z)->GetB() * ((Complex*)Z)->GetB()));
	T->SetB((((Complex*)Z)->GetA() * this->GetB() - this->GetA() * ((Complex*)Z)->GetB()) / (((Complex*)Z)->GetA() * ((Complex*)Z)->GetA() + ((Complex*)Z)->GetB() * ((Complex*)Z)->GetB()));
	return T;
}
bool Complex::operator == (Pair* Z)
{
	Complex* T = new Complex();
	return T->GetA() == ((Complex*)Z)->GetA() && T->GetB() == ((Complex*)Z)->GetB();
}
ostream& Complex::Display(ostream& out) const
{
	out << GetA() << " + i * " << GetB() << endl;
	return out;
}
istream& Complex::Conclusion(istream& in)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	this->SetA(x); this->SetB(y);
	return in;
}
ostream& operator << (ostream& out, const Complex& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Complex& r)
{
	double x, y;
	cout << "a = "; in >> x;
	cout << "b = "; in >> y;
	r.SetA(x); r.SetB(y);
	return in;
}