//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char c: x)
        {
            if(c=='(')
            {
                st.push(c);
            }
            else if(c=='{')
            {
                st.push(c);
            }
            else if(c=='[')
            {
                st.push(c);
            }
            else if(c==']')
            {
                if(st.empty())      //cannot pop if st is empty
                {
                    return 0;
                }
                
                if(st.top() == '[') //check for valid scenario
                {
                    st.pop();
                }
                else                //check for invalid scenario
                    return false;
                
            }
            else if(c=='}')
            {
                if(st.empty())
                {
                    return 0;
                }
                
                if(st.top()=='{')
                {
                    st.pop();
                }
                else
                    return false;
                
            }
            else if(c==')')
            {
                if(st.empty())
                {
                    return 0;
                }
                
                if(st.top()=='(')
                {
                    st.pop();
                }
                else
                    return false;
                
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
            return false;
        
    }

};

//{ Driver Code Starts.

int main()
{ 
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends