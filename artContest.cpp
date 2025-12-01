#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>
#include <algorithm>

using namespace std;

// Title:     			  
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  11/30/25
// Last update:			  11/30/25
// Version:				  1.0.0


vector <int> vec(3);



int main(){
    for(int &i: vec){
        cin>>i;
    }
    sort(vec.begin(),vec.end());

    if((vec.at(2)-vec.at(0))>= 10){
        cout<<"check again"<<endl;
        return 0;
    }
    cout<<"final "<<vec.at(1)<<endl;
    return 0;
}