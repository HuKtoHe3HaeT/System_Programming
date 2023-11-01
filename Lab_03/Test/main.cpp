#include <iostream>
#include<windows.h>
#include "ItemLibrary.h"
using namespace std;

int main()
{
    Item ferz(0, 30, 40, 8, 6);
    cout << "Cost per gram: " << ferz.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << ferz.CalculateRemainingLifetime() << endl;
    ferz.DisplayItemInfo();
    cout << endl;
    Item moloko(1, 39, 51, 10, 7);
    cout << "Cost per gram: " << moloko.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << moloko.CalculateRemainingLifetime() << endl;
    moloko.DisplayItemInfo();
    cout << endl;
    Item chop(2, 45, 88, 15, 9);
    cout << "Cost per gram: " << chop.CalculateCostPerGram() << endl;
    cout << "Remaining life time: " << chop.CalculateRemainingLifetime() << endl;
    chop.DisplayItemInfo();
}
