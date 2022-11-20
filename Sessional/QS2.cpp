#include <iostream>
using namespace std;

class account
{
protected:
    string name;
    double bal;

public:
    account(string nm)
    {
        name = nm;
        bal = 0;
    }
    virtual void deposit(double am)
    {
        bal += am;
    }
    virtual void withdraw(double am)
    {
        bal -= am;
    }
};
class current_account : public account
{
private:
public:
    current_account(string nm) : account(nm){};
    virtual void display()
    {
        cout << "Name :" << name << endl
             << "Balance :" << bal << endl;
    }
    virtual void deposit(double am)
    {
        bal += am;
    }
    virtual void withdraw(double am)
    {
        bal -= am;
    }
};

class savings_account : public account
{
private:
public:
    savings_account(string nm) : account(nm){};
    virtual void display()
    {
        cout << "Name :" << name << endl
             << "Balance :" << bal << endl;
    }
    virtual void deposit(double am)
    {
        bal += am;
    }
    virtual void withdraw(double am)
    {
        bal -= am;
    }
};

int main()
{
    current_account c1("Muhit");
    savings_account s1("Jack");
    c1.deposit(2000);
    c1.withdraw(1000);
    c1.display();

    s1.deposit(5000);
    s1.withdraw(1000);
    s1.display();
    return 0;
}