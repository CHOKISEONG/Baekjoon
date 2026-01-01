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

    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    vector<int> sum;

    for (int i{}; i < n; ++i)
    {
        cin >> board[i];
    }

    for (int i{}; i < n - 7; ++i)
    {
        for (int j{}; j < m - 7; ++j)
        {
            int boardNum{};

            if (board[i][j] == 'W')
            {
                bool cnt = true;
                for (int l{ i }; l < i + 8; ++l)
                {
                    for (int r{ j }; r < j + 8; r += 2)
                    {
                        if (cnt)
                        {
                            if (board[l][r] == 'B')
                            {
                                boardNum += 1;
                            }

                            if (board[l][r + 1] == 'W')
                            {
                                boardNum += 1;
                            }
                        }
                        else
                        {
                            if (board[l][r] == 'W')
                            {
                                boardNum += 1;
                            }

                            if (board[l][r + 1] == 'B')
                            {
                                boardNum += 1;
                            }
                        }
                    }

                    cnt = !cnt;
                }
            }
            else if (board[i][j] == 'B')
            {
                bool cnt = true;
                for (int l{ i }; l < i + 8; ++l)
                {
                    for (int r{ j }; r < j + 8; r += 2)
                    {
                        if (cnt)
                        {
                            if (board[l][r] == 'W')
                            {
                                boardNum += 1;
                            }

                            if (board[l][r + 1] == 'B')
                            {
                                boardNum += 1;
                            }
                        }
                        else
                        {
                            if (board[l][r] == 'B')
                            {
                                boardNum += 1;
                            }

                            if (board[l][r + 1] == 'W')
                            {
                                boardNum += 1;
                            }
                        }
                    }
                    cnt = !cnt;
                }
            }

            sum.push_back(min(boardNum, 64 - boardNum));
        }
    }

    sort(sum.begin(), sum.end());

    cout << sum[0];
}