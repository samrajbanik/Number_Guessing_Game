#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int target = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have picked a number between 1 and 100." << std::endl;

    // Loop until the user guesses the correct number
    while (guess != target) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < target) {
            std::cout << "Too low! Try guessing a higher number." << std::endl;
        } else if (guess > target) {
            std::cout << "Too high! Try guessing a lower number." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}