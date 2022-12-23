#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	char str[50];
	int v=0,c=0;
	gets(str);
    for(int i=0;i<str[i]!='\0';i++){
    		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            ++v;
			else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
			++c;
					}
	cout<<"vowels = "<<v<<endl<<"consonents = "<<c;
}
