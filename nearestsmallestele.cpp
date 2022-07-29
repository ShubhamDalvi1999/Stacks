// C++ implementation of efficient algorithm to find
// smaller element on left side
#include <iostream>
#include <stack>
using namespace std;

// Prints smaller elements on left side of every element
void printPrevSmaller(int arr[], int n)
{
	stack<int> st;

    for(int i=0; i<n; i++)
    {
   
       if(st.empty())
       {
        st.push(arr[i]);
        cout<<"-1"<<" ";
       }
       else
       {
        while ( !st.empty() && st.top()>arr[i] )
        {
            st.pop();
        }

        if(st.empty())
            cout<<"-1"<<" ";
        else
            cout<<st.top()<<" ";

        st.push(arr[i]);
       }
    }    
}

int main()
{
	int arr[] = {1, 2, -1, 1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
   
	printPrevSmaller(arr, n);
	return 0;
}
