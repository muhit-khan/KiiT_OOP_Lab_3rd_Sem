/*Create a class which stores account number, customers name, and lolana. Derive two class from account nMed overrideing and current. overrideing class account stores minimum balance, current stores override amount. Include member function in appropriate class for deposite money and display balance*/

#include <iostream>
using namespace std;

class account
{
private:
    string name;
    int accno;
    string atype;

public:
    account(string nm, int an, string at)
    {
        name = nm;
        accno = an;
        atype = at;
    }
    void displayDetails()
    {
        cout << "\n\nCustomer Name : " << name;
        cout << "\nAccount Number  : " << accno;
        cout << "\nAccount Type    : " << atype;
    }
};
class current_account : public account
{
private:
    float balance;

public:
    current_account(float bl, string nm, int an, string at) : account(nm, an, at)
    {
        balance = bl;
    }
    virtual void display()
    {
        displayDetails();
        cout << "\nBalance :" << balance;
    }
    void c_deposit(float deposit)
    {
        balance = balance + deposit;
    }
};

class savings_account : public account
{
private:
    float override_balance;

public:
    savings_account(float bl, string nm, int an, string at) : account(nm, an, at)
    {
        override_balance = bl;
    }
    virtual void display()
    {
        displayDetails();
        cout << "\nBalance :  " << override_balance;
    }
    void s_deposit(float deposit, float interest)
    {
        override_balance = override_balance + deposit;
        interest = (override_balance * 2) / 100;
        override_balance = override_balance + interest;
    }
};

int main()
{
    current_account c1(5000, "Muhit", 1234, "CR");
    savings_account s1(10000, "Jack", 2234, "SV");
    c1.c_deposit(2000);
    s1.s_deposit(500, 10);
    c1.display();
    s1.display();
    return 0;
}