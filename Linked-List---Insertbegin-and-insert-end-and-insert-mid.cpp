#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node* next;
};
Node * newnode(int data)
{
    Node* n=new Node();
    n->key=data;
    n->next=NULL;
}
Node* insert_begin(int data,Node*head)
{
    Node* m=newnode(data);
    if(head==NULL)
    {
        head=m;
    }
    else
    {
        m->next=head;
        head=m;
    }
    return head;
}
Node* insert_end(int data,Node*head)
{
    Node*m=newnode(data);
    if(head==NULL)
    {
        head=m;
    }
    else
    {
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=m;
    }
    return head;
}
Node*insert_mid(int data,Node*head,int pos)
{
    Node*m=newnode(data);
    Node*temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        count++;
        if(count==pos)
        {
            break;
        }
    }
    if(count==pos)
    {
        m->next=temp->next;
        temp->next=m;
    }
    else
    {
        cout<<"INVailid"<<" ";
    }
    return head;
}
Node* display(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->key<<"->";
        head=head->next;
    }
    cout<<NULL<<" ";
}
int main() {
	Node*head=NULL;
	head=insert_begin(61,head);
	head=insert_begin(113,head);
	head=insert_begin(11,head);
	head=insert_end(230,head);
	head=insert_end(400,head);
	head=insert_mid(7,head,2);
	head=display(head);
	return 0;
}
