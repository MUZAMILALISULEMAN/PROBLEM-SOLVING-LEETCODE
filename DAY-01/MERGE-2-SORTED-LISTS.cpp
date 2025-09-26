#include <iostream>
using namespace std;
#include <utility>
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



public:
	    Node* head;
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
    
    void sort(){
    	bool swapped = true;
    	Node * temp = head;
    	Node * last = nullptr;
		while(swapped){
    		swapped=false;
    		while(temp->next!=last){
    			if(temp->data > temp->next->data){
    				swap(temp->data,temp->next->data);
					swapped = true;	
			}
				temp = temp->next;
			}
			
			last = temp;
			temp=head;
		}
    	
    	
    	
	}


		Node *  merge(Node * head1,Node * head2){
			Node  dummyHead(0);
			Node *dH = &dummyHead;
			while(head1!=nullptr && head2!=nullptr){
				
				if(head1->data <=  head2->data){
					dH->next = head1;
					head1 = head1->next;
					dH = dH->next;
				}else{
					dH->next = head2;
					head2 = head2->next;
					dH = dH->next;
				}
			}
			if(head1==nullptr){
				while(head2!=nullptr){
				    dH->next = head2;
					head2 = head2->next;
					dH = dH->next;
				}
			}
			{
				while(head1!=nullptr){
				    dH->next = head1;
					head1 = head1->next;
					dH = dH->next;
				}
			}
			
			return dummyHead.next;
			
		}
};

int main() {
    LinkedList ll,ll2,temp;

    ll.add(10);
    ll.add(20);


    ll2.add(40);
    ll2.add(50);
    
    temp.head = temp.merge(ll.head,ll2.head);
    temp.print();
    
    




    return 0;
}
