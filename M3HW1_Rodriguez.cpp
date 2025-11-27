// CSC 134
// M3HW1 - Gold
// Josue Rodriguez
// 11/26/2025

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // ==========================
    // Question 1 - Simple Chat Bot
    // ==========================
    cout << "=== Question 1: Chat Bot ===\n";

    string likeAnswer;
    cout << "Hello, I'm a C++ program!\n";
    cout << "Do you like me? Please type yes or no.\n";
    cin >> likeAnswer;

    if (likeAnswer == "yes" || likeAnswer == "Yes" || likeAnswer == "YES") {
        cout << "That's great! I'm sure we'll get along.\n";
    }
    else if (likeAnswer == "no" || likeAnswer == "No" || likeAnswer == "NO") {
        cout << "Well, maybe you'll learn to like me later.\n";
    }
    else {
        cout << "If you're not sure... that's OK.\n";
    }

    cout << "\n";   // blank line between questions

    // ==========================
    // Question 2 - Receipt with Tip
    // ==========================
    cout << "=== Question 2: Receipt Calculator with Tip ===\n";

    double mealPrice;
    int orderType;   // 1 = dine in, 2 = to go
    const double TAX_RATE = 0.08;   // 8% tax (adjust if your class uses a different rate)
    const double TIP_RATE = 0.15;   // 15% tip on dine in

    cout << "Enter the price of the meal: ";
    cin >> mealPrice;

    cout << "Enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    double taxAmount = mealPrice * TAX_RATE;
    double tipAmount = 0.0;

    if (orderType == 1) {
        tipAmount = mealPrice * TIP_RATE;  // dine in gets a tip
    }

    double total = mealPrice + taxAmount + tipAmount;

    cout << "\n----- Receipt -----\n";
    cout << "Meal:   $" << mealPrice << endl;
    cout << "Tax:    $" << taxAmount << endl;
    cout << "Tip:    $" << tipAmount << endl;
    cout << "Total:  $" << total << endl;
    cout << "-------------------\n\n";

    // ==========================
    // Question 3 - Choose Your Own Adventure
    // ==========================
    cout << "=== Question 3: Choose Your Own Adventure ===\n";

    int firstChoice;
    int secondChoice;

    cout << "You are standing at the entrance of a dark forest.\n";
    cout << "1. Enter the forest.\n";
    cout << "2. Walk away and go back home.\n";
    cout << "Choose 1 or 2: ";
    cin >> firstChoice;

    if (firstChoice == 1) {
        cout << "\nYou step into the forest and hear a river nearby.\n";
        cout << "1. Follow the sound of the river.\n";
        cout << "2. Climb a tree to look around.\n";
        cout << "Choose 1 or 2: ";
        cin >> secondChoice;

        if (secondChoice == 1) {
            cout << "\nYou follow the river and find a small village.\n";
            cout << "The villagers welcome you. You win!\n";
        } else if (secondChoice == 2) {
            cout << "\nYou climb a tree, but the branch breaks and you fall.\n";
            cout << "You limp back home. Game over.\n";
        } else {
            cout << "\nThat wasn't a choice! You get lost in the forest. Game over.\n";
        }
    }
    else if (firstChoice == 2) {
        cout << "\nYou go back home and take a long nap.\n";
        cout << "Maybe adventure isn't for you today. Game over.\n";
    }
    else {
        cout << "\nYou stand there doing nothing until it gets dark.\n";
        cout << "Not the most exciting adventure. Game over.\n";
    }

    cout << "\n";

    // ==========================
    // Question 4 - Math Practice
    // ==========================
    cout << "=== Question 4: Math Practice ===\n";

    // seed the random number generator
    srand(time(0));

    int num1 = rand() % 10;  // 0-9
    int num2 = rand() % 10;  // 0-9
    int userAnswer;

    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> userAnswer;

    int correctAnswer = num1 + num2;

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n";
    } else {
        cout << "Incorrect. The correct answer was " << correctAnswer << ".\n";
    }

    cout << "\nEnd of M3HW1.\n";

    return 0;
}
