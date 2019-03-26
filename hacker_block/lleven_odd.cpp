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
	//cout<<"END"<<endl;
	
}

node * arrange(node * head)
{
	node *temp=head;
	node * odd_head=NULL;
	node * even_head=NULL;
	node * odd_p=NULL;
	node * even_p=NULL;
	
	if(temp->data%2==0)
	{
	
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		even_head=next;
		temp=temp->next;
		while((temp!=NULL)&&(temp->data%2==0))
		{
			//cout<<"shah";
			temp=temp->next;
		}
		if(temp==NULL)
		{
			odd_head=NULL;
			
		}
		else
		{
			next=new node;
		next->data=temp->data;
		next->next=NULL;
		odd_head=next;
		}
	}
	else
	{
		
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		odd_head=next;
		temp=temp->next;
		while(temp!=NULL&&temp->data%2!=0)
		{
			temp=temp->next;
		}
		if(temp==NULL)
		{
			even_head=NULL;
		
		}
		else
		{
			next=new node;
		next->data=temp->data;
		next->next=NULL;
		even_head=next;
		}
	}
	temp=head;
	even_p=even_head;
	odd_p=odd_head;
	//cout<<even_p->data<<odd_p->data<<endl;
	while(temp!=NULL)
	{
		node *next=new node;
		next->data=temp->data;
		next->next=NULL;
		if(temp->data%2==0)
		{
			even_p->next=next;
			even_p=even_p->next;
		}
		else
		{
			odd_p->next=next;
			odd_p=odd_p->next;
		}
		temp=temp->next;
	}
	if(odd_head==NULL)
	{
		return(even_head->next);
	}
	else if(even_head==NULL)
	{
		return(odd_head->next);
	}
	else
	{
	
	odd_head=odd_head->next;
	even_head=even_head->next;
	//print_ll(odd_head);
	//print_ll(even_head);
	odd_p->next=even_head;
	
	return(odd_head);}
}
int main() {
    node* head=NULL;
    int n;
    cin>>n;
    head=create_ll(n);
    //print_ll(head);
    node *head2=NULL;
    
    head2=arrange(head);
   print_ll(head2);
	return 0;
}
