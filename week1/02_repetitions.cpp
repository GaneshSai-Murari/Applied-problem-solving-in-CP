#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0;
    int n = s.length();
    for(int i=0;i<n-1;i++){
        int x=0;
        for(int j=i;j<n;j++){
            if(s[i]==s[j]) x++;
            else break;
        }
        if(x>y) y = x;

    }
    cout<<y;
}