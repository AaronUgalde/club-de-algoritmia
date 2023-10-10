#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numP = 0;
    for(int i=0; i<n; i++){
        int contador = 0;
        int seguro = 0;
        for(int j=0; j<3; j++){
            cin >> seguro;
            if(seguro) contador++;
        }
        if(contador >= 2) numP++;
    }
    cout << numP;
}
