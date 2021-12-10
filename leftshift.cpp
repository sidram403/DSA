 #include<iostream>
 using namespace std;


 void leftArray(int arr[], int k, int n){
 	for(int i=k;i<k+n;i++){
 		cout<<arr[i%n]<<endl;
 	}
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
 	leftArray(arr, k, n);


 return 0;
 }