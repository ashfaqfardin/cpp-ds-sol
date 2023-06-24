#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    string words[] = { "award", "await", "attend", "bubble", "coding", "spring", "mango", "night", "orange", "reward"};
    int numberOfWords = 10;
    string chosenWord = words[rand() % numberOfWords];
    // cout << chosenWord << endl; // test01
    
    int count = 0;
    char guessedLetter;
    int wordSize = chosenWord.length();
    char finalWord[wordSize];
    
    for(int i = 0; i < wordSize; i++){
        finalWord[i] = '_';
        cout << finalWord[i];
    }
    
    for(int i = 0; i < wordSize + 2; i++){
        cout << "\nGuess a Letter: ";
        cin >> guessedLetter;
        for(int j = 0; j < wordSize; j++){
            if(chosenWord[j] == guessedLetter){
                finalWord[j] = guessedLetter;
            }
            cout << finalWord[j];
            finalWord[wordSize] = 0;
        }
        if(chosenWord == finalWord){
            cout << "\nCorrect guess!\n";
            break;
        }
        else if(i == wordSize + 1){
            cout << "\nCorrect Answer: " << chosenWord << "\n";
        }
        
    }


    return 0;
}
