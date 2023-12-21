#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
#include<algorithm>
using namespace std;
vector<int> prevsmallerindex(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());

    for(int i = 0;i<input.size();i++){
        int curr = input[i];
        // your ans is in stack 
        while(s.top()!= -1 && input[s.top()] >= curr){
            s.pop();
        }
        // iss line tk aane ka mtlb hai ek small element mil chuka hai 
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}
vector<int> nextsmallerindex(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());

    for(int i = input.size()-1 ;i>=0;i--){
        int curr = input[i];
        // your ans is in stack 
        while(s.top()!= -1 && input[s.top()] >= curr){
            s.pop();
        }
        // iss line tk aane ka mtlb hai ek small element mil chuka hai 
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

int largestareaofhistogram(vector<int>&height){
    // step -1: prev smaller index output
    vector<int>prev = prevsmallerindex(height);
    // step 2: next smaller index height
    vector<int>next = nextsmallerindex(height);
    int maxarea = INT_MIN;
    int size = height.size();
    for(int i=0;i<height.size();i++){
        
        int length = height[i];

        if(next[i] == -1)
        next[i] = size;
        int width = next[i] - prev[i] - 1;


        int area = length*width;
        maxarea = max(maxarea, area);
    }
    return maxarea;
}
int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(6);
    input.push_back(2);
    input.push_back(3);
    int a = largestareaofhistogram(input);
    cout<<a;
}