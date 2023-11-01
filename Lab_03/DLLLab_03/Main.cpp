#include <iostream>
#include "ShopLibrary.h"
using namespace std;

int main()
{
    Item ferz(1, 50, 70, 5, 3);
    cout << "Cost per gram: 0.71" << ferz.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << ferz.CalculateRemainingLifetime() << endl;
    ferz.DisplayItemInfo();
    cout << endl;
    Item moloko(2, 48, 62, 5, 2);
    cout << "Cost per gram: 0.77" << moloko.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << moloko.CalculateRemainingLifetime() << endl;
    moloko.DisplayItemInfo();
    cout << endl;
    Item chop(3, 20, 40, 5, 1);
    cout << "Cost per gram: 0.5" << chop.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << chop.CalculateRemainingLifetime() << endl;
    chop.DisplayItemInfo();
}
