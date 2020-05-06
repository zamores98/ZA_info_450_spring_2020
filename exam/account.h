#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class account {

private:
    string name = "Zeke Brandoff";
    long taxID = 827482739;
    double balance = 0;

protected:
    int numdeposits = 0;
    int numwithdraws = 0;
public:

    SetName(string x);
    SetTaxID();
    Setbalance(int bal);
    string GetName();
    long GetTaxID();
    int Getbalance();
    MakeDeposit(double amount);
    display();

};
#endif // ACCOUNT_H
