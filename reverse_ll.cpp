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
		next=new node;
		next->data=111111;
		next->next=NULL;
		
		odd_p->next=next;
		odd_p=odd_p->next;
		odd_p->next=even_head;
		return(odd_head);
	
}

node * reversell(node * head,node *& tail){
    if(head->next==NULL){
        tail = head;
        tail->next = NULL;
        return head;
    }
    node * newhead =  reversell(head->next,tail);
    tail->next = head;
    tail = head;
    tail->next = NULL;
    return newhead;
}
int count_ll(node * head)
{
	node *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	node * head=createll();
	int c=count_ll(head);
//	print(head);
	node *head2=odd(head);
//	print(head2);
//	cout<<endl;
	
	node*temp=head2;
	
	if(temp->next==NULL)
	{
//		cout<<"shah";
	cout<<temp->data<<endl;

	continue;	
	}
	if((temp->next)->next==NULL)
	{
		cout<<temp->next->data<<endl<<temp->data<<endl;
		continue;
	}
	while((temp->next)->data!=111111)
	{
		temp=temp->next;
		}
		
		node *head3=(temp->next)->next;
		temp->next=NULL;
	//print(head2);
	//cout<<endl;
	
	//print(head3);
	//cout<<endl;
	node *tail1=NULL;
	
	node *head4=reversell(head2,tail1);
	node *head5=reversell(head3,tail1);
if(c%2==0)
{

	print(head5);
	cout<<endl;
	print(head4);
	cout<<endl;	
}
else
{
	
	print(head4);
	cout<<endl;
	print(head5);
	cout<<endl;
}
		
			
			
	}
	
}
