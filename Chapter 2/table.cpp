#include<iostream>
using namespace std;
class tech{
	public:
	table(int a){
		for(int j=0;j<=10;j++){
			cout<<a<<"*"<<j<<"="<<a*j<<endl;
		}
	}
};
int main(){
	tech obj;
	int b;
	cin>>b;
	obj.table(b);
}
