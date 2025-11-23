#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;


    Node(int val){
        this->val = val;
        this->next = next;
    }
};

Node* midd_ele(Node* head){
    Node* first = head;
    Node* sec = head;
    while(sec != NULL && sec->next == NULL)
{      first = first->next;
    sec = sec->next->next;
}     return first;

}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main (){

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
    display(head);
}

