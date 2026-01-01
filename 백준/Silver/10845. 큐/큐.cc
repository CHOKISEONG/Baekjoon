#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    string str;
    queue<int> q;

    while (num--)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> str;
            q.push(stoi(str));
        }
        else if (str == "pop")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (str == "size")
        {
            cout << q.size() << endl;
        }
        else if (str == "empty")
        {
            if (q.empty())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (str == "front")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.front() << endl;
            }
        }
        else if (str == "back")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.back() << endl;
            }
        }
    }
}