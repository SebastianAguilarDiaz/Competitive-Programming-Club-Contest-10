#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>
#include <algorithm>

using namespace std;

// Title:     			  C - Beautiful Average
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  12/02/25
// Last update:			  12/02/25
// Version:				  1.0.0

int main(){
    
    int t;
    cin>>t;
    int n;
    int average=0;
    int temp;
     while(t--){
        cin>>n;
        
        while(n--){
            cin>>temp;
            average=((temp>average)?temp:average);
        }
        cout<<average<<endl;
        average=0;
     }
     


    return 0;
}