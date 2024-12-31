#include <bits/stdc++.h>

using namespace std;
struct P
{
    int x, y;
};
char dt[10086][10086];
P s, e;
int v[500][500];
int M, N;

void BFS()
{
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    queue<P> q;
    int jl[300][300] = {0};
    q.push(s);
    v[s.x][s.y] = 1;
    while (!q.empty())
    {
        P f = q.front();//f是当前的位置
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            P p;//移动一步的位置
            p.x = f.x + dx[i];
            p.y = f.y + dy[i];
            if (p.x >= 0 && p.x < N && p.y >= 0 && p.y < M && v[p.x][p.y] == 0 && dt[p.x][p.y] != '#')
            {
                q.push(p);
                v[p.x][p.y] = 1;
                jl[p.x][p.y] = jl[f.x][f.y] + 1;
                if(dt[p.x][p.y]=='x')
                {
                    jl[p.x][p.y]++;
                }
            }
        }
    }
    if (v[e.x][e.y] == 0)
    {
        cout << "No way!" << endl;
    }
    else
    {
        cout << jl[e.x][e.y] << endl;
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> dt[i][j];
            if (dt[i][j] == 'r')//出发
            {
                s.x = i;
                s.y = j;
            }
            if (dt[i][j] == 'a')//终点
            {
                e.x = i;
                e.y = j;
            }
        }
    }
    BFS();
    return 0;
}