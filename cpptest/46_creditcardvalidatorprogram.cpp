#include <iostream>
//The Luhn algorithm, also known as the modulus 10 or mod 10 algorithm, is a simple checksum formula used to validate a variety of identification numbers.
//Step 1 – Starting from the rightmost digit, double the value of every second digit, 
//Step 2 – If doubling of a number results in a two digit number i.e greater than 9(e.g., 6 × 2 = 12), then add the digits of the product (e.g., 12: 1 + 2 = 3, 15: 1 + 5 = 6), to get a single digit number.
//Step 3 – Now take the sum of all the digits.
//Step 4 – If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; else it is not valid.

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){
    std::string cardNumber;
    int result = 0;
    std::cout << "Enter your credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result%10 == 0){
        std::cout << "Card number is valid!";
    }
    else{
        std::cout << "Card number is not valid!";
    }

    return 0;
}

int getDigit(const int number){
    return number % 10 + (number/10 % 10);
    // if the digit is 18, then it will return 1 + 8 = 9

};
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    
    for (int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0'; 
    }

    return sum;
};
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    
    for (int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2); //cardNumber[i] is a string, if input intop getDigit func, will be treated as the corresponding decimal representative
    }

    return sum;
};