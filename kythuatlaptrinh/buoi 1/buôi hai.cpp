#include <iostream>
#include <string> // Cần thêm thư viện này để dùng kiểu dữ liệu string

using namespace std;

struct person {
    int id, age;
    string name, village;
};

void main() {
    int cmd; // Khai báo cmd ở ngoài để vòng lặp while có thể hiểu được
    do {
        cout << "           HUMAN RESOURCE MANAGEMENT          " << endl;
        cout << "1. Show person list" << endl;
        cout << "2. ADD Person list" << endl;
        cout << "3. Remove a person by Id" << endl;
        cout << "4. Find people by name" << endl;
        cout << "5.export to file" << endl;
        cout << "6.import to file" << endl;
        cout << "0. Quit" << endl;

        cin >> cmd;

        switch (cmd) {
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 6: {
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
