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
node* merge(node* temp1,node *temp2)
{
	
	node *start;
	if(temp1==NULL&&temp2==NULL)
	{
		return NULL;
	}
	else if(temp1==NULL)
	{
		return temp2;
	}
	else if(temp2==NULL)
	{
		return temp1;
	}
	if(temp1->data > temp2->data)
	{
		start=temp2;
		temp2=temp2->next;
	}
	else
	{
		start=temp1;
	
	temp1=temp1->next;
	
		
	 } 
	
	node * temp=start;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data > temp2->data)
		{
			temp->next=temp2;
			temp2=temp2->next;
		}
		else
		{
			
			temp->next=temp1;
			temp1=temp1->next;
			
		}
		temp=temp->next;
	}
	if(temp1==NULL)
	{
		
			temp->next=temp2;
			
	
	}
	else
	{
		
		temp->next=temp1;
	}
	
	
	return start;
}
node * kthPosition(node * head,int k){
	while(k--){
		head = head->next;
	}
	return head;
}
node * merge_sort(node* head,int start,int end)
{
	int end1=(start+end)/2;
	int start1=end1+1;
	if(start>end)
	{
		return NULL;
	}
	if(start==end)
	{
		return head;
	}
	node * end11 =kthPosition(head,end1);
	
	node* head2=end11->next;
	end11->next=NULL;
	node *temp = merge_sort(head,start,end1);
	node* temp2=merge_sort(head2,0,end-start1);
	node *ans=merge(temp,temp2);
	return ans;
}
int find(node *temp)
{
	int n=0;
	while(temp!=NULL)
	{
		n++;
		temp=temp->next;
	}
	return n;
}
int main()
{
/*	node* list1=createll();
	cout<<endl<<endl;
	node* list2=createll();
	cout<<"1st link list::  ";
	print(list1);
	cout<<endl<<"2nd link list::  ";
	print (list2);
	node* mergelist=merge(list1,list2);
		cout<<endl<<"new node ::";
	print (mergelist);
*/	node * list3=createll();
	int n=find(list3);
node *ans =merge_sort(list3,0,n);
//cout<<"shah";
print(ans);
}
