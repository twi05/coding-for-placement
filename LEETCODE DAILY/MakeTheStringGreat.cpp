#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string makeGood(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
            st.push(s[i]);
        else
        {
            if (abs(st.top() - s[i]) == 32)
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    string res;
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }

    return res;
}

string makeGood2(string s)
{
    int i = 0;

    while (i < s.size() - 1 && s[i])
    {
        if (abs(int(s[i] - s[i + 1])) == 32)
        {
            s.erase(i, 2);
            i = max(0, i - 2);
        }
        else
            i++;
    }
    return s;
}

int main()
{
    cout << makeGood("leEeetcode") << endl;
    cout << makeGood("abBAcCs")<<endl;
    cout << makeGood("nnfnfnfnnNNNNN")<<endl;
    cout << makeGood("tT");
    return 0;
}
