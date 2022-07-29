#include <iostream>
#include <stack>
using namespace std;

bool duplicateParanthesis(string exp)
{
    stack<char> stk;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] != ')')
        {
            stk.push(exp[i]);
        }
        else
        {
            //exp[i] is a closing para
            if (stk.top() == '(')
            {
                return true;
            }
            while (stk.top()!='(')
            {
                stk.pop();
            }
            stk.pop();
        }
    }
    return false;
}

int main()
{
    string exp1 = "((5+3))+9";
    string exp2 = "((5+3)+9)";
    cout << duplicateParanthesis(exp1) << endl;
    cout << duplicateParanthesis(exp2) << endl;
    return 0;
}