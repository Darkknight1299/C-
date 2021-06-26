#include<bits/stdc++.h>
using namespace std;

char *mystrtok(char *str,char delim){
	//string and single cahracter act as delimenator
	static char *input=NULL;
	if(str!=NULL){
		//we are making the first call
		input=str;
	}
	//chech here after the base token has been returned
	if(input==NULL){
		return NULL
	}
	//start extracting tokens and store them in an array
	char *output=new char[strlen(input)+1];
	int i=0;
	for( ;input[i]!='\0';i++){
		if(input[i]!=delim){
			output[i]=input[i];
		}
		else{
			output[i]='\0';	
			input=input+i+1;
			return output;
		}
	}
	//corner case
	output[i]='\0';
	input=NULL;
	return output;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
	
	char *s=("Today  is a rainy day");

	char *ptr=mystrtok(s," ");
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr=mystrtok(NULL," ");
		cout<<ptr<<endl;
	}
}
