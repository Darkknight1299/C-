#include<bits/stdc++.h>
using namespace std;

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int a,b,c;
  char ch;
    
  cin>>ch;
  while(ch!='x' && ch!='X')
  {
      if(ch=='+')
        {
            cin>>a>>b;
            c=a+b;
            cout<<c<<endl;
        }
        else if(ch=='-')
        {
            cin>>a>>b;
            c=a-b;
            cout<<c<<endl;
        }
        else if(ch=='*')
        {
            cin>>a>>b;
            c=a*b;
            cout<<c<<endl;
        }
        else if(ch=='%')
        {
            cin>>a>>b;
            c=a%b;
            cout<<c<<endl;
        }
        else if(ch=='/')
        {
            cin>>a>>b;
            c=a/b;
            cout<<c<<endl;
        }
        else
             cout<<"Invalid operation. Try again."<<endl;
        cin>>ch;
    }
}

 