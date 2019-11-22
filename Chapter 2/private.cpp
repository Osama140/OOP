#include<iostream>
using namespace std;
class osama{
	private:
	
		string name;
	
		public:
			setName(string a){
					name=a;
			}
	
			getName(){
				cout<<name;
			}
};
int main(){
	osama obj;
obj.setName("private data access");
obj.getName();
}
