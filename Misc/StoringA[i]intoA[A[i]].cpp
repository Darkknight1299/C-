#include<bits/stdc++.h>
using namespace std;

void arrange(vector<int> &Vec) {
        int N = Vec.size();
        for(int i = 0; i < N; ++i) {
            Vec[i] = Vec[i] + (Vec[Vec[i]]%N) * N;
        }

        for(int i = 0; i < N; ++i) {
            Vec[i] = Vec[i] / N;
        }
 }


int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
vector<int> A;
A.push_back(0);
A.push_back(1);
cout<<reverse(A);
}

 

  
