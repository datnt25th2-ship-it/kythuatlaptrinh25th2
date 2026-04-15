
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
            cout << "5. Search for aq account " << endl;
            cout << "6. Export to file" << endl;
            cout << "7. Import from file" << endl;
            cout << "0. Exit" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;

            switch (choice) {
            case 1: {
                cout << "Show all accounts" << endl;
                account.Show();
                break;
            }
            case 2: {
                cout << "Add new account" << endl;
                Account a;
                cin >> a;
                account.AddFirst(a);

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

