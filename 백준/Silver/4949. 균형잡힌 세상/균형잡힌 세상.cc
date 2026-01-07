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

    vector<char> arr;
    string str;
    string isOkay{ "yes" };

    while (getline(cin, str))
    {
        if (str[0] == '.')
        {
            return 0;
        }

        isOkay = "yes";
        arr.clear();

        for (int i{}; i < str.size(); ++i)
        {
            if (str[i] == '.') break;

            if (str[i] == '(' || str[i] == '[')
            {
                arr.push_back(str[i]);
            }
            else if (str[i] == ')')
            {
                if (arr.empty())
                {
                    isOkay = "no";
                    break;
                }
                else if (arr.back() == '(')
                {
                    arr.pop_back();
                }
                else
                {
                    isOkay = "no";
                    break;
                }
            }
            else if (str[i] == ']')
            {
                if (arr.empty())
                {
                    isOkay = "no";
                    break;
                }
                if (arr.back() == '[')
                {
                    arr.pop_back();
                }
                else
                {
                    isOkay = "no";
                    break;
                }
            }
        }

        if (!arr.empty())
        {
            cout << "no\n";
        }
        else
            cout << isOkay << '\n';
    }
}