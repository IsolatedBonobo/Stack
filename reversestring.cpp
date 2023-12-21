#include<iostream>
#include<stack>
using namespace std;
// reversing a string using stack
int main(){
    string str;
    getline(cin,str);
    stack<char>s;
    int a = str.length();
    for(int i =0;i<a;i++){
        char ch = str[i];
        s.push(str[i]);
    }
    
    // printing all elements of stacks 
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

}