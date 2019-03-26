#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * create_ll(int n)
{
    node * head=NULL;
    head=new node;
    int data;
    cin>>data;
    head->data=data;
    head->next=NULL;
    if(n==1)
    {
        return head;
    }
    n--;
    node* it=head;
    while(n)
    {
        node*temp=new node;
        cin>>data;
        temp->data=data;
        temp->next=NULL;
        it->next=temp;
        it=it->next;
        n--;
    }
    
    
    return head;
}
void print_ll(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"END";
	
}
node* kTH_from_last(node* head,int n)
{
	static int k=n;
	node *temp=head;
	if(temp==NULL)
	{
		return NULL;
	}
	node *temp2=kTH_from_last(temp->next,n);
	k--;
	if(k==0)
	{
		return temp;
	}
	return temp2;
}
void  append(node* temp,node *head)
{
	node *temp2=temp;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=head;
	while(temp2->next!=temp)
	{
		temp2=temp2->next;
	}
	temp2->next=NULL;
}

int main() {
    node* head=NULL;
    int n;
    cin>>n;
    head=create_ll(n);
    print_ll(head);
    int k;
    cin>>k;
    if(k>n)
    {
    	k=k%n;
	}
	
	{
		node* temp=kTH_from_last(head,k);
		cout<<temp->data;
		append(temp,head);
		print_ll(temp);
		
	}
  
	return 0;
}
