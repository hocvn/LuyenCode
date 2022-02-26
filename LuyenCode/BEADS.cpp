#include <iostream>
#include <algorithm>
using namespace std;

#define N 100010
int n,m,a[N],bit[N],bit2[N],pos[N];

void init(){

    pair <int,int> b[N];
    for (int i = 1; i <= n; i++) b[i] = {a[i],i};
    sort(b+1,b+n+1);
    for (int i = 1; i <= n; i++){
        if (i == 1 || b[i].first != b[i-1].first) m++;
        pos[b[i].second] = m;
    }
}
void update(int x,int val,int bit[]){

    for ( ; x <= m; x += x & -x) bit[x] = max(bit[x],val);
}
int get(int x,int bit[]){

    int ret = 0;
    for ( ; x > 0; x -= x & -x) ret = max(ret,bit[x]);
    return ret;
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    init();
    int ans = 0;
    for (int i = n; i > 0; i--){
        int x = get(pos[i]-1,bit), y = get(m-pos[i],bit2);
        ans = max(ans,x+y+1);
        update(pos[i],x+1,bit);
        update(m-pos[i]+1,y+1,bit2);
    }
    cout << ans;
    return 0;
}
