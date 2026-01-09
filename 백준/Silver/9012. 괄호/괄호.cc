#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    string str;
    string isOkay;

    for (int i{}; i < num; ++i)
    {
        isOkay = "YES\n";
        cin >> str;
        
        stack<char> st;

        for (int j{}; j < str.size(); ++j)
        {
            if (str[j] == '(')
            {
                st.push('(');
            }
            else if (str[j] == ')')
            {
                if (st.empty())
                {
                    isOkay = "NO\n";
                    break;
                }
                else if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    isOkay = "NO\n";
                    break;
                }
            }
        }

        if (!st.empty())
        {
            cout << "NO\n";
        }
        else
        {
            cout << isOkay;
        }
    }
}