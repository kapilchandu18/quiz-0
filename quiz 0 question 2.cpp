void reverseArray(vector<int> &arr,int n){
int k=arr.size();
for(int i=n+1;I<(k+n+1)/2;i++){
int temp=arr[i];
arr[i]=arr[k-i+n];
arr[k-i+n]=temp;
}    
}