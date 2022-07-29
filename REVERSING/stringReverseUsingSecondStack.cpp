#include <iostream>
#include <stack>
using namespace std;

string reverse(string inputStr)
{
    stack<char> stk;
    for (char c : inputStr)
    {
        stk.push(c);
    }
    string result = "";
    while (!stk.empty())
    {
        char c = stk.top();
        stk.pop();
        result += c;
    }
    return result;
}
int main()
{
    string str = "abcdefg";
    cout << reverse(str) << endl;
    return 0;
}