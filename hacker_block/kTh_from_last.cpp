#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * create_ll()
{
    node * head=NULL;
    head=new node;
    int data;
    cin>>data;
    head->data=data;
    head->next=NULL;
    cin>>data;
    if(data==-1)
    {
        return head;
    }
    
    node* it=head;
    
    while(data!=-1)
    {
        node*temp=new node;
       
        temp->data=data;
        temp->next=NULL;
        it->next=temp;
        it=it->next;
         cin>>data;
        
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
int main() {
    node* head=NULL;
    head=create_ll();
  //  print_ll(head);
  //  head=circular(head);
    //  print_ll(head);
      int n;
      cin>>n;
      node *temp=kTH_from_last(head,n);
      cout<<temp->data;
	return 0;
}
