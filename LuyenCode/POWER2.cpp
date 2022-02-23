#include <bits/stdc++.h>
#include <cstring>
using namespace std;

string operator * (string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--){
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
        }
        tmp+=carry;
        carry=tmp/10;
        res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
string power(string a,int n){

    if (n == 0) return "1";
    string tmp = power(a,n / 2);
    tmp = tmp * tmp;
    if (n & 1) tmp = tmp * a;
    return tmp;
}
int main(){

    ios::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    string a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}
