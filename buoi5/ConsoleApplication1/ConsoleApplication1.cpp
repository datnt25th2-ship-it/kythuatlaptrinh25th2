
#include <iostream>
#include "Account.h"
#include "LinkedList.h"
using namespace std;
int main()
    {
    LinkedList account;
        do {
            cout << "          ACCOUNT  MANAGEMENT SYSTEM          " << endl;
            cout << "1. Show all account " << endl;
            cout << "2. Add an account " << endl;
            cout << "3. Update an account" << endl;
            cout << "4. delete an account" << endl;
            cout << "5. export to file" << endl;
            cout << "6. import to file" << endl;
            cout << "0. Quit" << endl;

            cin >> cmd;

            switch (cmd) {
            case 1: {
                break;
            }
            case 2: {
                cout << "Add new account" << endl;
                Book book; // Gi? s? struct/class c?a b?n tên là Book
                cin >> book;
                books.push_back(book);
                break;
            }

            case 3: {
                cout << "Update an account" << endl;
                int accountId;
                cout << "Enter account ID to update: ";
                cin >> accountId;

                // G?i hàm Update
                Update(books, accountId);
                break;
            }
            case 4: {
                cout << "Delete an account" << endl;
                int accountId;
                cout << "Enter account ID to delete: ";
                cin >> accountId;

                
                bool res = Delete(books, accountId);

                if (res) {
                    cout << "Deleted account with Id: " << accountId << endl;
                }
                else {
                    cout << "Account with ID " << accountId << " not found." << endl;
                }
                break;
            }

            case 5: {
                cout << "Search for an account" << endl;
                string searchTerm;
                cout << "Enter user name to search: ";

                cin.ignore(); 
                getline(cin, searchTerm);  
                Find(books, searchTerm);
                break;
            }

            case 6: {
                break;
            }
            case 7: {
                break;
            }
            case 0: {
                break;
            }
            default:
                cout << "Your command isn't found. Try again!" << endl;
            }
        } while (cmd != 0);
    }
}

