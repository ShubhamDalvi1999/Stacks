#include <iostream>
#include <stack>
using namespace std;

stack<int> stk;
stack<int> mstk;

void push(int x)
{
    stk.push(x);
    if (mstk.empty())
    {
        mstk.push(x);
    }
    else
    {
        int top = mstk.top();
        mstk.push(top > x ? x : top);
    }
}

void pop()
{
    stk.pop();
    mstk.pop();
}

int getMin()
{
    if (!mstk.empty())
        return mstk.top();
    else
        return -1;
}


int main()
{
    push(10);
    push(6);
    cout<<getMin()<<endl;       //6
    push(1);
    push(2);
    cout<<getMin()<<endl;       //1
    push(0);
    cout<<getMin()<<endl;       //0
    //10 6 1 2 0
    pop();
    pop();
    pop();
    //10 6
    cout<<getMin()<<endl;       //6
}