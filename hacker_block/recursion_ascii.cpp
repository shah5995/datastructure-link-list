#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
void recursion(char input[],char output[],int input_index,int output_index)
{
	if(input[input_index]=='\0')
	{
		output[output_index]='\0';
		cout<<output<<" ";
		return;
	}
	recursion(input,output,input_index+1,output_index);
	
	output[output_index]=input[input_index];
	recursion(input,output,input_index+1,output_index+1);
	
}
int main()
{
	char input[100];
	cin>>input;
	cout<<pow(2,strlen(input))<<endl;
	char output[100];
	recursion(input,output,0,0);
	
}
