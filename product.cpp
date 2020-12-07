#include "product.h"
using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
ifstream fin;
ofstream fout;
fin.open("Products.dat");
if(fin.fail())
{
    cout<<"Error opening file. Exiting program.";
    exit(1);
}

Product P1, P2;
long id, nr;
float price;

cout <<"Enter product id: ";
cin>>id;
cout<<endl<<"Enter wholesale product price: ";
cin>>price;
cout<<endl<<"Enter number of product "<<id<<": ";
cin >>nr;

P1.reset(id,nr,price);

while(fin>>P2)
{
    cout <<P2.getNumber();
    if(P1==P2)
    {
        P2.increaseRetailPrice(0.05);
        P2--;

        fout<<P1<<P2;
    }
}
fin.close();
fout.close();
return 0;
}
