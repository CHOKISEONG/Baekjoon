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

    queue<int> arr;

    for (int i = 1; i <= num; i++) {
        arr.push(i);
    }

    while (arr.size() > 1)
    {
        arr.pop();
        
        int tmp = arr.front();
        arr.pop();
        arr.push(tmp);
    }

    cout << arr.front();
}