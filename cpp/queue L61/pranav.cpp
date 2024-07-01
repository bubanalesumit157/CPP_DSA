#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isVowel(char x) {
    char vowels[] = "AEIOUaeiou";
    for (int i = 0; i < 10; ++i) {
        if (x == vowels[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    std::cout << "Enter a sentence with only alphabets: ";
    cin>>s;

    int d = s.length();
    char vowels[d], consonants[d];
    int numVowels = 0, numCons = 0;

    for (int i = 0; i < d; ++i) {
        if (isVowel(s[i])) {
            vowels[numVowels] = s[i];
            ++numVowels;
        } else {
            consonants[numCons] = s[i];
            ++numCons;
        }
    }

    std::sort(vowels, vowels + numVowels);
    std::sort(consonants, consonants + numCons);

    char newStr[10000];
    int k = 0;
    for (int i = 0; i < d; ++i) {
        if (s[i] == (isVowel(s[i]) ? vowels[k] : consonants[k])) {
            newStr[k++] = s[i];
        }
    }

    if (k == 0) {
        newStr[0] = '0';
    }

    std::cout << newStr << std::endl;
    return 0;
}
