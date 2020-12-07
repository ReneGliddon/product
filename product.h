#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
public:
     Product();
    ~Product();
    long getNumber();
    void reset(long idP, double priceP, long numberP);
    void increaseRetailPrice(float markupP);
    friend bool operator==(const Product& Product1, const Product& Product2);
    friend Product operator --(Product &P);
    friend istream & operator >>(istream & ins, Product &P);
    friend ostream& operator <<(ostream & outs, const Product &P);

private:
    long id;
    double price;
    long number;

};
#endif // PRODUCT_H

//#include "product.h"
Product::Product()
{
    id=0;
    price=0.0;
    number = 0;
}

Product::~Product()
{
    //does nothing
}
long Product::getNumber()
{
    return number;
}
void Product::reset(long idP, double priceP, long numberP)
{
    id=idP;
    price=priceP;
    number = numberP;
}
void Product::increaseRetailPrice(float markupP)
{
    price+=price*markupP;
}

bool operator==(const Product& Product1, const Product& Product2)
{
    return(Product1==Product2);
}
Product operator --(Product &P)
{
    P.price--;
    return P;
}

istream & operator >>(istream & ins, Product &P)
{
    ins>>P.id>>P.price>>P.number;
}
ostream& operator <<(ostream & outs, const Product &P)
{
    outs<<P.id<<" "<<P.price<<" "<<P.number;
}

