#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isOperand(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        return true;
    }
    return false;
}
int evalRPN(vector<string> &s)
{
    stack<long long> st;
    long long first, second, res;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i][0];
        if (!isOperand(ch) || s[i].length() > 1)
        {
            long long num = stoi(s[i]);
            st.push(num);
        }
        else
        {
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();
            if (ch == '+')
                res = second + first;
            else if (ch == '-')
                res = second - first;
            else if (ch == '*')
                res = second * first;
            else if (ch == '/')
                res = second / first;
            st.push(res);
        }
    }
    return (int)st.top();
}
int main()
{
    vector<string> tokens = {{"10"}, {"6"}, {"9"}, {"3"}, {"+"}, {"-11"}, {"*"}, {"/"}, {"*"}, {"17"}, {"+"}, {"5"}, {"/"}};
    cout << evalRPN(tokens);

    return 0;
}






/////////clean code
/*


     int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for (String s : tokens) {
            if ("+".equals(s)) stack.push(stack.pop() + stack.pop());
            else if ("-".equals(s)) stack.push(-stack.pop() + stack.pop());
            else if ("/".equals(s)) stack.push((int)(1D / stack.pop() * stack.pop()));
            else if ("*".equals(s)) stack.push(stack.pop() * stack.pop());
            else stack.push(Integer.valueOf(s));
        }

        return stack.pop();
    }


*/


