#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r=0;
    cin>>n;
   for( int i=0; i<n; i++){
    cin>>m;
    r |= m;
   }
    if(r==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}