
#include <iostream>

using namespace std;
 
 int plusOne(int num){
 	return num +1;
 }
 
 // function definition 
 
 void fun(int x){
  cout<<	x + 30 ;
 }
 
 
void printMin(int arr[5])
{
    int min = arr[0];
    for (int i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "Minimum element is: " << min << "\n";
}
 
int main() {
	int x= 50;
	
//   	fun(50);
//	cout << x << "\n";
	
    int number = plusOne(5);
	cout << number;
	

    int ar[5] = { 30, 10, 20, 40, 50 };
    printMin(ar); // passing array to function
	return 0;
}
