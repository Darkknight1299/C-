#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        string car_name;
        int x, y;
    Car(){

    }
    Car(int x,int y,string car){
        car_name=car;
        this->x=x;
        this->y=y;
    } 
    int dis(){
        return x*x+y*y;//square of distance
    }   

};



bool compare(Car A, Car B){
    int da=A.dis();
    int db=B.dis();
    if(da==db){
        return A.car_name<B.car_name;//Compare on the basis of car_name
    }
    return da<db;//Compare on distance
}

int main () {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif  
   
    int n;
    cin>>n;
    vector<Car> v;
    for(int i=0;i<n;i++){
        string car;
        int x,y;
        cin>>car;
        cin>>x>>y;
        Car temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    for(auto x:v){
        cout<<x.car_name<<","<<x.dis()<<","<<x.x<<" "<<x.y<<endl;
    }
}

 

  
