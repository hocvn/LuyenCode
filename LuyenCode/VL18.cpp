#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[2000];
    cin >> s;
    int l = 0,r = strlen(s)-1;
    while (s[l] < '0' || s[l] > '9') l++;
    while (s[r] <= '0' || s[r] > '9') r--;
    for (int i = r; i >= l; i--)
        cout << s[i];
    return 0;
}
