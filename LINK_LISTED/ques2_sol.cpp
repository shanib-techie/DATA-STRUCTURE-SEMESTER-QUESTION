#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void reve_by_recursive(Node* head){
    if(head == NULL) return;
    reve_by_recursive(head->next);
    cout<<head->val<<" ";
}
void reverse_display_by_rec(Node* head){
    if (head == NULL) return;
    reverse_display_by_rec(head->next);
    cout<<head->val<<" ";
}
int main(){
    int node_lenght;
    cout<<"enter the lenght of LL : ";
    cin>>node_lenght;
    Node* head = NULL;
    Node* temp = NULL;
    for(int i = 1;i<=node_lenght;i++){
        int val;
        cout<<"ENTER THE "<<i<<" NODE OF LL : ";
        cin>>val;

        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            temp = new_node;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    reve_by_recursive(head);
}

