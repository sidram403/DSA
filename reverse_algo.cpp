 #include<iostream>
 using namespace std;

 void reverse(int arr[], int start, int end){
 	while(start<end){
 		int temp=arr[start];
 		arr[start]=arr[end];
 		arr[end]=temp;
 		start++;
 		end--;
 	}
 }

 void leftArray(int arr[], int k, int n){
 	if(k==0){
 		return;
 	}
 	k=k%n;
 	reverse(arr,0,k-1);
 	reverse(arr,k,n-1);
 	reverse(arr,0,n-1);
 }

 int main(){
 	int n;
 	cin>>n;
 	int arr[10];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];

 	}
 	int k;
 	cin>>k;
 	leftArray(arr,k,n);
 	for(int i=0;i<n;i++){
 		cout<<arr[i]<<endl;
 	}


 return 0;
 }