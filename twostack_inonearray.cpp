#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this -> size = size;
        top1 = -1 ;
        top2 = size;
    }
    void push1(int data){
        if(top2 - top1 == 1){
            // space available
            cout<<"Stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data){
        if(top2 -top1 == 1){
            cout <<"stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2] == data;
        }
    }
    void pop1(){
        if(top1 == -1)
        cout<<"stack underflow"<<endl;
        else
        top1--;
    }
    void pop2(){
        if(top2 == -1)
        cout<<"stack underflow"<<endl;
        else
        top2++;
    }
    void empty(Stack &s){
        
    }

}
int main(){
    Stack s(10);
    s.push1(20);
    s.push1(30);
    s.push1(10);
    s.push2(105);
    s.push2(140);

    while()
}