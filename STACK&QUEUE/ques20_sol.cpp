/*REVERSE THE STACK USING QUEUE */
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(stack<int>& st){
    stack<int> temp;
    int n = st.size();
    for(int i = 1;i<=n;i++){
        int x = st.top();
        cout<<x<<" ";
        temp.push(x);
        st.pop();
    }
    //reenter element in original stack 
   for(int i = 1;i<=n;i++){
        st.push(temp.top());
        temp.pop();
    }
}
void rev_stack_using_queue(stack<int>  st ){

}
int main(){
    stack<int> s;
    int size = 0 ;
    cout<<"enter the size of stack : ";
    cin>>size;
    int ele;
    for(int i = 1;i<=size;i++){
        cout<<"ENTER THE ELEMENT OF STACK AT "<<i<< "position : ";
        cin>>ele;
        s.push(ele);
    }
    display(s);
    cout<<endl;
   cout<< s.top();
   cout<< s.size();

}