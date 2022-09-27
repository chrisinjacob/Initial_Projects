#include <iostream>
using namespace std;

int main(){
    int x;
    string y, z;
    cout << "Number System Conversion" << endl
             << "Choose your number system" << endl
             << "2.BINARY" << endl
             << "3.TERNARY" << endl
             <<"4.QUATERNARY" << endl
             << "5. QUINARY" << endl
             <<"6. SENARY" << endl
             << "7. SEPTENARY" << endl
             << "8.OCTAL" << endl
             << "9.NONARY" << endl
             <<"10. DECIMAL" << endl
             << "16. HEXADECIMAL" << endl
             << "Input any other value to exit the program" << endl;
    cin >> x;
    cout << "Source Number System: 3================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 3, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 3 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "TERNARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 4:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 4================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 4, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 4 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "QUATERNARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 5:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 5================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 5, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 5 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "QUINARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 6:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 6================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 6, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 6 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "SENARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 7:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 7================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 7, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 7 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "SEPTANARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 8:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 8================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 8, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 8 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "OCTAL: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 9:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 9================================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 9, Target Number System: 10======" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM: ";
    cin >> sourceNumberStr;
    // convert the number to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length() ; i++) {
    targetNumber = targetNumber * 9 + int(sourceNumberStr[i] - '0'
    );
    }
    cout << "NONARY: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    break;
    case 10:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 10===============================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(2) BINARY" << endl;
    cout << "(3) TERNARY" << endl;
    cout << "(4) QUATERNARY" << endl;
    cout << "(5) QUINARY" << endl;
    cout << "(6) SENARY" << endl;
    cout << "(7) SEPTANARY" << endl;
    cout << "(8) OCTAL" << endl;
    cout << "(9) NONARY" << endl;
    cout << "(16) HEXADECIMAL" << endl;
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (
    (target < 2 |
    | target > 9) && target != 16) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 10, Target Number System: "<< target << "=====" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE BASE: ";
    cin >> sourceNumberStr;
    // convert the source number from string to integer
    sourceNumber = 0;
    for (int i = 0; i < sourceNumberStr.length(); i++)
    sourceNumber = sourceNumber * 10 + int(sourceNumberStr[i] - '0'
    );
    // convert the source number to target base
    targetNumberStr = "";
    while (sourceNumber > 0) {
    remainder = sourceNumber % target;
    switch (remainder) {
    case 0: targetNumberStr = '0' + targetNumberStr; break;
    case 1: targetNumberStr = '1' + targetNumberStr; break;
    case 2: targetNumberStr = '2' + targetNumberStr; break;
    case 3: targetNumberStr = '3' + targetNumberStr; break;
    case 4: targetNumberStr = '4' + targetNumberStr; break;
    case 5: targetNumberStr = '5' + targetNumberStr; break;
    case 6: targetNumberStr = '6' + targetNumberStr; break;
    case 7: targetNumberStr = '7' + targetNumberStr; break;
    case 8: targetNumberStr = '8' + targetNumberStr; break;
    case 9: targetNumberStr = '9' + targetNumberStr; break;
    case 10: targetNumberStr = 'A' + targetNumberStr; break;
    case 11: targetNumberStr = 'B' + targetNumberStr; break;
    case 12: targetNumberStr = 'C' + targetNumberStr; break;
    case 13: targetNumberStr = 'D' + targetNumberStr; break;
    case 14: targetNumberStr = 'E' + targetNumberStr; break;
    case 15: targetNumberStr = 'F' + targetNumberStr; break;
    }
    sourceNumber = sourceNumber / target;
    }
    cout << "DECIMAL: " << sourceNumberStr << endl;
    switch (target) {
    case 2: cout << "BINARY: "
    << targetNumberStr << endl; break;
    case 3: cout << "TERNARY: "
    << targetNumberStr << endl; break;
    case 4: cout << "QUATERNARY: " << targetNumberStr << endl; break;
    case 5: cout << "QUINARY: "
    << targetNumberStr << endl; break;
    case 6: cout << "SENARY: "
    << targetNumberStr << endl; break;
    case 7: cout << "SEPTANARY: " << targetNumberStr << endl; break;
    case 8: cout << "OCTAL: "
    << targetNumberStr << endl; break;
    case 9: cout << "NONARY: "
    << targetNumberStr << endl; break;
    case 16: cout << "HEXADECIMAL: " << targetNumberStr << endl; break;
    }
    }
    break;
    case 16:
    cout << "=======================================================" << endl;
    cout << "Source Number System: 16===============================" << endl;
    cout << "=======================================================" << endl;
    cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:\n";
    cout << "(8) OCTAL\n";
    cout << "(10) DECIMAL\n";
    cout << "INPUT ANY OTHER VALUE TO EXIT THE PROGRAM." << endl;
    cout << "=======================================================" << endl;
    cin >> target;
    // invalid number entered, display exit menu
    if (target != 8 && target != 10) {
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    }
    else {
    cout << "=======================================================" << endl;
    cout << "Source Number System: 16, Target Number System: " << target << "=====" << endl;
    cout << "=======================================================" << endl;
    cout << "INPUT YOUR NUMBER IN SOURCE BASE:\n";
    // try at max 5 times to get a valid hex number
    for (j = 0; j < 5; j++) {
    cout << "HEXADECIMAL: ";
    cin >> sourceNumberStr;
    valid = true;
    for (i = 0; i < sourceNumberStr.length(); i++) {
    ch = sourceNumberStr[i];
    // if the digit does not belong to the below range, number is invalid
    if ( ! (
    (ch >= '0' && ch <= '9'
    ) |
    | (ch >= 'A' && ch <= 'F'
    )
    ) ) {
    valid = false;
    break;
    }
    }
    if (
    !valid) cout << "NOT A VALID NUMBER! TRY AGAIN:\n";
    // if the number is valid, break out of the loop
    else
    break;
    }
    if (valid) {
    // convert to decimal
    targetNumber = 0;
    for (i = 0; i < sourceNumberStr.length(); i++) {
    switch (sourceNumberStr[i]
    ) {
    case '0'
    : remainder = 0; break;
    case '1'
    : remainder = 1; break;
    case '2'
    : remainder = 2; break;
    case '3'
    : remainder = 3; break;
    case '4'
    : remainder = 4; break;
    case '5'
    : remainder = 5; break;
    case '6'
    : remainder = 6; break;
    case '7'
    : remainder = 7; break;
    case '8'
    : remainder = 8; break;
    case '9'
    : remainder = 9; break;
    case 'A'
    : remainder = 10; break;
    case 'B'
    : remainder = 11; break;
    case 'C'
    : remainder = 12; break;
    case 'D'
    : remainder = 13; break;
    case 'E'
    : remainder = 14; break;
    case 'F'
    : remainder = 15; break;
    }
    targetNumber = targetNumber * 16 + remainder;
    }
    if (target == 10) {
    cout << "HEXADECIMAL: " << sourceNumberStr << endl;
    cout << "DECIMAL: " << targetNumber << endl;
    }
    // convert to octal
    else {
    targetNumberStr = "";
    while (targetNumber > 0) {
    remainder = targetNumber % 8;
    targetNumberStr = char(remainder + '0'
    ) + targetNumberStr;
    targetNumber = targetNumber / 8;
    }
    cout << "HEXADECIMAL: " << sourceNumberStr << endl;
    cout << "OCTAL: " << targetNumberStr << endl;
    }
    }
    }
    break;
    default:
    cout << "=======================================================" << endl;
    cout << "Confirm Close==========================" << endl;
    cout << "=======================================================" << endl;
    cout << "ARE Y0U SURE YOU WANT TO QUIT THE PROGRAM?(Y/N)" << endl;
    cin >> choice;
    if (choice == 'y' |
    | choice == 'Y'
    ) {
    cout << "BYE!\n";
    cout << "=======================================================" << endl;
    return 0;
    }
    break;
    } // end switch
    cout << "YOU WILL BE RETURNED TO THE MAIN MENU.\n";
    cout << "=======================================================" << endl;
    } // end while loop
    return 0;
}


