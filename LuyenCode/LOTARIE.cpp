#include <iostream>
#include <cstring>
using namespace std;

#define N 1000010
char s[N];
int n,f[N];

int main(){

    scanf("%d%s",&n,s+1);
    if (s[1] == s[2]) f[2] = 1;
    for (int i = 3; i <= n; i++){
        f[i] = f[i-1];
        if (s[i-2] == s[i-1] && s[i-1] == s[i]){
            f[i] = f[i-2] + 1;
            continue;
        }
        if (s[i-1] == s[i]) f[i]++;
    }
    cout << f[n];
    return 0;
}
