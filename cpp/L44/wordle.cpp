#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

// Function to generate a random five-letter word
std::string generateRandomWord() {
    const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string word;
    for (int i = 0; i < 5; ++i) {
        word += alphabet[rand() % alphabet.size()];
    }
    return word;
}

// Function to check if a guess matches the feedback
bool matchesFeedback(const std::string& guess, const std::string& feedback) {
    std::vector<char> guessChars(guess.begin(), guess.end());
    std::vector<char> feedbackChars(feedback.begin(), feedback.end());
    std::sort(guessChars.begin(), guessChars.end());
    std::sort(feedbackChars.begin(), feedbackChars.end());
    return guessChars == feedbackChars;
}

// Function to make a guess based on the previous feedback
std::string makeGuess(const std::vector<std::string>& guesses, const std::vector<std::string>& feedbacks) {
    // For simplicity, just generate a random word as a guess
    return generateRandomWord();
}

int main() {
    srand(time(0)); // Seed the random number generator

    // Initialize vectors to store guesses and corresponding feedbacks
    std::vector<std::string> guesses;
    std::vector<std::string> feedbacks;

    // Loop until the correct word is guessed
    while (true) {
        // Make a guess based on previous feedbacks
        std::string guess = makeGuess(guesses, feedbacks);

        // Output the guess
        std::cout << "Guess: " << guess << std::endl;

        // Get feedback from the user
        std::string feedback;
        std::cout << "Enter feedback (e.g., green yellow gray): ";
        std::getline(std::cin, feedback);

        // Check if the guess is correct
        if (feedback == "green green green green green") {
            std::cout << "Correct guess: " << guess << std::endl;
            break;
        }

        // Store the guess and feedback
        guesses.push_back(guess);
        feedbacks.push_back(feedback);
    }

    return 0;
}
