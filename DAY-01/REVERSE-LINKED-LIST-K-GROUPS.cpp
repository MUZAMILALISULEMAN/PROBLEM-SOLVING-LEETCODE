#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Add element at the end
    void add(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete first occurrence of a value
    void del(int value) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Value not found\n";
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Print list
    void print() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Reverse nodes in groups of k
    void kgroup(int k) {
        Node * prev,*forward,*link=nullptr;
        int n = 0 ;
        bool flag = true;
        Node  * temp = head;
        Node * HEAD;

        while(temp!=nullptr){
            prev = nullptr;
            forward = nullptr;
            HEAD = temp;  // current group start

            // reverse k nodes
            while(temp!=nullptr && n<k){
                forward = temp->next;
                temp->next = prev;
                prev = temp;
                temp = forward;
                n++;
            }
            n=0;

            // agar pehla group hai to head update karo
            if(flag){
                head = prev;
                flag = false;
            } else {
                link->next = prev;   // pichla group jodo
            }

            HEAD->next = temp;   // current group ka end jodo
            link = HEAD;         // ab link point kare current group ke end par
        }
    }
};

int main() {
    LinkedList ll;

    ll.add(10);
    ll.add(20);
    ll.add(30);
    ll.add(40);
    ll.add(50);
 

    cout << "Original list:\n";
    ll.print();

    ll.kgroup(3);

    cout << "After k-group reversal:\n";
    ll.print();

    return 0;
}
