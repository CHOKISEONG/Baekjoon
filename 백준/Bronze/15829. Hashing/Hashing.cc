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

    string str;
    cin >> str;

    long long sum{};
    for (int i{}; i < num; ++i)
    {
        int tmp = (int)(str[i] - 'a' + 1);
        sum += tmp * pow(31, i);
    }

    cout << sum;
}