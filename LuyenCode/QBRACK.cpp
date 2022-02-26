#include <iostream>
#include <vector>
using namespace std;

#define N 100005
struct node{
    int Sum,Min;
    node(){}
    node(char ch){
        if (ch == '(') Sum = 1, Min = 0;
            else Sum = Min = -1;
    }
};
struct Query{
    int x,y,i;
};
int prefix[N],q,n;
node st[4*N], inf;
char s[N];

void enter(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> q >> (s+1);
    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + (s[i-1] == '(' ? 1 : -1);
    }
    inf.Min = 1e9; inf.Sum = 0;
}
node operator + (const node &P,const node &Q){

    node ret;
    ret.Sum = P.Sum + Q.Sum;
    ret.Min = min(P.Min,P.Sum + Q.Min);
    return ret;
}
void build(int id = 1,int l = 1,int r = n){

    if (l == r){ st[id] = node(s[l]); return; }
    int m = (l+r) >> 1;
    build(id*2,l,m);
    build(id*2+1,m+1,r);
    st[id] = st[id*2] + st[id*2+1];
}
void update(int id,int l,int r,int p){

    if (l > p || r < p) return;
    if (l == r){
        s[l] = (s[l] == ')') ? '(' : ')';
        st[id] = node(s[l]);
        return;
    }
    int m = (l+r) >> 1;
    update(id*2,l,m,p);
    update(id*2+1,m+1,r,p);
    st[id] = st[id*2] + st[id*2+1];
}
node get(int id,int l,int r,int x,int y){

    if (l > y || r < x) return inf;
    if (x <= l && r <= y) return st[id];
    int m = (l+r) >> 1;
    return get(id*2,l,m,x,y) + get(id*2+1,m+1,r,x,y);
}
void solve(){

    int type,i,j;
    while (q--){
        cin >> type;
        if (!type){
            cin >> i;
            update(1,1,n,i);
        }
        else{
            cin >> i >> j;
            node ans = get(1,1,n,i,j);
            if (ans.Sum == 0 && ans.Min == 0) putchar('1');
                else putchar('0');
        }
    }
}
int main(){

    enter();
    build(1,1,n);
    solve();
}
