#include <iostream>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int a[55][55];
int n,num;

void dequy(int x,int y,int k){

    a[x][y] = ++num;
    int u = x + dx[k];
    int v = y + dy[k];
    if (num == n*n) return;
    if (a[u][v] == 0) dequy(u,v,k);
        else{
            k = (k+1) % 4;
            u = x + dx[k];
            v = y + dy[k];
            dequy(u,v,k);
        }
}
int main(){

    cin >> n;
    a[1][n+1] = a[n+1][n] = a[n][0] = -1;
    dequy(1,1,0);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
