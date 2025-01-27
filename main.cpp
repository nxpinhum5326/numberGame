#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    bool debug = false;
    char debugChoice;

    std::cout << "Do you want to enable debugging (cheat)? (y/n): ";
    std::cin >> debugChoice;

    if(debugChoice == 'y' || debugChoice == 'Y'){
        debug = true;
    }

    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;

    if(debug){
        std::cout << "(DEBUG) Target number: " << number << std::endl;
    }

    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to guess the number game! I'm Okkes from AGALAR and," << std::endl;
    std::cout << "I've selected a number between 1 and 100. Can you guess it y*rram?" << std::endl;

    while(guess != number){
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if(guess < number){
            std::cout << "Too low! Try again. xD" << std::endl;
        }else if(guess > number){ 
            std::cout << "Too high! Try again. xD" << std::endl;
        }else{
            if(attempts == 1){
                std::cout << "Congratulations! :pouting_cat: You've guessed the number on the first attempt." << std::endl;
            }else{
                std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
            }
        }
    }

    return 0;
}
