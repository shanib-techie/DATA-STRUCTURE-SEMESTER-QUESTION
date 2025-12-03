#include <iostream>
#include <stack>
using namespace std;

void display(stack  <int> st){
    stack <int> temp;
    while(st.size() > 0 )
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
}

int large_two_num_addition(){
    
}
int main(){
    stack<int> st;
     int size =  0;
     cout<<"enter the size of  stack : ";
     cin>>size;
     int ele;
     for(int i = 1;i<=size;i++){
        cout<<"ENTER THE ELEMT OF STACK AT POSITION "<<i<<" : ";
        cin>>ele;
        st.push(ele);
     }
     display(st);
}