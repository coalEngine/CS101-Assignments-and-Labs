/*
Thiery Jean Baptiste 
Lab 4: Question 49
3/24/25
CS101
*/

#include <ctime>
#include <iostream>
using namespace std;


int main()
{
    int min=1, max=100, guess;
    srand(time(0));
    int randNum = min + (rand() % (max-min+1));
   do{
        cout << 
    "Please guess a random number (1-100): ";
    cin>>guess;
    if (guess > randNum){
        cout << "Lower" << endl;
    }
    else if (guess < randNum){
        cout << "Higher" << endl;
    }
   }while(guess!=randNum);
   
    cout << "You got it correct! The number was " << randNum << endl;
    

    return 0;
}