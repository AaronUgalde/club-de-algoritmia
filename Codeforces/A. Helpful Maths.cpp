#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b; cin >> a;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int sum = 0;
    for(int i=0; i<a.length(); i+=2){
        if(a[i]=='1'){
            ones++;
        }else if(a[i]=='2'){
            twos++;
        }else{
            threes++;
        }
    }
    sum = ones + twos + threes;
    for(int i=0; i<sum*2-1; i++){
        if(i%2==0){
            if(ones){
                ones--;
                b+="1";
            }else if(twos){
                twos--;
                b+="2";
            }else if(threes){
                threes--;
                b+="3";
            }
        }else{
            b+="+";
        }
    }
    cout << b;
}