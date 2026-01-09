#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

const int module = 1234567891, r = 31;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    string str;
    cin >> str;


    long long sum{};
    long long pow{ 1 };
    for (int i{}; i < num; ++i)
    {
        int add = str[i] - 'a' + 1;
        sum = (sum + add * pow) % module;
        pow = (pow * 31) % module;
    }

    cout << sum;
}