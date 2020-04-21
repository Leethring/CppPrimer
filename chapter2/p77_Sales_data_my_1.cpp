#include <iostream>
#include "p77_Sales_data_my.h"

int main()
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();

    return 0;
}

