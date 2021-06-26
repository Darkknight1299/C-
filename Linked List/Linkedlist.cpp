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

void insertAtMiddle(node* &head,int d,int p){
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

void deleteHead(node* &head){
  if(head==NULL){
    return;
  }
  node* n=head->next;
  delete head;
  head=n;
}

void deleteTail(node* head){
  if(head==NULL){
    return;
  }
  node* prev=head;
  node* temp=head->next;
  while(temp!=NULL){
    temp=temp->next;
    prev=prev->next;
  }
  prev->next=NULL;
  delete temp;
}

void deleteMiddle(node* &head,int p){
  if(head==NULL){
    return;
  }
  else if(p=length(head)){
    deleteTail(head);
  }
  else{
    node* prev=head;
    node* temp=head->next;
    int jump=1;
    while(jump<=p-1){
      prev=prev->next;
      temp=temp->next;
      jump++;
    }
    prev->next=temp->next;
    delete temp;
  }
}

void print(node* head){ //passing head by value to not affect linkedlist
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}

bool search(node* head,int key){
  node* temp=head;
  while(temp!=NULL){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false; 
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL or headB==NULL){
            return NULL;
        }
        ListNode* p1=headA;
        ListNode* p2=headB;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
            
            if(p1==p2){
                return p1;
            }
            
            if(p1==NULL){
                p1=headB;
            }
            if(p2==NULL){
                p2=headA;
            }
        }
        return p1;
    }

//Recursive search
bool searchRec(node* head,int key){
  //base case
  if(head==NULL){
    return false;
  }
  //Rec case-check for key or call on rest linklist
  if(head->data==key){
    return true;
  }
  else{
    return searchRec(head->next,key);
  }
}

node* takeinput(){
  int d;
  cin>>d;//
  node* head=NULL;
  while(d!=-1){ //make condition as cin>>d; to take input from a file till input is there(line with // infront of them in this function should also be removed to take input from a file).
    insertAtHead(head,d);
    cin>>d;//
  }
  return head; 
}

ostream& operator<<(ostream &os,node* head){
  print(head);
  return os;
}

istream& operator>>(istream &is,node* head){
  head=take_input();
  return is;
}

void Reverse(node* head){
  node* c=head;
  node* prev=NULL;
  node* n;
  while(c!=NULL){
    n=c->next;
    c->next=prev;
    prev=c;
    c=n;
  }
  head=prev;
}

node* recReverse(node* head){
  //smallest linklist-base case
  if(head->next==NULL or head==NULL){
    return head;
  }
  //rec case
  node* shead=return recReverse(head->next);
  node* temp=head->next;
  temp->next=head;  
  head->next=NULL;
  return shead;
}

node* midpoint(node* head){
  if(head==NULL or head->next==NULL){
    return head;
  }

  node* slow=head;
  node* fast=head->next;

  while(fast!=NULL and fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }
  return slow;
}

node* kthNodefromBack(node* head,int k){
  if(head==NULL){
    return head;
  }
  node* slow=head;
  node*fast=head;
  int cnt=0;
  while(cnt<=k){
    fast=fast->next;
    cnt++;
  }
  while(fast!=NULL){
    fast=fast->next;
    slow=slow->next;
  }
  return slow;
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

  cin>>head;

  print(head);
  cout<<endl;
  cout<<head<<endl;

  head=recReverse(head);
  cout<<head<<endl;
}