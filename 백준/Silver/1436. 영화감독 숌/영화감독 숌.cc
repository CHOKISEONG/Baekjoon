#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    vector<int> arr;
    int continued{};
    for (int i{ 666 };; ++i)
    {
        string str = to_string(i);
        continued = 0;
        for (int i{}; i < str.size(); ++i)
        {
            if (str[i] == '6')
            {
                ++continued;
            }
            else if(continued < 3)
            {
                continued = 0;
            }
        }

        if (continued > 2)
        {
            arr.push_back(i);
        }


        if (arr.size() == 10000)
        {
            break;
        }
    }

    cout << arr[num - 1];
}