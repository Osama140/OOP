#include<iostream>
using namespace std;
int main(){
	int num1=0;
	int num2=0; 
	cout<<"Insert two numbers"<<endl;
	cin>>num1>>num2;
	cout<<num1<<((num1%num2==0)?"is":"is not")<<"a multiple of"<<num2<<endl;
	return 0;
}
