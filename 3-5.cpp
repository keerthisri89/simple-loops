#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=0;i<=n+2;i++){
		if(i%2==1){
			sum=sum +i;
		}
	
	}
		cout<<sum;
	
}
