
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[1];
	
// int nums[2] ={1,2}; // you  can't see some thing good
// cout <<nums; 

//for(int i =cars.length())
 int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
  cout << myNumbers[i] << "\n";
}


//int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

	return 0;
}
