#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    bool continuetest = true;
    int michigan = 1;
    int bond = 1;
    int sign = 3;
    int lake = 1;
    int matrix = 2;
    int prep = 2;
    int Tomato = 2;
    int cardio = 3;
    int c;
    int i;
    while (continuetest = true) { //while loop, if this doesn't work use do while loop
      cout << "Welcome to the Random Trivia Game" << endl << endl;
      cout << "Make sure you answer in numbers (e.g 1 or 2 or 3)" << endl << endl;
      printf("What is the capital of Michigan? 1.Lansing 2.Raleigh 3.Salem-");
      int guess;
      cin >> guess;
      if (guess == 1) {
        cout << "You are correct, the answer is Lansing" << endl << endl;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      printf("What is the bond of water? 1.Covalent 2.Ionic-");
      int guessbond = 0;
      cin >> guessbond;
      if (guessbond == bond) {
        cout << "You are correct, the answer is Covalent" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect"<< endl << endl;
        ++i;
      }
      printf("What is the most important sign in math? 1.Plus Sign 2.Division Sign 3.Equal Sign");
      int guesssign = 0;
      cin >> guesssign;
      if (guesssign == sign) {
        cout << "You are correct, the answer is Equal Sign" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      printf("What makes a prepositional phrase? 1.Noun 2.Noun and Preposition 3.Preposition-");
      int guessprep = 0;
      cin >> guessprep;
      if (guessprep == prep) {
        cout << "You are correct, the answer is Noun and Preposition" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      printf("What is the best cardio you can get? 1.Running 2.Biking 3.Swimming-");
      int guesscardio = 0;
      cin >> guesscardio;
      if (guesscardio == cardio) {
        cout << "You are correct, the answer is Swimming" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      printf("Is the Tomato native or invasive? 1.Native 2.Invasive-");
      int Tomatoguess = 0;
      cin >> Tomatoguess;
      if (Tomatoguess == Tomato) {
        cout << "You are correct, the answer is Invasive" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl <<  endl;
        ++i;
      }
      printf("What is the largest freshwater lake in the USA? 1.Lake Superior 2.Dead Sea 3.Pacific Ocean-");
      int guesslake;
      cin >> guesslake;
      if (guesslake == lake) {
        cout << "You are correct, the answer is Lake Superior" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      printf("Who plays Neo in the Matrix? 1.Jim Carrey 2.Keanu Reeves 3.Leonardo DiCaprio-");
      int guessmatrix = 0;
      cin >> guessmatrix;
      if (guessmatrix == matrix) {
        cout << "You are correct, the answer is Keanu Reeves" << endl << endl;
        ++c;
      }else {
        cout << "Sorry you are incorrect" << endl << endl;
        ++i;
      }
      cout << "You have finished the Random Trivia Game. You got " << ++c << " questions right." << endl << endl;
      break;
    }
      return 0;
}
