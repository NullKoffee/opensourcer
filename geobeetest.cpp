#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    bool continuegeo = true;
    int g;
    int belize = 2;
    int chad = 1;
    int ireland = 3;
    int canada = 2;
    int sucre = 1;
    int ural = 2;
    int juanriver = 1;
    string china = "China";
    
    while (continuegeo == true) { //using while loop
      cout << "Welcome to the GeoBee! " << endl << endl;
      cout << "Make sure you answer in numbers (e.g 1, 2, or 3)" << endl << endl;
      printf("The Rio Hondo forms a boundary between Mexico and which other country?-1.Panama 2.Belize 3.Costa Rica-");
      int guess1;
      cin >> guess1;
      if (guess1 == belize) {
        cout << "You are correct the answer is Belize" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the correct answer is Belize" << endl << endl;
      }
      printf("Which lake is on the border between Chad and Cameroon?-1.Lake Chad 2.Lake Tanjanyika 3.Lake Victoria-");
      int guess2;
      cin >> guess2;
      if (guess2 == chad) {
        cout << "You are correct the answer is Lake Chad" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the correct answer is Lake Chad" << endl << endl;
      }
      printf("St. George's Channel divides the United Kingdom from which nation?-1.Denmark 2.Iceland 3.Ireland-");
      int guess3;
      cin >> guess3;
      if (guess3 == ireland) {
        cout << "You are correct the answer is Ireland" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the correct answer is Ireland" << endl << endl;
      }
      printf("Which country is the United States largest trading partner?-1.China 2.Canada 3.UK-");
      int guess4;
      cin >> guess4;
      if (guess4 == canada) {
        cout <<"You are correct the answer is Canada" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the answer is Canada" << endl << endl;
      }
      printf("La Paz is the administrative capital of Bolivia. What is the constitutional capital?-1.Sucre 2.Georgetown 3.Cusco-");
      int guess5;
      cin >> guess5;
      if (guess5 == sucre) {
        cout << "You are correct the answer is Sucre" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the answer is Sucre" << endl << endl;
      }
      printf("Which mountain range is the traditional division between Europe and Asia?-1.Andes Mountains 2.Ural Mountains 3.Himalayan Mountains-");
      int guess6;
      cin >> guess6;
      if (guess6 == ural) {
        cout << "You are correct the answer is the Ural Mountains" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the answer is the Ural Mountains" << endl << endl;
      }
      printf("Which river forms part of the border between Costa Rica and Nicaragua?-1.San Juan River 2.Panama River 3.Gulf of Mexico-");
      int guess7;
      cin >> guess7;
      if (guess7 == juanriver) {
        cout << "You are correct the answer is San Juan River" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the answer is San Juan River" << endl << endl;
      }
      printf("Which country is the most populous in the world?-");
      string guess8 = "";
      cin >> guess8;
      if (guess8 == china) {
        cout << "You are correct the answer is China" << endl << endl;
        ++g;
      }else {
        cout << "Sorry the answer is China" << endl << endl;
      }
      cout << "Congratulations you finshed the GeoBee test, you got " << g << " out of 8 questions right." << endl;
      break;
    }
    return 0;
}
