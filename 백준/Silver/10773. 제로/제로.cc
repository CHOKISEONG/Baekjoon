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

    stack<int> st;

    int tmp{};
    for (int i{}; i < num; ++i)
    {
        cin >> tmp;
        if (tmp == 0)
        {
            st.pop();
        }
        else
        {
            st.push(tmp);
        }
    }

    long long sum{};
    int size{ st.size() };
    for (int i{}; i < size; ++i)
    {
        sum += st.top();
        st.pop();
    }

    cout << sum;
}