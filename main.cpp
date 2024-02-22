#include "Bank.h"
#include <iostream>
#include <iomanip>
using namespace std;
void centerTextWithColor(const string& text, int colorCode)
{
    // ANSI color escape sequences
    const string colorStart = "\033[38;5;" + to_string(colorCode) + "m";
    const string colorEnd = "\033[0m";

    // Get the width of the console
    int consoleWidth = 80;

    // Calculate the left padding to center the text
    int leftPadding = (consoleWidth - text.length()) / 2;

    // Output the centered and colored text
    cout << std::setw(leftPadding + text.length()) << setfill(' ') << colorStart << text << colorEnd << endl;
}
void printColoredText(const std::string& text, int colorCode)
{
    // ANSI color escape sequences
    const std::string colorStart = "\033[38;5;" + std::to_string(colorCode) + "m";
    const std::string colorEnd = "\033[0m";


    std::cout << colorStart << text << colorEnd << std::endl;
}


    int main()
{
    centerTextWithColor("Bank Queue Management System (BQMS)", 33);

    // Create a Bank with 3 tellers
    int numTellers;
    cout << "Enter the number of tellers: ";
    cin >> numTellers;
    Bank bank(numTellers);

    // Add customers to the bank
    int customerId, arrivalTime, serviceTime;
    char addMore;
    do {
        cout << "Enter customer details (ID ArrivalTime ServiceTime): ";
        cin >> customerId >> arrivalTime >> serviceTime;
        bank.AddCustomer(customerId, arrivalTime, serviceTime);

        cout << "Do you want to add more customers? (y/n): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    // Assign customers to tellers
    bank.assignCust();

    return 0;


    /*  // Create a Bank with 3 tellers
    Bank bank(3);

    // Add some customers to the bank
    bank.AddCustomer(1, 35, 62);
    bank.AddCustomer(2, 39, 57);
    bank.AddCustomer(3, 78, 124);

    // Assign customers to tellers
    bank.assignCust();

    // Add three more customers
    bank.AddCustomer(4, 80, 50);
    bank.AddCustomer(5, 82, 55);
    bank.AddCustomer(6, 85, 60);


    bank.assignCust();

    bank.AddCustomer(7, 88, 50);
    bank.AddCustomer(8, 89, 59);
    bank.AddCustomer(9, 95, 63);


    bank.assignCust();
*/

}


