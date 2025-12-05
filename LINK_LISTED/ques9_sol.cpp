#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int val){
        this->next = NULL;
        this->pre = NULL;
        this->val = val;
    }
};
class circu_DDL{
    public:
    Node* head;
    Node* tail;
    int size;

    circu_DDL(){
        head = tail = NULL;
        int size = 0;
    }
    void display(){
  
        
    if (head == NULL) return;

    Node* temp = head;
    while (true) {
        cout << temp->val << " ";
        temp = temp->next;

        if (temp == head)   // LOOP BREAK CONDITION
            break;
    }


    }
    void insert_At_tail(int val){
        Node* t = new Node(val);
            if (head == NULL) {
        head = t;
        head->next = head;
        head->pre = head;
        return;
    }
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = t; 
        t->pre = temp;
        t->next = head;
        t->next = head;
        head->pre = temp;
    }


};

int main(){
    circu_DDL cl;
    cl.insert_At_tail(10);
    cl.insert_At_tail(20);
    cl.display();


}