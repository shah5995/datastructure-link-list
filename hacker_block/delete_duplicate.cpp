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
	//cout<<"END";
	
}
node * delete_dup(node * head)
{
	node * temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==temp->next->data)
		{
			temp->next=temp->next->next;
			
		}
		else
		{
			temp=temp->next;
		}
		
		
	}
	return head;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
    	node* head=NULL;
    	int n;
    	cin>>n;
    	head=create_ll(n);
    //print_ll(head);
    head=delete_dup(head);
        print_ll(head);
        cout<<endl;
	}
    
  
	return 0;
}
