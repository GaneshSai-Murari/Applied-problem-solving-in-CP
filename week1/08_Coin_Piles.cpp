#include<iostream>
using namespace std;
bool coin_pile(long int left, long int right){
    long int temp;
    if(left>right){
        swap(left,right);
    }
    if((left==0 && right==0) || 2*left == right ) {
        return true;
    }
    if((left==0 && right!=0) || 2*left < right ) return false;
    int i = right-left;
    left -= i;
    right -= 2*i;
    return coin_pile(left-1,right-2);
}
int main(){
    long int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        long int l,r;
        cin>>l>>r;
        arr[i] = coin_pile(l,r) ;
    }
    for(auto i : arr){
        if(i){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
    
}