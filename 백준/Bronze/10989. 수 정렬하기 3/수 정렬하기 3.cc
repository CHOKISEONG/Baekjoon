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

    int* arr = new int[10001] {};

    int value{};
    for (int i{}; i < num; ++i)
    {
        cin >> value;
        ++arr[value];
    }

    for (int i{}; i < 10001; ++i)
    {
        if (arr[i] == 0) continue;

        for (int j{}; j < arr[i]; ++j)
        {
            cout << i << '\n';
        }
    }
}