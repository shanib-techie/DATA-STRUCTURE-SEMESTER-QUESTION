/*make circular ll*/
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
    Node* del(Node* head,int tarval){
        Node* t = head;
        while(t->next->val!=tarval){
            t = t->next;
        }
        t->next = t->next->next;
        return head;
    }

    void display(Node* head){
         if(head == NULL) return;
        Node*temp = head;
        while(temp->next!=head){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<temp->val<<endl;
        
    }



int main(){
    Node* a = new Node(10) ;
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next =d;
    d->next = a;
    display(a);
    del(a,30)->val;
    cout<<endl;
        display(a);
}