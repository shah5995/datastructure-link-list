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
	cout<<endl;
	
}
node * delet(node *head,int p,int n)
{
		node* temp=head;
	if(p==0)
	{
	
		head=temp->next;
		return head;
	}
	while(--p)
	{
		temp=temp->next;
	}
	node *temp2=new node;
	temp2=temp->next;
	temp->next=temp2->next;
	delete(temp2);
	
	return head;
}

int main() {
    node* head=NULL;
    int n,q;
    cin>>n>>q;
    head=create_ll(n);
    print_ll(head);
    while(q--)
    {
    	int position;
    	cin>>position;
    	head=delet(head,position,n);
    	print_ll(head);
	}
  
	return 0;
}
