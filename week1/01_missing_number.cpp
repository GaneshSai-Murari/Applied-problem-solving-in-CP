#include<iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum += x;
    }
    int a = n*(n+1)/2 - sum ;
    cout<<a;

}
