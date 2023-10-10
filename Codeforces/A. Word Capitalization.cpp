#include <bits/stdc++.h>

using namespace std;

int main(){
    string a; cin >> a;
    int ones=0, zeros=0;
    char c = a[0];
    int ans = 1;
    for(int i=1; i<a.length(); i++){
        if(c==a[i]){
            ans++;
        }else{
            ans = 1;
        }
        c = a[i];
        if(ans==7){
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}