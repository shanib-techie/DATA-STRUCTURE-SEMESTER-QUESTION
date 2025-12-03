// reverse the order of stack using two additonal stack

#include<iostream>
#include<stack>
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



void reve_display(stack<int> st)
{    stack<int>sec;
    stack<int>third;
    while(st.size() > 0){
        int x = st.top();
        sec.push(x);
        st.pop();
    }
    while(sec.size() > 0 ){
        int y =  sec.top();
        third.push(y);
        sec.pop();
    }
    while(third.size() > 0 ){
        int z = third.top();
        st.push(z);
        third.pop();
    }
    display(st);
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
     cout<<endl;
     reve_display(st);

     cout<<st.top();

}



