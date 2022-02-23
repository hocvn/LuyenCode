#include <iostream>
#include <cstring>
using namespace std;

const int N = 1e6 + 3;
char s[N];
int a[N], Z[N], n, m;

void get_string(){

    int i = 0;
    char c = getchar();
    while ((int)c != 10){
        s[i++] = c;
        c = getchar();
    }
}
void fastscan(int &x) {
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if (c == '-') {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar()) x = (x << 1) + (x << 3) + c - 48;
    if (neg) x *= -1;
}
int main() {

    get_string();
    fastscan(m);
    for (int i = 0; i < m; i++) fastscan(a[i]);
    n = strlen(s);
     for (int i = 0; i < n/2; i++){
        swap(s[i],s[n-i-1]);
    }

    int L = 0, R = 0;
    Z[0] = n;
    for (int i = 1; i < n; i++)
        if (i > R) {
            L = R = i;
            while (R < n && s[R] == s[R - L]) R++;
            Z[i] = R - L;
            R--;
        } else {
            int k = i - L;
            if (Z[k] < R - i + 1)
                Z[i] = Z[k];
            else {
                L = i;
                while (R < n && s[R] == s[R - L]) R++;
                Z[i] = R - L;
                R--;
            }
        }
    for (int i = 0; i < m; i++) cout << Z[n - a[i]] << " ";
    return 0;
}
