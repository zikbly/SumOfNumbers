#include <iostream>
using namespace std;

//Write a program to find the sum of all prime numbers from 2 to 100.

void PrimeNumSum(){
    cout<< "\n=== The sum of all prime numbers from 2 to 100. === \n\n\n";
    int primeSum=0, naturalNumber=2;

    while(naturalNumber <= 100){
        int divisor=2;
        bool naturalNumberIsPrime=true;
        while(divisor < naturalNumber){
            if(naturalNumber % divisor==0){
                naturalNumberIsPrime = false;
                break;
            }
            divisor++;
        }
        if(naturalNumberIsPrime){
            cout<< naturalNumber << " ";
            primeSum += naturalNumber;
        }
        naturalNumber++;
    }
    cout<< "\n\nTherefore the sum of the Prime numbers = " << primeSum <<"\n\n ============================================================\n\n";
}






//Find the sum of all integers between 0 and 100 that are divisible by either 3 or 5.

void NaturalNumSum(){
    cout<< "=== The sum of all integers between 0 and 100 that are divisible by either 3 or 5. === \n\n\n";
    int numberSum=0;    //Initialize final sum value
    for(int number=1;number<100;number++){
        if((number%3==0) || (number%5==0)){
            cout<<"When the number = " << number << "\n";
            numberSum+=number;
            cout<< "Sum = " << numberSum << "\n\n";
        }
    }
    cout<< "Therefore final sum of the numbers = " << numberSum << "\n\n============================================================\n\n";
}

int main(){
    PrimeNumSum();
    NaturalNumSum();
    return 0;
}






