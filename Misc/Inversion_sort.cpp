//Count the number of pairs that can be made such tha a[i]>a[j] for i<j.

#include<bits/stdc++.h>
using namespace std;

int Merge(int arr[],int s,int e){
  int mid=(s+e)/2;
  int i=s;
  int j=mid+1;
  int k=s;
  int temp[100000];
  int cnt=0;

  while(i<=mid and j<=e){
    if(arr[i]<=arr[j]){
      temp[k++]=arr[i++];
    }
    else{
      temp[k++]=a[j++];
      cnt+=mid-i+1;
    }
  }

  while(i<=mid){
    temp[k++]=arr[i++];
  }

  while(j<=e){
    temp[k++]=arr[j++];
  }

  for(int i=0;i<=e;i++){
    arr[i]=temp[i]; 
  }

  return cnt;
}

int Inversion_count(int arr[],int s,int e){
  //Base Case
  if(s>=e){
    return 0;
  }

  //Merge Sort
  int mid=(s+e)/2;
  int x=Inversion_count(arr,s,mid);
  int y=Inversion_count(arr,mid+1,e);
  int z=Merge(arr,s,e);//Cross inversions
  return x+y+z;

}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int arr[]={1,5,2,6,3,0};
  int n=sizeof(arr)/sizeof(int);

  cout<<Inversion_count(arr,0,n-1)<<endl;
}