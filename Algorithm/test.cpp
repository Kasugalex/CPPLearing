#include <iostream>

using namespace std;

int tmax = 100;

int num = 0;

int t_array[20][20] = {0}; //存输入的数据
int vis[20][20] = {0};     //记录某个位置是否访问过
int m, n;

int sum; //数据的总和的一般

int tsum = 0; //计算到当前位置的总和

int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; //上右下左的位移量

void dfs(int tx, int ty)
{
    if (tx < 1 || tx > n || ty < 1 || ty > m)
    { 
        //边界判断
        return;
    }
    num++;
    tsum += t_array[tx][ty];
    vis[tx][ty] = 1;
    if (tsum >= sum)
    {
        if (tsum == sum)
        { 
            //找到一半值的位置
            if (num < tmax)
            { 
                //更新最小块数
                tmax = num;
            }
        }
        num--;
        tsum -= t_array[tx][ty];
        vis[tx][ty] = 0;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        tx += dir[i][0];
        ty += dir[i][1];
        if (vis[tx][ty] == 1)
        {
            tx -= dir[i][0];
            ty -= dir[i][1];
            continue;
        }
        dfs(tx, ty);
        tx -= dir[i][0];
        ty -= dir[i][1];
    }
    //以下3行很重要，恢复到原来的状态
    num--;
    vis[tx][ty] = 0;
    tsum -= t_array[tx][ty];
}

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int t;
            cin >> t;
            t_array[i][j] = t;
            sum += t;
        }
    }
    sum = sum / 2;
    int t = tmax;
    dfs(1, 1);
    cout << ((t == tmax) ? 0 : tmax); //通过判断tmax值是否发生了变化，来确定是否可以分割
    system("pause");
    return 0;
}