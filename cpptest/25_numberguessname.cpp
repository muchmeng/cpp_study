# include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "********** NUMBER GUESSING GAME **********\n";

    do{
        std::cout << "Enter a guess number between 1 to 100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "Correct! # of tries: " << tries << "\n";
        }

    }while(guess != num);

    std::cout << "********** End of the Game **********\n";

    return 0;
}