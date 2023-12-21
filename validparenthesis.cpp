#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char>st;
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        // for opening bracket 
        if(ch == '(' || ch == '{' || ch == '[' ){
            st.push(ch);
        }
        // i.e it is for closing bracket 
        else{
            if(!st.empty()){
                char topch = st.top();
                if(ch == ')' && topch == '(')
                st.pop();
                else if(ch == ']' && topch == '[')
                st.pop();
                else if(ch == '}' && topch == '{')
                st.pop();
                else
                return false;
            }
            else{
                return false;
            }

        }
    }
    if(st.empty())
    return true;
    else
    return false;
}
int main(){
    string s ;
    getline(cin, s);

    bool a = isValid(s);
    cout<<a;
}