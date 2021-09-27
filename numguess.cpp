/**
 * @file numguess.cpp
 *
 * @brief This programm will demonstrate the classic number
 *        guessing game.
 *
 * @author Abbot Yuri Patrick
 * Contact: abbotyuri@gmail.com
 *
 * \note Linux Compile: g++ -Werror numguess.cpp -o numguess
 * \note MinGW 32 Compile: i686-w64-mingw32-g++ numguess.cpp -o numguess32.exe
 * \note MinGW 64 Compile: x86_64-w64-mingw32-g++ numguess.cpp -o numguess64.exe
 *
 */

 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));    /* seed random number generator */

    int secretNumber = rand() %100 + 1;           /* random number between 1 and 100 */
    int tries = 0;
    int guess;

    cout << "\tWelcome to Guess my Number\n\n";

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " gueses!\n";
        }
    } while (guess != secretNumber);

    return 0;
}