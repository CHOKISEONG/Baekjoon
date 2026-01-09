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

    map<int, int> arr;

    string cmd;
    int moreCmd{};
    for (int i{}; i < num; ++i)
    {
        cin >> cmd;

        if (cmd == "add")
        {
            cin >> moreCmd;
            arr[moreCmd] = 1;
        }
        else if (cmd == "remove")
        {
            cin >> moreCmd;
            arr[moreCmd] = 0;
        }
        else if (cmd == "check")
        {
            cin >> moreCmd;
            cout << arr[moreCmd] << '\n';
        }
        else if (cmd == "toggle")
        {
            cin >> moreCmd;
            arr[moreCmd] = (arr[moreCmd] == 1) ? 0 : 1;
        }
        else if (cmd == "all")
        {
            for (int i{ 1 }; i <= 20; ++i)
            {
                arr[i] = 1;
            }
        }
        else if (cmd == "empty")
        {
            for (int i{ 1 }; i <= 20; ++i)
            {
                arr[i] = 0;
            }
        }
    }
}