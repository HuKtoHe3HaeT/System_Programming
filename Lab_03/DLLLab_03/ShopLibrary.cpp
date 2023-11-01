
#include "ShopLibrary.h"
#include "iostream"


Item::Item(int id, int cost, int weight, int durability, int age)
    : id_(id), cost_(cost), weight_(weight), durability_(durability), age_(age) {
}

//Цена на грамм
double Item::CalculateCostPerGram() const {
    double res = cost_ / weight_;
    return res;
}

//срок
int Item::CalculateRemainingLifetime() const {
    return durability_ - age_;
}

//Вывод
void Item::DisplayItemInfo() const {
    std::cout << "Item ID: " << id_ << std::endl;
    std::cout << "Cost: " << cost_ << std::endl;
    std::cout << "Weight: " << weight_ << std::endl;
    std::cout << "Durability: " << durability_ << std::endl;
    std::cout << "Age: " << age_ << std::endl;
}
