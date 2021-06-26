#include<bits/stdc++.h>
using namespace std;

void Counting_sort(int arr[],int n){

  //Assuming largest no is >0
  int largest=-1;
  for(int i=0;i<n;i++){
    largest=max(largest,arr[i]);
  }

  //Create freq array
  int freq[largest+1]={0};
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }

  //Put the elements backin the array sorted
  int j=0
  for(int i=0;i<largest;i++){
    while(freq[i]>0){
      arr[j]=i;
      freq[i]--;
      j++; 
    }
  }
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={88,97,10,12,15,1,5,6,12,5,8};
  int n=sizeof(arr)/sizeof(int);
  Counting_sort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}