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
	//cout<<"enter the data  ";
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
    //cout<<"enter the data  ";
    cin>>data;
    while(data!=-1)
    {
    //	cout<<"shah";
    	node *temp =new node;
    	temp->data=data;
    	temp->next=NULL;
    	it->next=temp;
    	it=it->next;
    //		cout<<"enter the data  ";
    	cin>>data;
	}
	return head;
}
int  print( node *temp)
{    int c=0;
	while(temp->next!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		c++;
	}
	cout<<temp->data;
	c++;
	return c;
}
node * reverse(node *temp)
{
	node *head;
	if(temp->next  ==NULL)
	{
		return temp;
	}
	head=reverse(temp->next);
	head->next=temp;
	return head;
}
node * odd(node*head)
{
		node *temp=head;
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		node *odd_head=next;
		if(temp->next==NULL)
		{
			return(head);
		}
		temp=temp->next;
		
		next=new node;
		next->data=temp->data;
		next->next=NULL;
	   node *even_head=next;
		if(temp->next==NULL)
		{
			return(head);
		}
		temp=temp->next;
		node *odd_p=odd_head;
		node *even_p=even_head;
		int c=3;
		while(temp!=NULL)
		{
			
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		if(c%2!=0)
		{
			odd_p->next=next;
			odd_p=odd_p->next;
		}
		else
		{
			even_p->next=next;
			even_p=even_p->next;
		}
		temp=temp->next;
		c++;
		}
		odd_p->next=even_head;
		return(odd_head);
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	node * head=createll();
//	print(head);
	node *head2=odd(head);
	print(head2);
	cout<<endl;
		
	}
	
}
