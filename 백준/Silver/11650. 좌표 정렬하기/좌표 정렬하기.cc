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

    vector<vector<int>> coords(200001);

    int x, y;
    for (int i{}; i < num; ++i)
    {
        cin >> x >> y;
        coords[x + 100000].push_back(y);
    }

    for (int i{}; i < 200001; ++i)
    {
        if (!coords[i].empty())
        {
            sort(coords[i].begin(), coords[i].end());
        }
    }

    for (int i{}; i < 200001; ++i)
    {
        for (int j{}; j < coords[i].size(); ++j)
        {
            cout << i - 100000 << ' ' << coords[i][j] << '\n';
        }
    }
}