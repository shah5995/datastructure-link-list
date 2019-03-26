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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
//	cout<<"END";
	
}
node * merge(node * head1,node *head2)
{
	node * temp=new node;
	temp->next=NULL;
	if(head1->data>head2->data)
	{
		temp->data=head2->data;
	head2=	head2->next;
	}
	else
	{
		temp->data=head1->data;
		head1=head1->next;
	}
	node *head3=temp;
	node *it=head3;
	while(head2!=NULL&&head1!=NULL)
	{
		node * temp=new node;
	temp->next=NULL;
	if(head1->data>head2->data)
	{
		temp->data=head2->data;
	head2=	head2->next;
	}
	else
	{
		temp->data=head1->data;
		head1=head1->next;
	}
		it->next=temp;
		it=it->next;
		
	}
	if(head1==NULL)
	{
		it->next=head2;
	}
	else if(head2==NULL)
	{
		it->next=head1;
	}
	
	return head3;
}

int main() {
    node* head1=NULL;
    node *head2=NULL;
    int n,m;
    cin>>n>>m;
    
    head1=create_ll(n);
    head2=create_ll(m);
//	print_ll(head1);
//		print_ll(head2);
	node * head3=merge(head1,head2);
  	print_ll(head3);
	return 0;
}
