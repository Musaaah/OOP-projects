//AUTHOR:MOSES WACHIRA
//REG NO: BSE-05-0193/2024
//PROJECT NAME:LIBRARY MANAGEMENT
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    string bookID, dueDateStr, returnDateStr;
    int year, month, day;
    struct tm dueDate = {0}, returnDate = {0};
    time_t dueTime, returnTime;
    double seconds;
    int daysOverdue = 0, fine = 0;

    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (YYYY-MM-DD): ";
    cin >> dueDateStr;
    cout << "Enter Return Date (YYYY-MM-DD): ";
    cin >> returnDateStr;

    sscanf(dueDateStr.c_str(), "%d-%d-%d", &year, &month, &day);
    dueDate.tm_year = year - 1900;
    dueDate.tm_mon = month - 1;
    dueDate.tm_mday = day;
    sscanf(returnDateStr.c_str(), "%d-%d-%d", &year, &month, &day);
    returnDate.tm_year = year - 1900;
    returnDate.tm_mon = month - 1;
    returnDate.tm_mday = day;

    dueTime = mktime(&dueDate);
    returnTime = mktime(&returnDate);
    seconds = difftime(returnTime, dueTime);
    daysOverdue = seconds / (60 * 60 * 24);
    
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fine = daysOverdue * 20;
        } else if (daysOverdue <= 14) {
            fine = 7 * 20 + (daysOverdue - 7) * 50;
        } else {
            fine = 7 * 20 + 7 * 50 + (daysOverdue - 14) * 100;
        }
    }

    cout << "\nBook ID: " << bookID << endl;
    cout << "Due Date: " << dueDateStr << endl;
    cout << "Return Date: " << returnDateStr << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine: Sh. " << fine << endl;

    return 0;
}

