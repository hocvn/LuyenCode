#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

const int N = 1e5 + 3;
const int base = 31;
const ll mod = 1e9 + 3;

int na,nb;
char a[N],b[N];
ll ha[N],hb[N],mu[N];

void Hash(){

    na = strlen(a+1);
    nb = strlen(b+1);
    for (int i = 1; i <= na; i++)
        ha[i] = (ha[i-1]*base + a[i] - 'a' + 1) % mod;
    for (int i = 1; i <= nb; i++)
        hb[i] = (hb[i-1]*base + b[i] - 'a' + 1) % mod;
    mu[0] = 1;
    for (int i = 1; i <= max(na,nb); i++)
        mu[i] = (mu[i-1]*base) % mod;
}
ll get(int i,int j){

    return (ha[j]-ha[i-1]*mu[j-i+1] + mod*mod) % mod;
}
int main(){

    scanf("%s", a+1);
    scanf("%s", b+1);
    Hash();
    int vt = na+1;
    for (int i = na; i > 0; i--){
        if (na-i+1 > nb) break;
        ll t = get(i,na);
        if (t == hb[na-i+1]) vt = i;
    }
    for (int i = 1; i < vt; i++) cout << a[i];
    for (int i = 1; i <= nb; i++) cout << b[i];
    return 0;
}
