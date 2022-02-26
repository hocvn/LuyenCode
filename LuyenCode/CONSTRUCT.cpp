#include <iostream>
#include <vector>
using namespace std;

#define N 1000010
#define ll long long
struct node{
    ll l,r,s,lazy;
    node() { l = r = s = lazy = 0; }
    node(ll x) { l = r = s = x; }
    void add(ll x){
        l += x, r += x, s += x, lazy += x;
    }
};
vector <node> st;
int test,n,m;
ll a[N];

template <typename T> inline void read(T &x){

    register int c = getchar();
    x = 0;
    while (!isdigit(c)) c = getchar();
    for ( ; isdigit(c); c = getchar()) x = (x<<1) + (x<<3) + c - '0';
}
void enter(){

    read(n); read(m);
    for (int i = 1; i <= n; i++) read(a[i]);
    st.resize(4*n);
}
node operator + (const node &P, const node &Q){

    node ret;
    ret.l = P.l;
    ret.r = Q.r;
    ret.s = P.s + Q.s - min(P.r,Q.l);
    return ret;
}
void build(int id = 1,int l = 1,int r = n){

    if (l == r) { st[id] = node(a[l]); return; }
    build(id*2,l,(l+r)/2);
    build(id*2+1,(l+r)/2+1,r);
    st[id] = st[id*2] + st[id*2+1];
}
void down(int id){

    if (!st[id].lazy) return;
    st[id*2].add(st[id].lazy);
    st[id*2+1].add(st[id].lazy);
    st[id].lazy = 0;
}
void update(int x,int y,int val,int id = 1,int l = 1,int r = n){

    if (l > y || r < x) return;
    if (x <= l && r <= y){
        st[id].add(val);
        return;
    }
    down(id);
    update(x,y,val,id*2,l,(l+r)/2);
    update(x,y,val,id*2+1,(l+r)/2+1,r);
    st[id] = st[id*2] + st[id*2+1];
}
node get(int x,int y,int id = 1,int l = 1,int r = n){

    if (x <= l && r <= y) return st[id];
    down(id);
    int mid = (l+r) / 2;
    if (mid < x) return get(x,y,id*2+1,mid+1,r);
    if (mid+1 > y) return get(x,y,id*2,l,mid);
    return get(x,y,id*2,l,mid) + get(x,y,id*2+1,mid+1,r);
}
void solve(){

    while (m--){
        int type,l,r,k;
        read(type); read(l); read(r);
        if (type == 1){
            read(k);
            update(l,r,k);
        }
        else cout << get(l,r).s << '\n';
    }
}
int main(){

    read(test);
    while (test--){
        enter();
        build();
        solve();
    }
}
