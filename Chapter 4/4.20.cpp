#include <iostream>
 using namespace std;

 int main() {

unsigned int passes{0};
unsigned int failures{0};
unsigned int studentCounter{1};




 while (studentCounter <= 10) {
 ff:

cout << "Enter result (1 = pass, 2 = fail): ";
 int result;
 cin >> result;


if (result == 1) {
 passes = passes + 1;
}
else if(result==2){
 failures = failures + 1;
} else {
	cout<<"\nERROR ! PLZ ENTER CORRECT NUMBER. "<<endl;
	goto ff;
}

 studentCounter = studentCounter + 1;
 }

 cout << "Passed: " << passes << "\nFailed: " << failures << endl;
 
 if (passes > 8) {
 cout << "Bonus to instructor!" << endl;
 }
 }


