#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    
    set<long long> s;
    int x,v;
    
    for(int i=0;i<n;i++){
        cin>>x>>v;
        if(x==1){
            s.insert(v);
        }
        else if(x==2){
            s.erase(v);
        }
        else{
            auto it = s.find(v);
            if(it == s.end()){
                cout<<"No"<<endl;
            }   
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}



