#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>
#include <algorithm>

using namespace std;

// Title:     			  Redstone
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  01/10/26
// Last update:			  01/10/26
// Version:				  1.0.0

int main(){
    

    int test_cases=0;
    cin>>test_cases;

    while(test_cases--){

        int number_of_gears=0;
        cin>>number_of_gears;

        int gear=0;
        set <int> teeth;
        bool possible=false;

        while(number_of_gears--){
            cin>>gear;
            if (teeth.find(gear)!=teeth.end()){
                possible=true;
            }
            teeth.insert(gear);

        }
        teeth.clear();
        cout<<((possible)?"Yes":"No")<<endl;

    }


    return 0;
}