#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int i;
    for(i=0; i<a.length(); i++){
        char tempa = a[i] < 'a' ? tolower(a[i]):a[i];
        char tempb = b[i] < 'a' ? tolower(b[i]):b[i];
        if(tempa<tempb){
            cout << "-1";
            break;
        }else if(tempa>tempb){
            cout << "1";
            break;
        }
    }
    if(i==a.length()){
        cout << "0";
    }
}