#include <iostream>
#include <vector>
using namespace std;

#define N 1000001
int n,tmp[30],last[N],p[N],sz,m;
vector <pair <int,int>> a;
vector <int> pos[26];
char s[N];

void read_int(int &x){

    register int c = getchar();
    x = 0;
    while (!isdigit(c)) c = getchar();
    for ( ; isdigit(c); c = getchar()) x = (x<<1) + (x<<3) + c - '0';
}
void read_char(char &c){

    c = getchar();
    while (c < 'a' || c > 'z') c = getchar();
}
void init(){

    while (n--){
        int type; read_int(type);
        if (type == 2){
            char x,y;
            read_char(x); read_char(y);
            a.push_back({x-'a'+1,y-'a'+1});
            p[m++] = sz;
        }
        else read_char(s[++sz]);
    }
    for (int i = m-1; i >= 0; i--){
        if (tmp[a[i].second]){
            last[i] = tmp[a[i].second];
            tmp[a[i].first] = tmp[a[i].second];
        }
        else last[i] = tmp[a[i].first] = a[i].second;
    }
}
void solve(){

    for (int i = 1, j = 0; i <= sz; i++){
        pos[s[i]-'a'].push_back(i);
        while (j < m && p[j] < i) j++;
        while (j < m && p[j] == i){
            for (int k : pos[a[j].first-1]) s[k] = last[j] + 'a' - 1;
            pos[a[j].first-1].clear();
            j++;
        }
    }
    for (int i = 1; i <= sz; i++) putchar(s[i]);
}
int main(){

    read_int(n);
    init();
    solve();
    return 0;
}
