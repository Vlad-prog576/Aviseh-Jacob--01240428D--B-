#include <iostream>
#include <cstdlib> // For rand() and srand()	
#include <ctime> // For time()

using namespace std;

int main (){
	//seed the random number generator
	srand(time(0));
	
	// Generate random number from 1 - 100
	int secretNumber = (rand() % 100 ) + 1;
	int guess;
	int attempts = 0;
	
	cout << " === NUMBER GUESSING GAME === " << endl;
	cout << " I`ve picked a random between 1 and 100 " << endl;
	cout << " Can you guess what it is ?" << endl << endl;
	
	do {
	 cout << " Enter your guess (1 - 100 ): ";
	 cin >> guess ;
	 attempts ++ ;
	 
	 if ( guess < 1 || guess > 100  ) {
	 	  cout << "Please enter a number between 1 and 100! " << endl;
	 	}
	 else if ( guess > secretNumber  )   {
	 	cout << "Too high! " << endl;
	 }
	 else if ( guess < secretNumber  ) {
	 	cout << "Too low! " << endl;
	 }
	 else {
	 	cout << endl << " Congratulation! You got it in " << attempts << " tries! " << endl;
	 }
	
	cout << endl; // Blank line for make reading easy 
	 
	} while ( guess != secretNumber );
		
	return 0;
	
}