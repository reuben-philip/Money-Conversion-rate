//Author: Reuben  Philip

#include<iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
    double initial_value;
    double conversion_value;
    char user_choice;
    string symbol;

    //make introduction statement A = Euros, B = Yuan, C = Rupees, D = Australlian Dollar,.. more to come
    cout << "Welcome to the money converstion calculator. This calculator takes USD amounts and converts them into different currencies\n" << endl;

    cout << "The options are\nA:Euros\nB:Yuan\nC:Rupees\nD:Australlian Dollars\nE:Yen\nF:Pesos\n\nSelect a character:";

    cin >> user_choice;

    cout << "USD value:";
    cin >> initial_value;

    user_choice = toupper(user_choice);

    switch(user_choice){
        case 'A':
            conversion_value = initial_value * 0.92;
            symbol = "\u20AC";
            break;
        case 'B':
            conversion_value = initial_value * 7.20;
            symbol = "\u00A5";
            break;
        case 'C':
            conversion_value = initial_value * 82.87;
            symbol = "\u20B9";
            break;
        case 'D':
            conversion_value = initial_value * 1.53;
            symbol = "\u0024";
            break;
        case 'E':
            conversion_value = initial_value * 150.75;
            symbol = "\u00A5";
            break;
        case 'F':
            conversion_value = initial_value * 17.13;
            symbol = "\u20B1";
            break;
        default: 
            cout << "The inputed first character is not a option";
            return 1;
    }

    cout << fixed << showpoint << setprecision(2) << symbol << conversion_value;

    return 0;
}