#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&s, int target){
    // base case 
    if(s.empty() || s.top() >= target){
        s.push(target);
        return ;
    }
    int topElement = s.top();
    s.pop();
    // recursive calls 
    insertSorted(s, target);
    // backtracking 
    s.push(topElement);
}
void sortStack(stack<int>&s){
    // base case 
    if(s.empty()){
        return ;
    }
    int topElement = s.top();
    s.pop();
    // RC
    sortStack(s);
    // doing sorting before an element to be pushed into the stack 
    insertSorted(s, topElement);
}
int main(){
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(5);
    s.push(3);
    s.push(9);
    
    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    

}