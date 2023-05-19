#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,count=0;
    while(i<s.length())
    {
        if(s[i]=='(')
        count++;
        else if(s[i]==')')
        count--;

        if(count<0)
        {
            cout<<"Invalid sequence"<<endl;
            return 0;
        }
       
        i++;
    }
     if(count==0)
        {
            cout<<"Valid sequence"<<endl;
        }
    else
    cout<<"Invalid sequence";
}
