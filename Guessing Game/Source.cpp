#include <iostream>
#include <string>
using namespace std;

int main()
{
	int maxGuess, answer;
	int guess = -1;
	string name;

	cout << "Hello and welcome to my guessing game. What is your name? "; 
	cin >> name;

	cout << "What is the highest number you can guess in your game, " << name << "? ";
	cin >> maxGuess;

	answer = rand() % maxGuess + 1;
	
	while (true)
	{
		cout << "What is your guess? ";
		cin >> guess;

		if (guess < answer)
		{
			cout << "Too low!" << endl;
		}
		else if(guess > answer){
			cout << "Too high!" << endl;
		}
		else
			break;
	}

	cout << "\nCongratulations " << name << ", you correctly guessed the number " << answer << "! Thanks for playing." << endl;

	system("pause");
	return 0;
}