#include <iostream>

using namespace std;
#include <iomanip> //this library is needed for setw
//    cout << setw (X);
int main() {
	int height;
    int width;
    
	cout << "Enter the height of the rectangle: \n";

	cin >> height;
	
	cout << "Enter the width of the rectangle: \n";	
	
	cin >> width;
	
	int area = height*width;
	
	for(int i=1;i<=area;i++){
		cout<<"* ";
		if(i%width==0){
			cout<<"\n";
		}
		
	}
}

