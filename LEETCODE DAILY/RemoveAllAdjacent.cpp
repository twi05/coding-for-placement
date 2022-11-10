#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string removeDuplicates(string s)
{

    string res;
    for (auto c : s)
    {
        if (res.size() && res[res.size() - 1] == c)
            res.pop_back();
        else
            res.push_back(c);
    }

    return res;
}
string removeDuplicates1(string s)
{
    stack<char> st;
    for (int i = 0; s[i]; i++)
    {
        if (!st.empty() && st.top() == s[i])
            st.pop();

        else
            st.push(s[i]);
    }


string res;
while (!st.empty())
{
    res = st.top() + res;
    st.pop();
}

return res;
}

int main()
{
    cout << removeDuplicates("xyzzyl");

    return 0;
}
