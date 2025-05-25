#include<iostream>
using namespace std;
int count(int arr[],int x,int n){
    if(x==0) return 1;
    if(x<0) return 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += count(arr,x-arr[i],n);
    }
    return sum;
}
int main(){
    int x,n;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<count(arr,x,n);


}