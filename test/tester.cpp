//  declare an array of three  CandyBar structures that are afterwards initiated, use  new to allocate the array dynamically
//  and then display them
#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int cal;
};

int main()
{

    CandyBar * pt = new CandyBar [3]
    {
        {"Mocha Munch",2.3,350},
        {"Dove",2.5,365},
        {"Valrhona",2.8,370}
    };
    cout << "brand: " << pt[0].brand << endl;
    cout << "weight: " << pt[0].weight << endl;
    cout << "calories: " << pt[0].cal << endl << endl;
     cout << "brand: " << pt[1].brand << endl;
    cout << "weight: " << pt[1].weight << endl;
    cout << "calories: " << pt[1].cal << "\n\n";
     cout << "brand: " << pt[2].brand << endl;
    cout << "weight: " << pt[2].weight << endl;
    cout << "calories: " << pt[2].cal << endl;
    delete [] pt;
    return 0;
}
