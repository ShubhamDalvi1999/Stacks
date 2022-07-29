#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> aux;
    int a[]={4,10,34,2,5};
    int len=sizeof(a)/sizeof(a[0]);
    //pushing into stack
    for(int i=0;i<len;i++)
    {
        if(i==0)
        {
              cout<<"for i:"<<i<<endl;    
             s.push(a[i]);
             aux.push(a[i]); 
             cout<<"s.top"<<s.top()<<endl;
             cout<<"aux.top"<<aux.top()<<endl;   
        }
        else
        {
            int topofs=s.top();
            if(topofs<a[i])
            {
                cout<<"for i:"<<i<<endl;    
                aux.push(aux.top());
                cout<<"aux.top"<<aux.top()<<endl; 
                s.push(a[i]);
                cout<<"s.top now"<<s.top()<<endl;
            }
            else
            {
                cout<<"for i:"<<i<<endl;    
                s.push(a[i]);
                aux.push(a[i]);
                cout<<"aux.top"<<aux.top()<<endl; 
                cout<<"s.top now"<<s.top()<<endl;
            }
        }
  
    }
    cout<<"the auxilary one is: "<<endl;
    //         while(!s.empty())
    //     {
    //         cout<<s.top();
    //         s.pop();
    //     }
    //     while(!aux.empty())
    //     {
    //         cout<<aux.top();
    //         aux.pop();
    //     }
    // stack<int>::iterator it; 
    while(!aux.empty())
    {
        cout<<aux.top()<<" ";
        aux.pop();
    }
    return 0;
}