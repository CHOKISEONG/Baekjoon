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

    int A{}, B{}, V{};
    cin >> A >> B >> V;

    cout << (V - B - 1) / (A - B) + 1;
}