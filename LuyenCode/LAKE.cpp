#include <iostream>
using namespace std;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
bool a[502][502];
int n,m,cnt;

void loang(int x,int y){

    a[x][y] = false;
    cnt++;
    for (int i = 0; i < 4; i++){
        int u = x + dx[i];
        int v = y + dy[i];
        if (a[u][v]) loang(u,v);
    }
}
int main(){

    int k,x,y;
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 1; i <= k; i++){
       scanf("%d%d",&x,&y);
       a[x][y] = true;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j]){
                loang(i,j);
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
    }
    cout << ans;
    return 0;
}
