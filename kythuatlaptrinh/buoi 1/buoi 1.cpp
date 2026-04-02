
#include <vector>
#include <iostream>
#include <string> // Cần thêm thư viện này để dùng kiểu dữ liệu string
#include <list>
#include <fstream>

using namespace std;

struct person {
    int id, age;
    string name, hometown;
    friend istream& operator>>(istream& in, person& p) {
        cout << " enter person information :" << endl;
        cout << "\t+ Id:";
        in >> p.id;
        cout << "x\t+Name:";
        in.ignore();
        getline(in, p.name);
        cout << "\t+ Age:";
        in >> p.age;
        cout << "\t+ Home town:";
        in.ignore();
        getline(in, p.hometown);
        return in;
    }
    friend ostream operator < (ostream& out, person p) {
        out << " Person information :" << endl;
        out << " \t+ Id:" << p.id << endl;
        out << " \t+ Name:" << p.name << endl;
        out << " \t+ Age:" << p.age << endl;
        out << " \t+ hometown:" << p.hometown << endl;
        return out;
    }


};

void show(vector<person > p) {
    if (p.size() == 0)
        cout << "An empty list " << endl;
    else {
        for (int i = p.size() - 1; i >= 0; i--) {
            cout << " \t+ Id" << p[i].id << endl;
            cout << " \t+ Name" << p[i].name << endl;
            cout << " \t+ Age" << p[i].age << endl;
            cout << " \t+ hometown" << p[i].hometown << endl;
        }
    }
}
bool remove(vector<person >& p, int id) {
    for (int i = 0; i < p.size(); i++);{
        if (p[i].id == id) {
        p.erase(p.begin() + i);
        return true;
      }
    }
    return false;
}
void find(vector <person >p, string name) {
    bool found = false;
    for (int i = p.size() - 1; i >= 0; i--) {
        if (p[i].name == name) {
            found = true;
            cout << p[i];

        }
    }
    if (!found);
}
void export (vector <person > p, string filename) {
    ofstream out(filename , ios ::binary);
    if (!out.is_open()) {
        cout << "can't open file:" << filename << endl;
        return;

    }
    for (int i = 0; i < p.size(); i++) {
        out.close();
        cout << " Export successfully to file: " << filename << endl;
    }

}
void import(vector <person > p, string filename) {
    ifstream in(filename);
    if (!in.is_open()) {
        cout << " can 't open file :" << filename << endl;
        return;
    }
    p.clear();
    while (!in.eof()) {
        person a;
        a.id = 0;
        in >> a.id;
        in.ignore();
        getline(in, a.filename);
        in >> a.age;
        in.ignore();
        getline(in, a.hometown);
        if (a.id = 0)
            break;
        p.push_back(a);

    }
    in.close();
    cout << "import  successfully file:" << filename << endl;
}

void main() {
    vector<person> list;
    
    do {
        system("cls");
        cout << "           HUMAN RESOURCE MANAGEMENT          " << endl;
        cout << "1. Show person list" << endl;
        cout << "2. ADD Person list" << endl;
        cout << "3. Remove a person by Id" << endl;
        cout << "4. Find people by name" << endl;
        cout << "5.export to file" << endl;
        cout << "6.import to file" << endl;
        cout << "0. Quit" << endl;
        int cmd;
        cin >> cmd;
        switch (cmd) {
        case 1: {
            break;
        }
        case 2: {
            person a;
            cin >> a;
            list.push_back(a);
            break;
        }
        case 3: {
            int removedId;
            cout << "enter Id to remove:";
            cin >> removedId;
            bool res = remove (list, removedId);
            if (res)
                cout << "remove succesfully" << endl;
            else
                cout << "Id not found. Try aganin" << endl;
            break;
        }
        case 4: {
            string name;
            cout << " enter name to find:";
            cin.ignore();
            getline(cin, name);
            find(list, name);

            break;
        }
        case 5: {
            export (list, "25th2 dla");
            break;
        }
        case 6: {
            import (list, "25th2 dla");
            break;
        }
        case 0: {
            break;
        }
        default: {
            cout << "Your command isn't found. Try again!" << endl;
        }
        }
        cout << "Press Enter to coutinue.....";
        cin.ignore();
        cin.get();

    } while (true);

}
