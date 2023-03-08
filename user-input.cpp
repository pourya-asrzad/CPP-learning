
#include <iostream>

using namespace std;

int main() {
	string userName;
	cout << "Enter your name:";
	cin >> userName;
	cout << "your name is"
	     << " " << userName << "\n";
	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	
	cout << "Sum is: " << sum;
	return 0;
}
