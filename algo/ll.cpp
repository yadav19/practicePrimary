#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d,Node* n = NULL): data(d),next(n) {}
};

Node * insert(Node * head, int data)
{
    Node * tmp = new Node(data);
    tmp->next = head;
    head = tmp;
    return head;
}
Node * inserttail(Node*head,int data)
{
    Node *tmp = head;
    while(tmp->next!=NULL) tmp = tmp->next;
    tmp->next = new Node(data);
    return head;
}

void insertT(Node*head,int data)
{
    while(head->next!=NULL) head=head->next;
    head->next = new Node(data);
}
void display(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head = NULL;
    for(int i=1;i<10;i++) head = insert(head,i),insertT(head,100-i);
    display(head);   
    cout<<endl;
    display(head);
}