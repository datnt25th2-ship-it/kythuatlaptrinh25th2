#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

struct Account {
    int id;
    string link, user, password, description;

    friend ostream& operator<<(ostream& os, const Account& a) {
        os << "\t ID: " << a.id << endl;
        os << "\t User Name: " << a.user << endl;
        os << "\t Password: " << a.password << endl;
        os << "\t Description: " << a.description << endl;
        return os;
    }
    friend istream& operator>>(istream& is, Account& a) {
        cout << "Enter account information: " << endl;
        cout << "\t Enter account ID: ";
        is >> a.id;
        cout << "\t Enter link: ";
        is.ignore();
        getline(is, a.link);
        cout << "\t Enter user name: ";
        getline(is, a.user);
        cout << "\t Enter password: ";
        getline(is, a.password);
        cout << "\t Enter description: ";
        getline(is, a.description);
        return is;
    }
};
#endif

