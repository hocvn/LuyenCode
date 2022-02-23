#include <iostream>
using namespace std;

#define N 100010
#define ll long long
ll s[N],l[N],r[N];
int n,k;

void init(){

    for (int i = k; i <= n; i++){
        l[i] = max(l[i-1],s[i]-s[i-k]);
    }
    for (int i = n-k+1; i > 0; i--){
        r[i] = max(r[i+1],s[i+k-1]-s[i-1]);
    }
}
int main(){

    scanf("%d%d",&n,&k);
    for (int i = 1; i <= n; i++){
        scanf("%lld",&s[i]);
        s[i] += s[i-1];
    }
    init();
    ll res = 1e18;
    for (int i = 1; i <= n-k+1; i++){
        if (i < k){
            res = min(res,r[i+k]);
            continue;
        }
        if (i >= k && i+2*k-1 <= n){
            res = min(res,max(l[i-1],r[i+k]));
            continue;
        }
        if (i+2*k-1 > n){
            res = min(res,l[i-1]);
        }
    }
    printf("%lld",res);
    return 0;
}
