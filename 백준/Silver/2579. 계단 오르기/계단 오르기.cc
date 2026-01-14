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

    int n{};
    cin >> n;

    vector<int> stair(n+1, 0);
    vector<int> sum(n + 1, 0);
    for (int i{ 1 }; i <= n; ++i)
    {
        cin >> stair[i];
    }

    sum[1] = stair[1];
    if (n >= 2)
    {
        sum[2] = stair[1] + stair[2];
    }
    if (n >= 3)
    {
        sum[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
    }

    for (int i{ 4 }; i <= n; ++i)
    {
        sum[i] = max(sum[i - 2] + stair[i], sum[i - 3] + stair[i-1] + stair[i]);
    }

    cout << sum[n];
}