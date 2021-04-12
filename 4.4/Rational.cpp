//Rational.cpp
#include "Rational.h"
#include<sstream>
Rational::Rational() : Pair() {}
Rational::Rational(double x, double y) : Pair(x, y) {}
Rational::Rational(const Rational& v) : Pair(v) {}
double Rational::value()
{
	return 1. * GetA() / GetB();
}
Rational::operator string () const
{
	stringstream ss;
	ss << " a = " << GetA() << endl;
	ss << " b = " << GetB() << endl;
	return ss.str();
}
Rational* Rational::operator = (Pair* r)
{
	this->SetA(r->GetA());
	this->SetB(r->GetB());
	return this;
}
Rational* Rational::operator + (Pair* Z)
{
	Rational* T = new Rational();
	T->SetA((this->GetA() * ((Rational*)Z)->GetB()) + ((this->GetB())*((Rational*)Z)->GetA()));
	T->SetB(this->GetB() * ((Rational*)Z)->GetB());
	return T;
}
Rational* Rational::operator - (Pair* Z)
{
	Rational* T = new Rational();
	T->SetA((this->GetA() * ((Rational*)Z)->GetB()) - ((this->GetB()) * ((Rational*)Z)->GetA()));
	T->SetB(this->GetB() * ((Rational*)Z)->GetB());
	return T;
}
Rational* Rational::operator * (Pair* Z)
{
	Rational* T = new Rational();
	T->SetA(this->GetA() * ((Rational*)Z)->GetA());
	T->SetB(this->GetB() * ((Rational*)Z)->GetB());
	return T;
}
Rational* Rational::operator / (Pair* Z)
{
	Rational* T = new Rational();
	T->SetA(this->GetA()* ((Rational*)Z)->GetB());
	T->SetB(this->GetB()* ((Rational*)Z)->GetA());
	return T;
}
bool Rational::operator == (Pair* Z)
{
	Rational* T = new Rational();
	return T->GetA() == ((Rational*)Z)->GetA() && T->GetB() == ((Rational*)Z)->GetB();
}

ostream& Rational::Display(ostream& out) const
{
	out << GetA() << " + i * " << GetB() << endl;
	return out;
}
istream& Rational::Conclusion(istream& in)
{
	double x, y;
	cout << "a = "; in >> x;
	cout << "b = "; in >> y;
	this->SetA(x); this->SetB(y);
	return in;
}
ostream& operator << (ostream& out, const Rational& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Rational& r)
{
	double x, y;
	cout << "a = "; in >> x;
	cout << "b = "; in >> y;
	r.SetA(x); r.SetB(y);
	return in;
}
char Rational::t()
{
	if (GetA() == GetB())
		cout << "A=B";
	else
	{
		if (GetA() > GetB())
			cout << "A>B";
		else
			cout << "B>A";
	}
	return false;
}