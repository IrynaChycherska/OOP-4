//Pair.cpp
#include"Pair.h"
void Pair::SetA(double a = 0) { this->a = a; }
double Pair::GetA() const { return a; }
void Pair::SetB(double b = 0) { this->b = b; }
double Pair::GetB() const { return b; }
Pair::Pair() : a(0), b(0) {}
Pair::Pair(double x = 0, double y = 0) : a(x), b(y) {}
Pair::Pair(const Pair& v) : Pair(v.GetA(), v.GetB()) {}
