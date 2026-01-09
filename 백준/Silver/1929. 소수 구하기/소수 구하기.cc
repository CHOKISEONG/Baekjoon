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

    int M{}, N{};
    cin >> M >> N;

    if (M == 1) ++M;
    if (M == 2)
    {
        cout << M << '\n';
        ++M;
    }

    for (int i{ M }; i < N + 1; ++i)
    {
        bool isPrime{ true };
        for (int j = 2; j*j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << '\n';
        }
    }
}