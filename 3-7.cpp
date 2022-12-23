#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x;
	float g;
	cin>>x;
	g=x/2;
	while(abs(g*g-x)>=pow(10,-12)){
		g=(g+(int(x)/g))/2;
		//abs(g*g-x)>=pow(10,-12);
		}
	cout<<g;
}
