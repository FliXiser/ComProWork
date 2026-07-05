#include <iostream>
using namespace std;
int main(){
    float price , vat ;
    cout << "VAT Calculator" << endl ;
    cout << "=================================" << endl ;
    cout << "Enter PRICE : " ; cin >> price ;
    cout << "Enter VAT : " ; cin >> vat ;
    float vatam = price * (vat / 100) ;
    cout << "Net Price of Product = " << price + vatam << endl ;
    cout << "=" << endl ;
    cout << "Net Price (Including VAT) : " << price + vatam << endl ;
    cout << "Price Excluding VAT = " << price << endl ;
    cout << "VAT Amount = " << vatam << endl ;
    cout << "=================================" ;
    return 0 ;
}