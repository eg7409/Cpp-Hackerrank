#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string s[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<s[i]<<endl;
        }
        else if(i>9 && i %2==0){
            cout<<"even"<<"\n";
        }
        else{
            cout<<"odd\n";
        }
    }
    return 0;
}
