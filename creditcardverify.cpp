#include<iostream>
int getDigit(const int number);
int sumEvenNumber(const std::string cardNumber);
int sumOddNumber(const std::string cardNumber);

int main(){
    
    std::string cardNumber;
    int result = 0;

    std::cout<<"Enter Your Card Number: ";
    std::cin>>cardNumber;

    result = sumEvenNumber(cardNumber) + sumOddNumber(cardNumber);
    if(result % 10 == 0){
        std::cout<<"You card is Valid.";
    }else{
        std::cout<<"Card is invalid.";
    }
    return 0;
}
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumEvenNumber(const std::string cardNumber){
int sum = 0;
for(int i = cardNumber.size() - 2;i >= 0; i -=2){
   
    sum += getDigit((cardNumber[i] - '0')*2);
 
}return sum;
}
int sumOddNumber(const std::string cardNumber){
int sum = 0;
for(int i = cardNumber.size() - 1;i >= 0; i -=2){
   
    sum += cardNumber[i] - '0';
 
}return sum;
}