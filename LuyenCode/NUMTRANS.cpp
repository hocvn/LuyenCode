#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string s[110];
int n;

bool cmp(string a,string b){

    bool k = true;
    if (a.length() > b.length()) { swap(a,b); k = false; }
    while (a.length() < b.length()) a += a;

    for (int i = 0; i < a.length(); i++){
        if (a[i] > b[i]) return k;
        if (a[i] < b[i]) return !k;
    }
    return 1;
}
int main(){

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s,s+n,cmp);
    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}
