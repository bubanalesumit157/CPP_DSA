#include <iostream>
#include <ctime>

using namespace std;

int main() {
  // Initialize the random number generator with the current time
  srand(time(NULL));
  for(int i=0;i<7;i++){
      

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Print the random number to the console
    cout << randomNumber << endl;
  }

  return 0;
}