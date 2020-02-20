#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int ans;
bool vis[10];
int flag[3][4];
int map[3][4];
bool check(int x, int y) //对某一个格子判断
{
    int i, j;
    for (i = -1; i <= 1; ++i)
    {
        for (j = -1; j <= 1; ++j)
        {
            //	if(i == 0 && j == 0) continue;
            int nx = x + i;
            int ny = y + j;
            if (!flag[nx][ny])
                continue;
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 4)
            {
                if (abs(map[x][y] - map[nx][ny]) == 1)
                    return false;
            }
        }
    }
    return true;
}

void dfs(int x, int y)
{
    if (x == 2 && y == 3)
    { //到达最后一个格子的下一个位置  判断所有的格子是否都满足条件
        int f = 1;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (flag[i][j] && !check(i, j))
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f)
        {
            ++ans;
        }
        return;
    }
    if (flag[x][y])
    {
        for (int i = 0; i < 10; ++i)
        {
            if (!vis[i])
            {
                map[x][y] = i;
                vis[i] = true;
                if (y < 3)
                {
                    dfs(x, y + 1); //如果此行还有格子
                }
                else
                {
                    dfs(x + 1, 0); //从下一行第一个开始判断 （这里因为除了第一行外下一行第一个一定有效）
                }
                vis[i] = false;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            flag[i][j] = 1;
            map[i][j] = 0;
        }
    }
    flag[0][0] = flag[2][3] = 0; //标记无效格子
    dfs(0, 1);
    cout << ans <<endl;
    system("pause");
    return 0;
}