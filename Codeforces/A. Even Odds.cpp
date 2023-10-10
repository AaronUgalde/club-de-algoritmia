#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, k;
    cin >> n >> k;
    if(n%2==0){
        n /= 2;
    }else{
        n++;
        n /= 2;
    }
    if(k>n){
        cout << (k-n)*2;
    }else{
        cout << k*2-1;
    }
}