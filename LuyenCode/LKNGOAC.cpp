#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

char s[100001];
int n, luu[100001];

int main(){

    scanf("%s", s + 1);
    n = strlen(s+1);
    stack <int> st;

    for (int i = 1; i <= n; i++){
        if (s[i] == '(') st.push(i);
        else{
            luu[i] = st.top();
            st.pop();
        }
    }
    for (int i = 1; i <= n; i++)
        if (luu[i]) cout << luu[i] << " " << i << "\n";
    return 0;
}
