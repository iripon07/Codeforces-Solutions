#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0, rem;
    while(n != 0){
        rem = n%10;
        n = n/10;
        if(rem == 4 || rem == 7){
            count++;
        }
    }
    if(count != 4 && count != 7){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    return 0;
}