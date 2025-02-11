#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);
    
    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout << "Scissor Paper Rock Game!\n";

    do {
        std::cout << "Choose one of the following!\n";
        std::cout << "************************\n";
        std::cout << "'s' for Scissor\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'r' for Rock\n";
        std::cin >> player;
    }while(player != 's' && player != 'p'&& player != 'r');

    return player;
}
char getComputerChoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 's';
        case 2: return 'p';
        case 3: return 'r';
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 's': std::cout << "Scissor\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 'r': std::cout << "Rock\n";
                  break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
            std::cout << "It's a tie!\n";
                  }
                  else if(computer == 'p'){
                    std::cout << "You lose!\n";
                  }
                  else{
                    std::cout << "You win!\n";
                  }
                 break;
        case 'p': if(computer == 'p'){
            std::cout << "It's a tie!\n";
                  }
                  else if(computer == 's'){
                    std::cout << "You lose!\n";
                  }
                  else{
                    std::cout << "You win!\n";
                  }
                 break;
        case 's': if(computer == 's'){
            std::cout << "It's a tie!\n";
                  }
                  else if(computer == 'r'){
                    std::cout << "You lose!\n";
                  }
                  else{
                    std::cout << "You win!\n";
                  }
                 break;

    }


}