#include <iostream>
#include <stack>
using namespace std;

stack<int> stk;

void modifiedPush(int no)
{
    //base condition of the recursion
    if (stk.empty())
    {
        stk.push(no);
        return;
    }
    //recursive step
    int x = stk.top();
    stk.pop();
    modifiedPush(no);
    stk.push(x);
}

void reverse()
{
    if (!stk.empty())
    {
        int ele = stk.top();
        stk.pop();
        reverse();
        modifiedPush(ele);
    }
}

void printStack()
{
    while (!stk.empty())
    {
        cout << stk.top() << "-> ";
        stk.pop();
    }
}

int main()
{
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    printStack();
    reverse();
    printStack();
}