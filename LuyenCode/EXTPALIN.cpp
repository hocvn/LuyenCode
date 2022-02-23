#include <iostream>
#include <cstring>
#define ll long long
#define base 13
using namespace std;

const ll mod = 1000000003;
const int N = 5e5 + 3;

ll h[N],p[N],pw[N];
char s[N];
int n;

ll get(int i, int j){

    return (h[j] - h[i-1] * pw[j-i+1] + mod*mod) % mod;
}
void get_string(){

    int i = 0;
    char c = getchar();
    while ((int)c != 10){
        s[++i] = c;
        c = getchar();
    }
}
int main(){

    get_string();
    n = strlen(s+1);
    pw[0] = 1;
    for (int i = 1; i <= n; i++){
        pw[i] = (pw[i-1] * base) % mod;
        cout << s[i];
    }
    for (int i = 1; i <= n; i++){
        h[i] = (h[i-1]*base + (s[i] - '0' + 1)) % mod;
        p[n-i+1] = (p[n-i+2]*base + (s[n-i+1] - '0' + 1)) % mod;
    }

    int pos = n-1;
    for (int i = n/2+1; i <= n; i++){
        int t = n - i + 1;
        if (get(i-t,i-1) == p[i]){
            pos = i-t-1;
            break;
        }
        if (get(i-t+1,i) == p[i]){
            pos = i-t;
            break;
        }
    }
    for (int i = pos; i > 0; i--) cout << s[i];
    return 0;
}
