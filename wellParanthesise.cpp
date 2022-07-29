#include <iostream>
#include <stack>
using namespace std;

bool wellParanthesise(string exp)
{
    //(), {}, []
    stack<char> stk;
    for (int i=0;i<exp.size();i++)
    {
        if (exp[i] == '(')
        {
            stk.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (stk.empty())
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}
int main()
{
    string exp1 = "((1+2)+(2+7))";
    string exp2 = "((1+2)+2+7))";
    cout<<wellParanthesise(exp1)<<endl;
    cout<<wellParanthesise(exp2)<<endl;
    return 0;
}