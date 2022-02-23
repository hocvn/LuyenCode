#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define N 5005
#define M 100010
int a[N],w[M],n,m;
ll f[N];

void enter(){

    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for (int i = 1; i <= m; i++) scanf("%d",&w[i]);
}
void init(){

    w[m+1] = 1e9;
    for (int i = m; i > 0; i--){
        w[i] = min(w[i],w[i+1]);
    }
    for (int i = 1; i <= n; i++) f[i] = 1e9;
}
void DP(){

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            int tmp = a[j] - a[i] + 1;
            f[j] = min(f[j],f[i-1] + w[tmp]);
        }
    }
    printf("%lld",f[n]);
}
int main(){

    enter();
    init();
    DP();
    return 0;
}
