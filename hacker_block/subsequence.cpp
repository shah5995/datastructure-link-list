#include<iostream>
using namespace std;
#include<cstring>
void subsequence(char input[],char output[],int i,int j)
{

    if(i<0)
    {
    	
        output[j]='\0';
        if(strlen(output)==1)
        {
        	cout<<output<<endl;
		}
		else
		{
			char output2[100];
			int m=0;
			int n=strlen(output);
			while(n--)
			{
				output2[m]=output[n];
				m++;
			}
			output2[m]='\0';
			cout<<output2<<endl;
			
		}
        
        return ;
    }
    subsequence(input,output,i-1,j);
    output[j]=input[i];
    subsequence(input,output,i-1,j+1);
    
    
}
int main() {
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
        subsequence(input,output,strlen(input)-1,0);
       // cout<<endl;
        
    }
	return 0;
}
