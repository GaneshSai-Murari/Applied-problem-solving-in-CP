#include<iostream>
using namespace std;
long long int modify(int arr[],int n){
    long long int sum=0;
    for(int i=0;i<n-1;i++){
     
        /* code */
        if(arr[i+1]<arr[i]){
            
            sum += arr[i]-arr[i+1];
            arr[i+1]=arr[i];
            
            
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &i : arr) cin>>i;
    cout<<modify(arr,n);
}