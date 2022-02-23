#include <iostream>
#include <stack>
using namespace std;

int n,m;

int main(){

    cin >> n;
    int x;
    stack <int> st;
    for (int i = 1; i <= n; i++){
        cin >> m;
        if (m == 1){
            cin >> x;
            st.push(x);
        }
        else if (m == 2){
            if (!st.empty()) st.pop();
        }
        else{
            if (st.empty()) cout << "Empty!\n";
                else cout << st.top() << "\n";
        }
    }
    return 0;
}
