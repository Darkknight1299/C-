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

void print(node* head){ //passing head by value tp not affect linkedlist
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
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

node* merge(node* a,node* b){
  if(a->data<b->data){
    c=a;
    c->next=merge(a->next,b);
  }
  else{
    c=b;
    c->next=merge(a,b->next);
  }
  return c;
}

/*
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode dummy(INT_MIN);
        ListNode *tail = &dummy;
        
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};
*/

node* mergeSort(node* head){
  //base case
  if(head==NULL or head->next==NULL){
    return head;
  }

  //rec case
  //1.break
  node* mid=midpoint(head);
  node* a=head;
  node*b=mid->next;
  mid->next=NULL;
  //2.rec sort the two parts
  a=mergeSort(a);
  b=mergeSort(b);
  //3.merge them
  node*c=merge(a,b);
  return c;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  node* head;
  cin>>head;
  head=mergeSort(head);
  print(head);
}