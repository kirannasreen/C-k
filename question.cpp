#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    int score = 0;
    string answer,b;
    cout<<"Welcome to the quiz game"<<endl;
    start:
    cout<<"press 1 start the game"<<endl;
    cout<<"press 0 end the game"<<endl;
    cin>>b;
    if(b=="0")
    {
    	cout<<"Exit the game"<<endl;
	}
	else if(b == "1")
	{
//		cout<<"Welcome to the question game"<<endl;
		// Question 1
		cin.clear();
    cout << "What is the capital of France?" << endl;
 	getline(cin,answer);
if(answer == "paris" || answer=="Paris")
	 {
        score++;
        cout << "Correct!" << endl;
    } 
else 
	{
        cout << "Wrong! The correct answer is: Paris" << endl;
    }

    // Question 2
    cout << "What is 2 + 2?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (answer == "4") {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong! The correct answer is: 4" << endl;
    }

    // Question 3
    cout << "Who wrote 'Romeo and Juliet'?" << endl;
    cout << "Your answer: ";
    getline(cin, answer);
    if (answer == "Shakespeare") {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong! The correct answer is: Shakespeare" << endl;
    }

    // Display final score
    cout << "You scored " << score << " out of 3!" << endl;

    // Option to play again
    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y')
	{
		system("cls");
		goto start;
    
    }

	}

    
    return 0;
}