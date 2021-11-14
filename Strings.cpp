#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    cout<<s2[0];
    for(int i=1;i<s1.length();i++){
        cout<<s1[i];
    }
    
    cout<<" "<<s1[0];
    for(int i=1;i<s2.length();i++){
        cout<<s2[i];
    }
    return 0;
}
