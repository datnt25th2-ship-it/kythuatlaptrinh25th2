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
};

#endif
