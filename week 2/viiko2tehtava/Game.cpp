#include "Game.h"
#include <iostream>
#include <cstdlib>

using namespace std;


Game::Game(int max){

    maxNumber = max;

    randomNumber = rand()% maxNumber + 1;

}

Game::~Game(){}

void Game::play(){

    numOfGuesses=0;

    cout << "valitse max luku" << endl;
    cin >> maxNumber;

    while(1){
        numOfGuesses++;

        cout << "arvaa luku" << endl;
        cin >> playerGuess;

        if(playerGuess == randomNumber){
            cout << "oikein" << endl;
            printGameResult();
        break;
        }

        else if(playerGuess > randomNumber){
            cout << "liian iso" << endl;
        }

        else if(playerGuess < randomNumber){
            cout << "liian pieni" << endl;
        }

    }
}


void Game::printGameResult(){
    cout << "arvasit " << numOfGuesses << " kertaa" << endl;

    cout << "poistetaan peli ja tyhjennetaan muisti " << endl;

}
