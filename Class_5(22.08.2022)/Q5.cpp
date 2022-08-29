/*5. Create a class which stores name, author and price of a book. Store information for n number
of books. Display information of all the books in a given price range using friend function.*/

#include <iostream>
using namespace std;
class book_dtl
{
private:
    string name;
    string author;
    int price;

public:
    void setvalue(string nm, string auth, int pr)
    {
        name = nm;
        author = auth;
        price = pr;
    }
    friend void display(book_dtl x[], int n, int lr, int ur);
};
void display(book_dtl x[], int n, int lr, int ur)
{
    for (int i = 0; i < n; i++)
    {
        if (x[i].price >= lr && x[i].price <= ur)
        {
            cout << "\nBook's Name: " << x[i].name << "\n";
            cout << "Author: " << x[i].author << "\n";
            cout << "Price: " << x[i].price;
        }
    }
}

int main()
{
    int n, lr, ur, pr;
    string name, author;
    cout << "No. of Books: ";
    cin >> n;
    book_dtl k[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nBook-" << i + 1 << "'s Name: ";
        cin >> name;
        cout << "Author of the book: ";
        cin >> author;
        cout << "Price of the book: ";
        cin >> pr;
        k[i].setvalue(name, author, pr);
    }
    cout << "\nEnter price range(lower & upper): ";
    cin >> lr >> ur;
    display(k, n, lr, ur);
    return 0;
}