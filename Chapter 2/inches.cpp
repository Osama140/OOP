#include<iostream>
using namespace std;
int main(){
float feet,inches;
cout<<"Enter Feet:";
cin>>feet;
cout<<"Enter Inches:";
cin>>inches;
feet=12*feet;
inches=inches+feet;  
inches=inches*2.54;
cout<<"Your answer in cm is = "<<inches;   
return 0;	
}

