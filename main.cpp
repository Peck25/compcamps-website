#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


int lives = 7;
int guess;
int number; // making a number varible

void levelOne();
void levelTwo();
void levelThree();
void levelFour();
void levelFive();

int main ()
{
  srand (time(NULL));
  number = rand() % 100 + 1;

  levelOne();

  return 0;
}

bool guessing(int number)
{
  cout << "Make a guess";
  cin>> guess;
  lives--;

  do
  {
    if (guess > number) {
      cout << "Too High, Guess Again" << endl;
      cin >> guess;
      lives--;
    }

    if (guess < number) {
      cout << "Too Low, Guess Again" << endl;
      cin >> guess;
      lives--;
    }

    if (guess == number) {
      cout << "Correct" << endl;
      return true;
    }

  } while(lives > 0);
  cout << "Game Over, Try Again" << endl;
  return false;

}

void levelOne()
{
  cout << "Level 1" << endl;
  cout << "You have 7 lives" << endl;
  cout << "I am thinking of a number between 1-100" << endl;
  cout << "Can you guess it?" << endl;
  number = rand() % 100 + 1;
  if (guessing(number)) {
    lives = lives + 7;
    levelTwo();

  }

}

void levelTwo()
{
  cout << "Level 2" << endl;
  cout << "You have gained 7 lives" << endl;
  cout << "I am thinking of a number between 1-250" << endl;
  cout << "Can you guess it?" << endl;
  srand (time(NULL));
  number = rand() % 250 + 1;
  if (guessing(number)) {
    lives = lives + 8;
    levelThree();

  }

}

void levelThree()
{
  cout << "Level 3" << endl;
  cout << "You have gained 8 lives" << endl;
  cout << "I am thinking of a number between 1-500" << endl;
  cout << "Can you guess it?" << endl;
  srand (time(NULL));
  number = rand() % 500 + 1;
  if (guessing(number)) {
    lives = lives + 9;
    levelFour();

  }

}

void levelFour()
{
  cout << "Level 4" << endl;
  cout << "You have gained 9 lives" << endl;
  cout << "I am thinking of a number between 1-1000" << endl;
  cout << "Can you guess it?" << endl;
  srand (time(NULL));
  number = rand() % 1000 + 1;
  if (guessing(number)) {
    lives = lives + 10;
    levelFive();

  }

}

void levelFive()
{
  cout << "Level 5" << endl;
  cout << "You have gained 10 lives" << endl;
  cout << "I am thinking of a number between 1-2500" << endl;
  cout << "Can you guess it?" << endl;
  srand (time(NULL));
  number = rand() % 2500 + 1;
  if (guessing(number)) {
    cout << "Cograts, you won!" << endl;
    return;
  }

}
