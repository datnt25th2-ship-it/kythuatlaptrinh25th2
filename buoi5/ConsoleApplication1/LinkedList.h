#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Account.h"
#include <iostream>
using namespace std;
struct Node
{
    Account data;
    Node* next;
};

struct LinkedList {
    Node* head;
    void Show();
};
void LinkedList::Show() {
    if (head == NULL) {
        cout << "No accounts to show." << endl;
        return;
    }

    Node* item = head;
    while (item != NULL) {
        cout << item->data;
        item = item->next;
    }
}
#endif