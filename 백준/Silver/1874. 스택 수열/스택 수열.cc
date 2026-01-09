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

    vector<int> arr;
    int tmp;
    for (int i{}; i < num; ++i)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    string str;
    stack<int> st;
    int current_num{ 1 };
    bool possible = true;

    for (int i = 0; i < num; ++i) {
        int target = arr[i];

        while (current_num <= target) {
            st.push(current_num++);
            str += "+\n";
        }

        if (!st.empty() && st.top() == target) {
            st.pop();
            str += "-\n";
        }
        else {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << str;
    }
    else
    {
        cout << "NO";
    }
}