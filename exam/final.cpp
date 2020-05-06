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

    void SetName(string x)
    {
    x = name;
    cin>>name;
    }
    void SetTaxID()
    {
        cout<<"Type Tax ID: ";
        cin>>taxID;
    }
    void Setbalance(int bal)
    {

        balance = bal + balance;
    }
    string GetName()
    {
        return name;
    }
    long GetTaxID()
    {
        return taxID;
    }
    int Getbalance()
    {
        return balance;
    }
    MakeDeposit(double amount)
    {
        cout<<"How much would you like to deposit?"<<endl;
        cin>>amount;
        Setbalance(amount);
        numdeposits++;
    }
    display()
    {
        cout<<"Name "<<GetName()<<" "<<"TaxID "<<GetTaxID()<<" "<<"Balance "<<Getbalance()<<endl;
    }
};
class checking : public account
{

private:
    int last10checks[10];


public:

    WriteCheck(int checknum,double amount)
    {
    cout<<"Check number? "<<endl;
    cin>>checknum;
    cout<<"Check amount? "<<endl;
    cin>>amount;
    Setbalance(-amount);
    }
    display()
    {
      cout<<"Name "<<GetName()<<" "<<"TaxID "<<GetTaxID()<<" "<<"Balance "<<Getbalance()<<endl;
      cout<<"Check Registry "<<last10checks[10]<<endl;
    }

};
class Savings : public account
{
    public:
    DoWithdraw(double amount)
    {
        cout<<"How much would you like  to withdraw? "<<endl;
        cin>>amount;
        Setbalance(-amount);
        numwithdraws++;
    }
    display()
    {
        cout<<"Name: "<<GetName()<<" "<<"TaxID: "<<GetTaxID()<<" "<<"Balance: "<<Getbalance()<<endl;
        cout<<"Number of Withdrawals: "<<numwithdraws<<" "<<"Number of Deposits: "<<numdeposits<<endl;
    }
};
class CreditCard: public account
{
public:
    long cardnumber;
    string last10charges[10];


    DoCharge(string name, double amount)
    {
        cout<<"Charge name? "<<endl;
        cin>>name;
        cout<<"Charge amount? "<<endl;
        cin>>amount;
        numwithdraws++;
        Setbalance(amount);
    }
    MakePayment(double amount)
    {
        cout<<"Payment amount? "<<endl;
        cin>>amount;
        Setbalance(-amount);
        numdeposits++;
    }
    display()
    {
        cout<<"Name: "<<GetName()<<" "<<"TaxID: "<<GetTaxID()<<" "<<"Balance: "<<Getbalance()<<endl;
        cout<<"Number of Charges: "<<numwithdraws<<" "<<"Payments: "<<numdeposits<<endl;
        cout<<last10charges[10]<<endl;

        }


};
int main(){
    account acc;
    checking check;
    Savings sav;
    CreditCard cred;
    check.Setbalance(100);
    sav.Setbalance(100);
    cred.Setbalance(100);

    string userinput = "";

    while(userinput != "0"){
    cout<<"Checking balance: "<<check.Getbalance()<<" "<<"Savings balance: "<<sav.Getbalance()<<" "<<"Credit Card balance: "<<cred.Getbalance()<<endl;
    cout<<"What would you like to do?"<<endl;
    cout<<"Type the number of any of the following commands!"<<endl;
    cout<<"1. Savings Deposit"<<endl;
    cout<<"2. Savings Withdrawal"<<endl;
    cout<<"3. Checking Deposit"<<endl;
    cout<<"4. Write a Check"<<endl;
    cout<<"5. Credit Card Payment"<<endl;
    cout<<"6. Make a charge"<<endl;
    cout<<"7. Display Savings"<<endl;
    cout<<"8. Display Checking"<<endl;
    cout<<"9. Display Credit Card"<<endl;
    cout<<"0. Exit"<<endl;
    cin>>userinput;

    if (userinput == "1"){
            string yn;
            sav.MakeDeposit(0);
            cout<<"New Savings Balance = "<<sav.Getbalance()<<endl;
            cout<<"Back to Main Menu? (y/n)"<<endl;
            cin>>yn;
            if (yn != "y")
                return 0;
        }
    if (userinput == "2"){
        string yn;
        sav.DoWithdraw(0);
        cout<<"New Savings Balance = "<<sav.Getbalance()<<endl;
        cout<<"Back to Main Menu? (y/n)"<<endl;
        cin>>yn;
        if (yn != "y")
            return 0;
    }
    if (userinput =="3"){
        string yn;
        check.MakeDeposit(0);
        cout<<"New Checking Balance = "<<check.Getbalance()<<endl;
        cout<<"Back to Main Menu? (y/n)"<<endl;
        cin>>yn;
        if (yn != "y")
            return 0;
        }
    if (userinput == "4"){
            string yn;
            check.WriteCheck(0,0);

            cout<<"New Balance = "<<check.Getbalance()<<endl;
            cout<<"Back to Main Menu? (y/n)"<<endl;
            cin>>yn;
            if (yn != "y")
            return 0;
        }
    if (userinput == "5"){
        string yn;
        cred.MakePayment(0);
        cout<<"New Credit Card Balance = "<<cred.Getbalance()<<endl;
        cout<<"Back to Main Menu? (y/n)"<<endl;
        cin>>yn;
        if (yn != "y")
            return 0;

    }
    if (userinput == "6"){
        string yn;
        cred.DoCharge(" ",0);
        cout<<"New Credit Card Balance = "<<cred.Getbalance()<<endl;
        cout<<"Back to Main Menu (y/n)"<<endl;
        cin>>yn;
        if(yn != "y")
            return 0;
    }
    if (userinput == "7"){
        string yn;
        sav.display();
        cout<<"Back to Main Menu (y/n)"<<endl;
        cin>>yn;
        if(yn != "y")
            return 0;
    }
    if (userinput == "8"){
        string yn;
        check.display();
        cout<<"Back to Main Menu (y/n)"<<endl;
        cin>>yn;
        if(yn != "y")
            return 0;
    }
    if (userinput == "9"){
        string yn;
        cred.display();
        cout<<"Back to Main Menu (y/n)"<<endl;
        cin>>yn;
        if(yn != "y")
            return 0;
    }
    }
        return 0;

}



