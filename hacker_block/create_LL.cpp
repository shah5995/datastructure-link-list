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

node *kthreverse(node *head,int k,int n,int i)
{
	if(i==n/k)
	{
		return NULL;
	}
	cout<<" s";
	node *temp=head;
	node* tail=NULL;
	cout<<head->data<<endl;
	for(int j=1;j<k;j++)
	{
		temp=temp->next;
	}
	cout<<temp->data<<endl;
	cout<<" h";
	node *temp2=temp->next;
	temp->next=NULL;
	cout<<" a";
	head=reversell(head,tail);
	print_ll(head);
	temp=head;
	cout<<" h";
	while(temp->next!=NULL)
	{
		cout<<"shah";
		temp=temp->next;
	}
	cout<<temp2->data<<endl;
	temp->next=kthreverse(temp2,k,n,i+1);
	
	return head;
	
	
	
}


int main() {
    node* head=NULL;
    int n;
    cin>>n;
    head=create_ll(n);
    int k;
    cin>>k;
    head=kthreverse(head,k,n,1);
    print_ll(head);
   
  
	return 0;
}
