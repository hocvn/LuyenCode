#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

const int N = 1e5 + 3;
int a[N];
char s[N];

void solve(){

    int n = strlen(s), ans = 0;
    fill(a,a+n+2,0);
    stack <int> st;
    while (!st.empty()) st.pop();

    for (int i = 0; i < n; i++){
        if (s[i] == '(') st.push(i);
        else if (!st.empty()){
                a[i+1] = i - st.top() + 1 + a[st.top()];
                ans = max(ans, a[i+1]);
                st.pop();
            }
    }
    cout << ans << "\n";
}
int main(){

    int t;
    scanf("%d", &t);
    while (t--){
        scanf("%s", s);
        solve();
    }
    return 0;
}
