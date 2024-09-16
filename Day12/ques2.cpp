#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

Node* createLinkedListFromString(const string& input) {
    string modifiableInput = input;
    stringstream ss(modifiableInput);
    string token;
    Node* head = nullptr;
    Node* current = nullptr;

    size_t pos = 0;
    while ((pos = modifiableInput.find("->")) != string::npos) {
        token = modifiableInput.substr(0, pos);
        int num = stoi(token);
        if (head == nullptr) {
            head = new Node{num, nullptr};
            current = head;
        } else {
            current->next = new Node{num, nullptr};
            current = current->next;
        }
        modifiableInput.erase(0, pos + 2);
    }
    // Add the last element
    if (!modifiableInput.empty()) {
        int num = stoi(modifiableInput);
        if (head == nullptr) {
            head = new Node{num, nullptr};
        } else {
            current->next = new Node{num, nullptr};
        }
    }
    return head;
}

int main() {
    string input;
    int newData;
    cout << "Enter the linked list elements (e.g., 10->20->30->40): ";
    getline(cin, input);
    cout << "Enter the new data to be inserted at the end: ";
    cin >> newData;
    Node* head = createLinkedListFromString(input);
    insertAtEnd(head, newData);
    printLinkedList(head);
    return 0;
}