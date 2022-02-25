#include <iostream>
using namespace std;

int test,n;
string st;

void solve(){

    n = st.size();
    if (n & 1) { cout << "NO\n"; return; }
    int s = 0, d = 0;
    for (int i = 0; i < n; i++){
        if (st[i] == '*') d++;
        else (st[i] == '(') ? s++ : s--;
    }
    if (abs(s) > d) { cout << "NO\n"; return; }
    int open = (d-abs(s))/2 + max(-s,0);
    s = 0;
    for (int i = 0; i < n; i++){
        if (st[i] == '*'){
            if (open) s++, open--;
                else s--;
        }
        else (st[i] == '(') ? s++ : s--;
        if (s < 0) { cout << "NO\n"; return; }
    }
    cout << "YES\n";
}
int main(){

    cin >> test;
    cin.ignore();
    while (test--){
        getline(cin,st);
        solve();
    }
    return 0;
}
