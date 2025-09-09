#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the head
void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node;
    temp->data = d;
    temp->next = head;
    head = temp;
}

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;  // initially empty list
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> val;
        InsertAtHead(head, val);
        print(head);
    }

    return 0;
}