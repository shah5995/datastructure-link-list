#include<iostream>
using namespace std;
void recursion(char input[],char output[],int i,int j)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout<<output;
        return;
    }
    if(input[i]==output[j-1])
    {
        output[j]='*';
         j++;
        
    }
   
    output[j]=input[i];
     recursion(input,output,i+1,j+1);
}
int main() {
    char input[100],output[100];
    cin>>input;
    output[0]=input[0];
    recursion(input,output,1,1);
	return 0;
}
