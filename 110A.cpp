#include <bits/stdc++.h>
using namespace std;
int main(){
    int long long n;
    cin>>n;
    int remember, count = 0;
    while(n != 0){
        remember = n%10;
        n = n/10;
        if( remember == 7 || remember == 4){
            count++;
        }if(count != 4 && count != 7){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  int check = 0;
  int rem;
  while(n != 0){
    rem = n%10;
    n /= 10;
    if(rem == 7 || rem == 4){
      check++;
    }

  }
  if(check != 4 && check != 7){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  return 0;
}