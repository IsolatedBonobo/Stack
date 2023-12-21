#include<iostream>
#include<stack>
using namespace std;
void findmiddle(stack<int>&s, int &totalsize){
    // base case 
    if(s.size() == totalsize/2 + 1){
        cout<<s.top()<<endl;
        return ;
    }
    int temp = s.top();
    s.pop();
    // recursive call 
    findmiddle(s, totalsize);
    // backtracking
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(70);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    int totalsize = s.size();
    findmiddle(s,totalsize);
}