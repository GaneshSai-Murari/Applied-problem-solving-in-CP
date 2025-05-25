#include<iostream>

using namespace std;

void merge(int X[], int Y[], int left, int right) { 
    int mid = (left+right)/2, L = left, R = mid+1;   
    for(int i=left; i <= right; ++i) { 
        if(L <= mid && (R > right || X[L] <= X[R])) Y[i] = X[L++];    
        else Y[i] = X[R++];                                           
    }
}
void sort ( int in[], int out[],  int left, int right, int scratch[]) { 
    if (left==right){ 
        out[left] = in[left]; 
        return; 
    } 
    int mid = (left+right)/2; 
    sort(in,scratch,left,mid,out);     
    sort(in,scratch,mid+1,right,out); 
    merge(scratch,out,left,right); 
}

int fun(int arr[],int x,int n){
    int newarr[n];
    int temp[n];
    sort(arr,newarr,0,n-1,temp);
    int mid = x/2;
    int index=n;
    for(int i=0;i<n;i++){
        if(newarr[i]>mid) {
            index=i;
            break;
        }
    }
    int left=index-1,right=index,count=0;
    if(index==n){
        return n-n/2;
    }
    while(left>=0){
        if((newarr[left]+newarr[right]) > x){
            left--;
        }
        else{
            left--;
            right++;
            count++;

        }
    }
    left = index-count-1;
    if(left>0){
        count += (left+1)/2;
    }
    return n-count;


}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(auto &i: arr) cin>>i;
    cout<<fun(arr,x,n);

}