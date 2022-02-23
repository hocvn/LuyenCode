#include <iostream>
using namespace std;

#define N 2002
int w[N],h[N],n,L;
long long f[N];

void enter(){

    scanf("%d%d",&n,&L);
    for (int i = 1; i <= n; i++){
        scanf("%d%d",&h[i],&w[i]);
        w[i] += w[i-1];
        f[i] = 1e18;
    }
}
void solve(){

    for (int i = 1; i <= n; i++){
        int maxh = 0;
        for (int j = i; j > 0; j--){
            if (w[i] - w[j-1] > L) break;
            maxh = max(maxh,h[j]);
            f[i] = min(f[i],f[j-1] + maxh);
        }
    }
    printf("%lld",f[n]);
}
int main(){

    enter();
    solve();
}
