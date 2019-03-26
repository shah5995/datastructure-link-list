#include<iostream>
using namespace std;
#include<cmath>
char ascii[30] = "$abcdefghijklmnopqrstuvwxyz";
void codestring(int n,char output[1000],int j)
{
if(n==0)
{
	output[j]='\0';
	cout<<output<<endl;
	return;
}

output[j]=ascii[(n%10)];
cout<<j<<endl;
codestring(n/10,output,j+1);cout<<j<<endl;
int n2=0;
while(n>0)
{
	n2=n2*10+n%10;
	n=n/10;
}
cout<<n2;
if((n2%100)>9 && (n2%100)<27)
{
	output[j-2]=ascii[n2/100];
	codestring(n/100,output,j+1);
	
}

	
}
int main() {
    int n;
    cin>>n;
    int n2=0;
    while(n>0)
    {
    	n2=n2*10+n%10;
    	n=n/10;
	}
    char output[1000];
    codestring(n2,output,0);
	return 0;
}
