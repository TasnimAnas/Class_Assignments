/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
A book shop maintains the inventory of books that are being sold at the
workshop. The list includes details such as author, title, price, publisher and
stock position. Whenever a customer wants a book, the sales person inputs the
title and author and the system searches the list and displays whether it is
available or not. If it is not, an appropriate message is displayed. If it is, then the
system displays the book details and requests for the number of copies
required. If the requested copies are available, the total cost of the requested
copies is displayed otherwise the message “Required copies not in stock” is
displayed. WAP using a class called Books with suitable member functions and
constructors.

*/

#include <bits/stdc++.h>
using namespace std;

class Books_762
{
private:
    string BookTitle_762;
    string Author_762;
    string Publisher_762;
    float Price_762;
    unsigned int stockPosition_762;

public:
    Books_762() {}
    Books_762(string BookTitle_762, string Author_762, string Publisher_762, float Price_762, unsigned int Quantity_762)
    {
        this->BookTitle_762 = BookTitle_762;
        this->Author_762 = Author_762;
        this->Publisher_762 = Publisher_762;
        this->Price_762 = Price_762;
        this->stockPosition_762 = Quantity_762;
    }
    void PrintBook_762()
    {
        cout << "Name: " << BookTitle_762 << endl;
        cout << "Author: " << Author_762 << endl;
        cout << "Publisher: " << Publisher_762 << endl;
        cout << "Price: " << Price_762 << endl;
        cout << "Quantity: " << stockPosition_762 << endl
             << endl;
    }
    void buyBooks_762()
    {
        int copy_762;
        cout << "Enter number of copies you want: ";
        cin >> copy_762;
        if (copy_762 > stockPosition_762)
        {
            cout << "Required copies not in stock" << endl;
            buyBooks_762();
        }
        else
        {
            cout << "Total price: " << copy_762 * Price_762 << endl;
        }
    }
    ~Books_762()
    {
        delete &BookTitle_762;
        delete &Author_762;
        delete &Publisher_762;
        delete &Price_762;
        delete &stockPosition_762;
    }
    friend void searchBook_762(string, string);
};
vector<Books_762> BookList_762;

void addBook_762()
{
    string title_762, author_762, publisher_762;
    unsigned int quantity_762;
    float price_762;
    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, title_762);
    cout << "Enter Author: ";
    getline(cin, author_762);
    cout << "Enter Publisher: ";
    getline(cin, publisher_762);
    cout << "Enter Price: ";
    cin >> price_762;
    cout << "Enter Quantity: ";
    cin >> quantity_762;
    Books_762 Adder(title_762, author_762, publisher_762, price_762, quantity_762);
    BookList_762.push_back(Adder);
    cout << endl
         << "Book added!" << endl
         << endl;
}

void searchBook_762(string auth, string title)
{
    for (int i = 0; i < BookList_762.size(); i++)
    {
        if (BookList_762[i].Author_762 == auth && BookList_762[i].BookTitle_762 == title)
        {
            cout << "Book Found!" << endl;
            BookList_762[i].buyBooks_762();
            return;
        }
    }
}

int main()
{
    while (1)
    {
        cout << "1. Add Books." << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Books" << endl;
        cout << "4. Exit." << endl;

        cout << "Select option: ";
        int MainSelection_762;
        cin >> MainSelection_762;
        switch (MainSelection_762)
        {
        case 1:
        {
            addBook_762();
            break;
        }
        case 2:
        {
            for (int i = 0; i < BookList_762.size(); i++)
            {
                BookList_762[i].PrintBook_762();
            }
            break;
        }
        case 3:
        {
            string auth_762, title_762;
            cout << "Enter author name: ";
            cin.ignore();
            getline(cin, auth_762);
            cout << "Enter book title: ";
            getline(cin, title_762);
            searchBook_762(auth_762, title_762);
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout << endl
                 << "Wrong selection..." << endl
                 << endl;
        }
        }
    }

    return 0;
}