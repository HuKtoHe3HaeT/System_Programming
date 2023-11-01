
#pragma once

#ifdef ITEMLIBRARY_EXPORTS
#define ITEMLIBRARY_API __declspec(dllexport)
#else
#define ITEMLIBRARY_API __declspec(dllimport)
#endif

class ITEMLIBRARY_API Item {
public:
    Item(int id, int cost, int weight, int durability, int age);

    double CalculateCostPerGram() const;
    int CalculateRemainingLifetime() const;
    void DisplayItemInfo() const;

private:
    int id_;
    int cost_;
    int weight_;
    int durability_;
    int age_;
};
