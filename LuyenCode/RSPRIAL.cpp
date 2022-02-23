#include <iostream>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int a[1005][1005];
int n,m,num;

void dequy(int x,int y,int k){

    cout << a[x][y] << " ";
    a[x][y] = -1;
    num++;
    int u = x + dx[k];
    int v = y + dy[k];
    if (num == n*m) return;
    if (a[u][v] != -1) dequy(u,v,k);
        else{
            k = (k+1) % 4;
            u = x + dx[k];
            v = y + dy[k];
            dequy(u,v,k);
        }
}
int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
            scanf("%d",&a[i][j]);
    }
    a[1][n+1] = a[n+1][n] = a[n][0] = -1;
    dequy(1,1,0);
    return 0;
}
