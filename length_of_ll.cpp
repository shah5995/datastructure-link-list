#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;

};
node * createll()
{
	int data;
	node * head=new node;
	cout<<"enter the data  ";
	cin>>data;
	if(data==-1)
	{
		head->data=0;
		head->next=NULL;
		head = NULL;
		return head;
	}
	
	head->data=data;
    head->next=NULL;
    node *it = head;
    cout<<"enter the data  ";
    cin>>data;
    while(data!=-1)
    {
    	cout<<"shah";
    	node *temp =new node;
    	temp->data=data;
    	temp->next=NULL;
    	it->next=temp;
    	it=it->next;
    		cout<<"enter the data  ";
    	cin>>data;
	}
	return head;
}
int  print( node *temp)
{    int c=0;
	while(temp->next!=0)
	{
		cout<<temp->data<<"--->  ";
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	c++;
	return c;
}
node * recursive(node * start,int k)
{
		if(start==NULL)
	{
		cout<<"not found";
		return NULL;
	}
	if(start->data==k)
	{
		return start;
	}

	node * temp2=recursive(start->next,k);
	return temp2;
}
int recursive(node * start,int k,int n)
{
		if(start==NULL)
	{
		cout<<"not found";
		return -1;
	}
	if(start->data==k)
	{
		return n;
	}

	int a=recursive(start->next,k,n+1);
	return a;
}

int main()
{
	node *head=NULL;
	head=createll();
	
//	int n=print(head);
//	cout<<endl<<n<<endl;
	cout<<"enter the no to be fpund";
	int k;
	cin>>k;
	node * temp=recursive(head,k);
	cout<<endl<<temp->data;
	int pos=recursive(head,k,0);
	cout<<"\n found at position :   ";
	cout<<pos;
}
