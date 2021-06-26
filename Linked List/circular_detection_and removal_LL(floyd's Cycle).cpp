#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* next;

  node(int d){
    data=d;
    next=NULL;
  }
};

void insertAtHead(node* &head,int d){ //call by refernce to head to change the actual head
  if(head==NULL){
    head = new node(d);
    return;
  }
  node* temp = new node(d);
  temp->next=head;
  head = temp;
}

void insertAtTail(node* &head,int d){
  if(head==NULL){
    head = new node(d);
    return;
  }
  node* tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  node* n = new node(d);
  tail->next=n;
}

int length(node* head){
  int cnt=0;
  while(head!=NULL){
    cnt++;
    head=head->next;
  }
  return cnt;
}

void insertAtMiddle(node* head,int d,int p){
  if(p==0){
    insertAtHead(head,d);
  }
  else if(p>=length(head)){
    insertAtTail(head,d);
  }
  else{
    //take p-1 jumps
    int jump=1;
    node* temp=head;
    while(jump<=p-1){
      temp=temp->next;
      jump++;
    }
    //create new node
    node* n= new node(d);
    n->next=temp->next;
    temp->next=n;

  }
}

void print(node* head){ //passing head by value tp not affect linkedlist
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}

bool detectCycle(node* head){
  if(head==NULL or head->next=NULL){
    return false;
  }

  node* slow=head;
  node* fast=head;
  while(fast!=NULL or fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    if(slow==fast){
      return true;
    }
  }
  return false;
}

node* removeCircular(node* &head){
  if(detectCycle(head)){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL or fast->next!=NULL){
      fast=fast->next->next;
      slow=slow->next;
      if(slow==fast){
       slow=head->next;
       fast=fast->next;
       node* prev=fast;
       while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
       }
       prev->next=NULL;
      }
    }
    return head; 
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* head=NULL;
  insertAtHead(head,3);
  insertAtHead(head,6);
  insertAtHead(head,7);
  insertAtHead(head,9);

  insertAtMiddle(head,4,1);
  insertAtTail(head,10);

  print(head);
}