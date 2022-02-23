#include <iostream>
#define ll long long
using namespace std;

const int N = 1e5 + 3;
ll st[N*4], lazy[N*4], x;
int n,q;

void down(int id){

    lazy[id*2] += lazy[id];
    lazy[id*2+1] += lazy[id];

    st[id*2] += lazy[id];
    st[id*2+1] += lazy[id];

    lazy[id] = 0;
}

void update(int id,int l,int r,int x,int y,ll val){

    if (x > r || y < l) return;
    if (x <= l && r <= y){
        lazy[id] += val;
        st[id] += val;
        return;
    }
    down(id);

    int m = (l + r) >> 1;
    update(id*2,l,m,x,y,val);
    update(id*2+1,m+1,r,x,y,val);

    st[id] = max(st[id*2], st[id*2+1]);
}

ll get(int id,int l,int r,int x,int y){

    if (l > y || r < x) return -1e9;
    if (x <= l && r <= y) return st[id];
    down(id);
    int m = (l + r) >> 1;
    return max(get(id*2,l,m,x,y), get(id*2+1,m+1,r,x,y));
}

int main(){

    scanf("%d%d",&n,&q);
    int l,r,k;
    while (q--){
        scanf("%d",&k);
        if (k == 0){
            scanf("%d%d%lld",&l,&r,&x);
            update(1,1,n,l,r,x);
        }
        else{
            scanf("%d%d",&l,&r);
            cout << get(1,1,n,l,r) << "\n";
        }
    }
    return 0;
}
