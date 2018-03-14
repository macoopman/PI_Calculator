#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * Display->  PI to the Nth Digit Calculator
 * Display-> Enter Nth Digit
 * read digit from user
 * display -> Result
 * prompt to enter go again
 */

void userInput(){

}



int main() {
    bool continueLoop = true;
    int nthDigit;

    while(continueLoop){
        printf("\tPI to the Nth Digit Calculator\n");
        printf("\t\tEnter Nth Digit: ");
        cin >> nthDigit;

        cout << setprecision(nthDigit+1) << M_PI << endl;
    }



    return 0;
}