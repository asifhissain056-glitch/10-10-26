#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,s1=0,s2=0;
cin >> a >>b;

    for(int i=1;i<a;i++){
        if(a%i==0){
            s1+=i;
            }
        }

    for(int i=1;i<b;i++){
        if(b%i==0){
            s2+=i;
            }
        }

    if(s1==b && s2==a){
    cout << ("Those number are Amicable pair"); 
    }

    else
      cout << ("Those number are not Amicable pair"); 

    return 0;
}

