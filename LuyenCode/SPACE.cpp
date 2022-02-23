#include <iostream>
#include <cstring>
using namespace std;

string s;
int n,t;

void solve(){

    s[n] = 'a';
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == ' ' && s[i+1] != ' ') cnt++;
    }
    cout << cnt << "\n";
}
int main(){

    scanf("%d\n",&t);
    while (t--){
        getline(cin, s);
        n = s.length();
        solve();
    }
    return 0;
}
