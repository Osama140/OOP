#include<iostream>
using namespace std;
class osama
{
	public:
		void displayMessage() const
		{
			cout<<"Welcome to the GradeBook"<<endl;
		}
};
int main(){
	osama myGradeBook;
	myGradeBook.displayMessage();
}
