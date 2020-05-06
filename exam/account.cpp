#include "account.h"
#include <iostream>
using namespace std;

 account :: SetName(string x)
    {
    x = name;
    cin>>name;
    }
 account :: SetTaxID()
    {
    cout<<"Type Tax ID: ";
    cin>>taxID;
    }
 account:: Setbalance(int bal)
    {

        balance = bal + balance;
    }
 string account :: GetName()
    {
        return name;
    }
    long account :: GetTaxID()
    {
        return taxID;
    }
    int account :: Getbalance()
    {
        return balance;
    }
    account :: MakeDeposit(double amount)
    {
        cout<<"How much would you like to deposit?"<<endl;
        cin>>amount;
        Setbalance(amount);
        numdeposits++;
    }
    account :: display()
    {
        cout<<"Name "<<GetName()<<" "<<"TaxID "<<GetTaxID()<<" "<<"Balance "<<Getbalance()<<endl;
    }
