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

    string fizzBuzz;
    int remain{};
    for (int i{}; i < 3; ++i)
    {
        cin >> fizzBuzz;
        if (fizzBuzz[0] != 'F' && fizzBuzz[0] != 'B')
        {
            remain = 3 - i;
            break;
        }
    }

    long long targetNum{ stoi(fizzBuzz) + remain };
    if (!(targetNum % 3) && !(targetNum % 5))
    {
        cout << "FizzBuzz";
    }
    else if (!(targetNum % 3))
    {
        cout << "Fizz";
    }
    else if (!(targetNum % 5))
    {
        cout << "Buzz";
    }
    else
    {
        cout << targetNum;
    }
}