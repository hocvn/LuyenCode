#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

long long a1,a2,b1,b2,c1,c2;
long long D,Dx,Dy,u,v;

int main(){

    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1*b2 - a2*b1;
    Dx = c1*b2 - c2*b1;
    Dy = a1*c2 - a2*c1;

    if ((a1 == 0 && b1 == 0 && c1 != 0) || (a2 == 0 && b2 == 0 && c2 != 0)){
        cout << "VONGHIEM" << "\n";
        return 0;
    }
    if (D == 0 && (Dx != 0 || Dy != 0)) cout << "VONGHIEM";
        else if (D == 0 && D == Dx && D == Dy) cout << "VOSONGHIEM";
            else{
                cout << fixed << setprecision(2);
                if (Dx == 0) cout << 0.00 << " ";
                    else cout << (double)Dx / D << " ";
                if (Dy == 0) cout << 0.00;
                    else cout << (double)Dy / D;
            }
    return 0;
}
