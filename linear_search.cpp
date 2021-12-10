 #include<iostream>
 using namespace std;

 int main(){
    int n,i;
    cin>>n;
    int a[100];
    for( i=0;i<n;i++){
    	cin>>a[i];
    }
    int key;
    cin>>key;
    for(i=0;i<n;i++){
    	if(a[i]==key){
    		cout<<i<<endl;
    		break;
       }
    	
    }
    if(i==n){
    	cout<<"-1"<<endl;
    }
    
    

   
 return 0;
 }
