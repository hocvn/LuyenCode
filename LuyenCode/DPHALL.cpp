#include <iostream>
#include <algorithm>
using namespace std;

#define N 10010
pair <int,int> a[N];
int n,m,bit[N*3];

void update(int p,int val){

    for (int i = p; i <= m; i += i & -i){
        bit[i] = max(bit[i],val);
    }
}
int get(int p){

    int ret = 0;
    for (int i = p; i > 0; i -= i & -i){
        ret = max(ret,bit[i]);
    }
    return ret;
}
int main(){

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i].first >> a[i].second;
        m = max(m,a[i].second);
    }
    sort(a+1,a+n+1);
    for (int i = 1; i <= n; i++){
        int t = get(a[i].first) + (a[i].second-a[i].first);
        update(a[i].second,t);
    }
    int res = 0;
    for (int i = 1; i <= m; i++) res = max(res,bit[i]);
    cout << res;
    return 0;
}
