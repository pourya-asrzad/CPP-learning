
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	 string answer;
	do{
		
	
   int userNumber;
   
   cout <<" Enter a number to create your lozenge : \n";
   
   cin>>userNumber;

   
   int area =pow(userNumber,2);
   
   for ( int i=1; i<= userNumber; ++i)
    {
        for(int j = 1; j <=i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
   for ( int i=userNumber; i>= 1; --i)
    {
        for(int j = 1; j <=i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
	
	
	   
    cout << "do you want to run this app again ?y/n \n";
    
	cin >> answer ;
	
    }while(answer=="y"||answer=="Y");
    
    return 0;
}
