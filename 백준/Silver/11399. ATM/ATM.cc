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
    int tmp{};
    for (int i{}; i < num; ++i)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    long long sum{};
    for (int i{}; i < arr.size(); ++i)
    {
        long long add{};
        for (int j{}; j <= i; ++j)
        {
            add += arr[j];
        }
        sum += add;
    }
    cout << sum;
}