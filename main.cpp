#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

void checkLoopStatus(bool& continueLoop);
bool validateLoopInput(char userInput, vector<char> validChars);
int readInput();
//bool validateNthNumber(int userInput);

int main() {
    bool continueLoop = true;
    int nthDigit;

    do{
        printf("\n\nP I  T O  n T H  D I G I T  C A L C U L A T O R \n");
        nthDigit = readInput();


        cout << endl << setprecision(nthDigit+1) << M_PI << endl << endl;


        checkLoopStatus(continueLoop);

    }while(continueLoop);

    return 0;
}


void checkLoopStatus(bool& continueLoop){
    char userInput;
    vector<char> validCharacters = {'Y', 'y'};

    printf("Run Again (Y/N): ");

    cin >> userInput;

    if(validateLoopInput(userInput, validCharacters)){
        continueLoop = true;
    }
    else{
        continueLoop = false;
    }


}

int readInput(){
    int userInput = -1;
    bool isValid = false;

    do {
        printf("\nEnter Nth Digit: ");
        cin >> userInput;
        if (cin.good()) {
            isValid = true;
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Invalid input; please re-enter." << endl;
        }
    }while(!isValid);

    return  userInput;
}


bool validateLoopInput(char userInput, vector<char> validChars){
    for(int i = 0 ; i < validChars.size(); i++){
        if(userInput == validChars[i]){
            return true;
        }
    }
    return false;
}