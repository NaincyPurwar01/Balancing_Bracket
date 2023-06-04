#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<char> l;
    cout << "Enter brackets" << endl;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            l.push(s[i]);
        }
        else
        {
            if(l.empty())
            {
                cout<<"Invalid";
            }
            if ((l.top() == '(' && s[i] == ')') || (l.top() == '[' && s[i] == ']') || (l.top() == '{' && s[i] == '}'))
                l.pop();
        }
    }
    if (l.empty())
        cout << "Valid Sequence";
    else
        cout << "Invalid Sequence";
}

