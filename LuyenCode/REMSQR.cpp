#include <iostream>
using namespace std;

int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
char a[103][103];
bool tick[103][103];
int n,m;

bool check(int u,int v){

    return u > 0 && u <= n && v > 0 && v <= m && a[u][v] == '#';
}
void dfs(int x,int y){

    tick[x][y] = true;
    for (int i = 0; i < 4; i++){
        int u = x + dx[i];
        int v = y + dy[i];
        if (check(u,v) && !tick[u][v]) dfs(u,v);
    }
}
int main(){

    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
        scanf("%s", a[i]+1);
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (!tick[i][j] && a[i][j] != '.'){
                dfs(i,j);
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
