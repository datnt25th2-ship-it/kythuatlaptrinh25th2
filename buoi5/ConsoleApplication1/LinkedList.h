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
    Node* head = NULL;
    void Show();
    void AddFirst(Account a);
    void AddTail(Account a);
    bool Update(int accountId);
    bool Delete(int accountId);
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
void LinkedList::AddFirst(Account a) {
    Node* nowNode = new Node;
    newNode->data = a;
    newNode->next = head;
    head = newNode;
    cout << "Added account with ID:" << a.id << endl;
}
void LinkedList::AddTail(Account a) {
    Node* nowNode = new Node;
    newNode->data = a;
    if (head == Null) {
        head = newNode;
    }
    else {
        Node* item = head;
        while (item->next != Null) {
            item = item->next;
        }
        item->next = newNode;
    }
    cout << "Added account with ID:" << a.id << endl;
}
bool LinkedList::Update(int accountId) {
    Node* item = head;
    while (item != NULL) {
        if (item->data.id == accountId) {
            cout << "Updating account with ID: " << accountId << endl;
            cin >> item->data;
            return true;
        }
        item = item->next;
    }
    return false;
}
bool LinkedList::Delete(int accountId) {
    if (head == NULL) {
        return false;
    }

    if (head->data.id == accountId) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* item = head;
    while (item->next != NULL) {
        if (item->next->data.id == accountId) {
            Node* temp = item->next;
            item->next = item->next->next;
            delete temp;
            return true;
        }
        item = item->next;
    }
    return false;
}

#endif