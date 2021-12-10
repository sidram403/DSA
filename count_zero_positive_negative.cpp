 #include<iostream>
 using namespace std;

 int main(){
   int n;
   cin>>n;
   int a[50];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   int zCount=0, pCount=0, nCount=0;
   for(int i=0;i<n;i++){
   	if(a[i]<0){
   		nCount++;
   	}else if(a[i]>0){
   		pCount++;
   	}
   	else{
   		zCount++;
   	}
   }

   cout<<zCount<<endl;
   cout<<pCount<<endl;
   cout<<nCount<<endl;

 
 }