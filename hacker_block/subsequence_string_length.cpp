#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
void subsequence(char input[],char output[],int i,int j)
{
	
	if(input[i]=='\0')
	{
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
		int p=strlen(input);
int r =p-1-i;
	subsequence(input,output,i+1,j);


	output[j]=input[i];
//	cout<<i<<"  ";
	subsequence(input,output,i+1,j+1);
	
}

int main()
{
	int n;
    cin>>n;
    cin.get();
    while(n--)
    {
        char input[100],output[100];
        
        
        cin.getline(input,100);
      //  cout<<input<<endl;
        //cout<<output<<endl;
		
		//cout<<input2<<endl;
        subsequence(input,output,0,0);
       // cout<<endl;
        
    }
	return 0;
}
