//Source.cpp
#include"Abstract.h"
#include"Arithmecic.h"
#include"Geometric.h"
int main()
{
    cout << "\Arithmecic:" << endl;
    Arithmecic z(1, 3, 2, 0);
    z.Print();
    cout << "\nSum_progression arithmecic: " << z.Sum_progression() << endl;
    cout << "((n+1)*(a0+an))/2" << endl << endl;
    cout << "\Geometric:" << endl;
    Geometric c(2, 4, 2, 0);
    c.Print();
    cout << "\nSum_progression geometric: " << c.Sum_progression() << endl;
    cout << "(a0-an*r)/(1-r)" << endl;
    Abstract* pz = new Arithmecic();
    Abstract* pc = new Geometric();
    cout << endl;
    cout << typeid(pz).name() << endl;
    cout << typeid(*pz).name() << endl;
    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;
    delete pc, delete pz;
    return 0;
}
