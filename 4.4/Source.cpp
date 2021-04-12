#include<iostream>
#include"Rational.h"
#include"Complex.h"
#include"Pair.h"
#include<cmath>
using namespace std;
int main()
{
    cout << "Complex:" << endl;
    Complex a;
    cout << "Input complex number ->" << endl;
    cin >> a;
    Complex b;
    cout << "Input complex number ->" << endl;
    cin >> b;
    cout << endl;
    cout << "a1 + a2 = " << a.GetA() + b.GetA();
    cout << endl;
    cout << "b1 + b2 = " << a.GetB() + b.GetB();
    cout << endl <<endl;

    cout << "a1 - a2 = " << a.GetA() - b.GetA(); 
    cout << endl;
    cout << "b1 - b2 = " << a.GetB() - b.GetB();
    cout << endl << endl;

    cout << "a1 * a2 - b1 * b2 = " << (a.GetA() * a.GetB() - b.GetA() * b.GetB());
    cout << endl;
    cout << "a1 * b2 + a2 * b1 = " << (a.GetA() * b.GetB() + a.GetB() * b.GetA());
    cout << endl << endl;
    cout << "(a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2) = " << (a.GetA() * a.GetB() + b.GetA() * b.GetB()) / (a.GetB() * a.GetB() + b.GetB() * b.GetB());
    cout << endl;
    cout << "(a2 * b1 - a1 * b2) / (a2 * a2 + b2 * b2) = " << (a.GetB() * b.GetA() - a.GetA() * b.GetB()) / (a.GetB() * a.GetB() + b.GetB() * b.GetB());
    cout << endl << endl;
    cout << "Rational:" << endl;
    Rational c;
    cout << "Input complex number ->" << endl;
    cin >> c;
    Rational d;
    cout << "Input complex number ->" << endl;
    cin >> d;
    
    cout << endl;
    cout << "value = " << 1. * c.GetA() / c.GetB() << endl;
    cout << "value = " << 1. * d.GetA() / d.GetB() << endl;

    cout << "a1 * b2 + a2 * b1 = " << c.GetA()*d.GetB()+c.GetB()* d.GetA();
    cout << endl;
    cout << "b1 * b2 =" << d.GetA() * d.GetB();
    cout << endl << endl;

    cout << "a1 * b2 - a2 * b1 = " << c.GetA() * d.GetB() - c.GetB() * d.GetA();
    cout << endl;
    cout << "b1 * b2 = " << d.GetA() * d.GetB();
    cout << endl << endl;

    cout << "a1 * a2 = " << c.GetA() * c.GetB();
    cout << endl;
    cout << "b1 * b2 = " << d.GetA() * d.GetB();
    cout << endl << endl;

    cout << "a1 * b2 = " << c.GetA() * d.GetB();
    cout << endl;
    cout << "a2 * b1 = " << d.GetA() * c.GetB();
    cout << endl << endl;
    cout << " " << c.t() << endl;
    Pair* pz = new Complex();
    Pair* pn = new Rational();
    cout << endl;
    cout << typeid(pz).name() << endl;
    cout << typeid(*pz).name() << endl;
    cout << typeid(pn).name() << endl;
    cout << typeid(*pn).name() << endl;
  
    delete pn, delete pz;
    return 0;

}