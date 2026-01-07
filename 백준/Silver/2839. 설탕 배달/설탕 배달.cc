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

    if (num == 4 || num == 7)
    {
        cout << -1;
        return 0;
    }

    if (num % 5 == 0)
    {
        cout << num / 5;
        return 0;
    }

    int answer{};
    while (true)
    {
        if (num == 3 || num == 6 || num == 9 || num == 12)
        {
            cout << answer + num / 3;
            break;
        }
        else
        {
            ++answer;
            num -= 5;
        }
    }

    
}