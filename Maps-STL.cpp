#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    
    map<string,int> m;
     int x,v;
     string s;
     
     for(int i=0;i<n;i++){
         cin>>x;
         
         if(x==1){
             cin>>s>>v;
             m[s] += v;   
         }
         else if(x==2){
             cin>>s;
             m[s] = 0;
         }
         else{
             cin>>s;
             cout<<m[s]<<endl;
         }
     }
    return 0;
}
