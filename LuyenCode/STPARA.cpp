#include <iostream>
#include <stack>
using namespace std;

int n,a[200005];

int main(){

    stack <int> st;
    bool k;
    while (true){
        cin >> n;
        k = true;
        if (n == 0) break;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int cnt = 1;
        for (int i = 1; i <= n; i++){
            while (!st.empty() && cnt == st.top()){
                st.pop();
                cnt++;
            }
            if (a[i] != cnt){
                st.push(a[i]);
            }
            else cnt++;
        }
        while (!st.empty()){
            if (st.top() == cnt) cnt++;
            	else k = false;
            st.pop();
        }
        if (k) cout << "yes\n";
                else cout << "no\n";
    }
    return 0;
}
