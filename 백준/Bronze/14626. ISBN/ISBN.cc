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

    string ISBN;
    cin >> ISBN;

    int damagedIdx{};
    for (int i{}; i < 12; ++i)
    {
        if (ISBN[i] == '*')
        {
            damagedIdx = i;
            break;
        }
    }

    for (char i{'0'}; i <= '9'; ++i)
    {
        ISBN[damagedIdx] = i;

        int sum{};
        for (int j{}; j < 13; ++j)
        {
            if (j % 2)
            {
                sum += (int)(ISBN[j] - '0') * 3;
            }
            else
            {
                sum += (int)(ISBN[j] - '0');
            }
        }
        
        if (sum % 10 == 0)
        {
            cout << i;
            return 0;
        }
    }
}