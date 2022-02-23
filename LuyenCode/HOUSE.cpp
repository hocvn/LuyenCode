#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int n;
    char s[5000];
    scanf("%d",&n);
    scanf("%s",s + 1);
    int res = 0;
    s[0] = s[n+1] = '#';
    for (int i = 2; i <= n; i++){
        if (s[i] == s[i-1]){
            s[i] = '#';    
            res++;
        }
    }
    cout << res;
    return 0;
}
