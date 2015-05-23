#include <iostream>
#include "2015143.h"

Stock::Stock()
{
    std::cout << "Default constuctir called.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout << "Constructor using " << co;
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; " << company << "shares set to 0.\n\n";
        shares = 0;
    }
    
    else
    {
        shares = n;
        share_val = pr;
        set_total();
    }
}

Stock::~Stock()
{
    std::cout << "Bye, bye " << company << "\n\n";
}

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; " << company << "shares set to 0.\n\n";
        shares = 0;
    }
    
    else
    {
        shares = n;
        share_val = pr;
        set_total();
    }
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number os shares purchased cannot be negative\n." << "Transaction is aborted.\n\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_total();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Nuber of shares sold cannot be negative." << "Transaction is aborted.\n\n";
    }
    else if (num > shares)
    {
        cout << "You cannot sell more than you have\n" << "Transaction is aborted.\n\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_total();
}

void Stock::show()
{
    std::cout << "Company: " << company << "\n" << "Shares: " << shares << "\n" << "Share Price: $" << share_val << "\n" << "Total Worth: $" << total_val << "\n\n";
}
