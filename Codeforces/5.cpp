#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int ans = m*(n/2)+(n%2==0?0:m/2);
    cout << ans;
}