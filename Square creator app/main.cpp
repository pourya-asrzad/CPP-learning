#include <iostream>
using namespace std;
#include <iomanip> //this library is needed for setw
//    cout << setw (X);
int main() {
	int X;

	cout << "Enter the one of squer: \n";

	cin >> X; 
	
	int ML =X*X;
	
 for(int i=1;i<=ML;i++){
     

       
	cout<<"* ";	
	
	if(i%X==0){
	
	
	 cout <<"\n";
	
	}
	 		
 }
	
}

