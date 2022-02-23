#include <iostream>
using namespace std;

#define N 50000
int n,q,s[N+1];
bool pr[N+1];

void eratos(){

    pr[1] = true;
    for (int i = 2; i*i <= N; i++){
        if (pr[i]) continue;
        for (int j = i*i; j <= N; j += i){
            pr[j] = true;
        }
    }
}
void enter(){

    scanf("%d",&n);
    for (int i = 1,x; i <= n; i++){
        scanf("%d",&x);
        s[i] = s[i-1];
        if (pr[i] || (!pr[i] && x < 0)) s[i] += x;
    }
}
void solve(){

    scanf("%d",&q);
    while (q--){
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",s[r]-s[l-1]);
    }
}
int main(){

    eratos();
    enter();
    solve();
    return 0;
}
