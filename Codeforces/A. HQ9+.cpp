#include <bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin >> p;
    string a="HQ9";
    for(char c: p){
        if(count(a.begin(),a.end(),c)!=0){
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}