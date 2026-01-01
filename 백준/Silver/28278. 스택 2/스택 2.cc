#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    stack<int> st;
    int cmd;
    int tmp{};

    while (num--)
    {
        cin >> cmd;

        if (cmd == 1)
        {
            cin >> cmd;
            st.push(cmd);
        }
        else if (cmd == 2)
        {
            if (!st.empty())
            {
                cout << st.top() << '\n';
                st.pop();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (cmd == 3)
        {
            cout << st.size() << '\n';
        }
        else if (cmd == 4)
        {
            if (st.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (cmd == 5)
        {
            if (!st.empty())
            {
                cout << st.top() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
}