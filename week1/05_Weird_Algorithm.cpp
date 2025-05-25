#include<iostream>
using namespace std;
void algo(long int x){
    cout<<x<<" ";
    if(x==1){
        return;
    }
    else if(x%2==0){
        algo(x/2);
    }
    else{
        algo(3*x+1);
    }
}
int main(){
    long int n;
    cin>>n;
    algo(n);
}