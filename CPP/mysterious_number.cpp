#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

    int mysteriousNumber = rand() % 100 + 1;
    int attempts = 0;
    int guess;

    std::cout << "Welcome to Mysterious Number!" << std::endl;
    std::cout << "I've chosen a number between 1 and 100. Can you guess it?" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        ++attempts;

        if (guess < mysteriousNumber) {
            std::cout << "Too Low!" << std::endl;
        } else if (guess > mysteriousNumber) {
            std::cout << "Too High!" << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
