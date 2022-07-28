/*

    This program will continuously ask the user to enter a number until he matches the
    randomly generated number. It will also tell the user if the guess was too high or small.

1. Generate a random integer to guess.
2. Assign guess a value that is outside the random number range so that it can enter the while loop.
3. Check if the guess entered is not the generated number (while loop).
        Ask the user to guess the number.

        Check if the user's guess is the number.
            If true: Tell the user that his guess is correct.

        Check if the user's guess is more than the number.
            If true: Tell the user that his guess is too high.

        Check if the user's guess is less than the number.
            If true: Tell the user that his guess is too low.

*/


// This program will continuously ask the user to enter a number until he matches the
// randomly generated number. It will also tell the user if the guess was too high or small.

#include <iostream>
#include <cstdlib>
#include <ctime>    // For the time function.

using namespace std ;

int main()
{
        // Declare variables.
    int number ;  // The random number.
    int guess ;  // The user's guess.

        // Generate a random integer to guess.
    srand ( time(0)) ;

    number = rand() % 101 ;

        // Display the heading prompt to ask the user for a random number.
    cout << "Guess a magic number between 0 and 100" << endl ;

        // Assign guess a value that is outside the random number range so that it can enter the while loop.
    guess = -1 ;

        // Check if the guess entered is not the generated number.
    while ( guess != number )
    {
            // Ask the user to guess the number.
        cout << endl << "Enter your guess: " ;
        cin >> guess ;

            // Check if the user's guess is the number.
        if ( guess == number )

                // Tell the user that his guess is correct.
            cout << "Yes, the number is " << number << endl ;


            // Check if the user's guess is more than the number.
        else if ( guess > number )

                // Tell the user that his guess is too high.
            cout << "Your guess is too high" << endl ;


            // Check if the user's guess is less than the number.
        else

                // Tell the user that his guess is too low.
            cout << "Your guess is too low" << endl ;
    }

    return 0 ;
}

/*

    RUN 1:

Guess a magic number between 0 and 100

Enter your guess: 2
Your guess is too low

Enter your guess: 4
Your guess is too low

Enter your guess: 70
Your guess is too high

Enter your guess: 50
Your guess is too high

Enter your guess: 40
Yes, the number is 40

    --------------------------------------------------

    RUN 2:

Guess a magic number between 0 and 100

Enter your guess: 30
Your guess is too low

Enter your guess: 60
Your guess is too high

Enter your guess: 50
Your guess is too low

Enter your guess: 52
Your guess is too low

Enter your guess: 55
Your guess is too low

Enter your guess: 58
Your guess is too high

Enter your guess: 57
Yes, the number is 57

    ------------------------------------------------

    RUN 3:

Guess a magic number between 0 and 100

Enter your guess: 47
Your guess is too high

Enter your guess: 36
Your guess is too low

Enter your guess: 40
Your guess is too low

Enter your guess: 42
Your guess is too low

Enter your guess: 45
Your guess is too high

Enter your guess: 43
Your guess is too low

Enter your guess: 44
Yes, the number is 44

*/
