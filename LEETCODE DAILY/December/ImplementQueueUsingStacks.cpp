#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class MyQueue
{
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int x = s1.top();
                s1.pop();
                s2.push(x);
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int x = s1.top();
                s1.pop();
                s2.push(x);
            }
        }
        return s2.top();
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
            return true;
        else
            return false;
    }
};

