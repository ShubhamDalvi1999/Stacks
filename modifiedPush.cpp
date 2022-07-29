#include<iostream>
#include<stack>
using namespace std;

stack<int> stk;

void modifiedPush(int no){
    //base condition of the recursion
    if(stk.empty()){
        stk.push(no);
        return;
    }

    //recursive step
    int x = stk.top();
    stk.pop();
    modifiedPush(no);
    stk.push(x);
}

int main(){
    modifiedPush(1);
    modifiedPush(2);
    modifiedPush(3);
    modifiedPush(4);

    cout<<stk.top()<<"-> ";
    stk.pop();
    cout<<stk.top()<<"-> ";
    stk.pop();
    cout<<stk.top()<<"-> ";
    stk.pop();
    cout<<stk.top();
    stk.pop();
}