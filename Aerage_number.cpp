 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
    	sum+=a[i];
    }

    float avr= float(sum)/n;

    cout<<avr<<endl;

 
 }