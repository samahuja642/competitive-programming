// { Driver Code Starts
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    Node *ptr1=head1;
    Node *ptr2=head2;
    int c1=1,c2=1;
    while(ptr1->next!=NULL){
        c1++;
        ptr1=ptr1->next;
    }
    while(ptr2->next!=NULL){
        c2++;
        ptr2=ptr2->next;
    }
    int d=abs(c2-c1);
    int count=0;
    ptr1=head1;
    ptr2=head2;
    if(c2>c1){
        while(count<d){
            ptr2=ptr2->next;
            count++;
        }
    }
    else if(c1>c2){
        while(count<d){
            ptr1=ptr1->next;
            count++;
        }
    }
    while((ptr1->data!=ptr2->data) && (ptr1!=NULL)){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr1){
        return ptr1->data;
    }
    else{
        return -1;
    }
}