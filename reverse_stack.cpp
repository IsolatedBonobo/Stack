#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s, int target){
    // base case 
    if(s.empty()){
        s.push(target);
        return;
    }
    int top = s.top();
    // recursive call
    s.pop();
    insertatbottom(s, target);
    // backtracking
    s.push(top);
}
void reversestack(stack<int>&s){
    // base case 
    if(s.empty()){
        return ;
    }
    int target = s.top();
    s.pop();

    // recursive call 
    reversestack(s);
    // target ko bottom pe insert krna 
    insertatbottom(s, target);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    reversestack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}