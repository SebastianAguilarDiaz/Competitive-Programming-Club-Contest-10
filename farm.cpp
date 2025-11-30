#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>

using namespace std;

// Title:     			  A - Shizuku Hoshikawa and Farm Legs
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  11/30/25
// Last update:			  11/30/25
// Version:				  1.0.0


int configs(int n){
    

    // if the input is an odd number we cant make a valid config
    if (n&1)
        return 0;
    
    n>>=2;
    n++;
    return n;

    
    
    
    return 0;

}


int main(){
    int t;
    int n;
    cin>>t;

    while (t--){
        cin>>n;
        cout<<configs(n)<<endl;
    }



    return 0;
}