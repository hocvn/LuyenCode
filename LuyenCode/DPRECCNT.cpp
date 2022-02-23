#include <iostream>
using namespace std;

#define N 1010
char s[N][N];
int g[N][N],n,m;

int main(){

    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++){
        scanf("%s",s[i]+1);
    }
    long long cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (s[i][j] == '1') continue;
            g[i][j] = min(g[i-1][j],min(g[i][j-1],g[i-1][j-1])) + 1;
            cnt += g[i][j];
        }
    }
    cout << cnt;
    return 0;
}
