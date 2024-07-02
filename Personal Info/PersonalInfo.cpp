#include <iostream>
#include <string>
#include <limits>
#include <cctype>

using namespace std;

// Function to check if a string contains only letters
bool is_alpha(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

// Function to check if the input is a valid integer
bool is_valid_integer(const string& str) {
    if (str.empty() || ((!isdigit(str[0])) && (str[0] != '-') && (str[0] != '+'))) return false;
    char *p;
    strtol(str.c_str(), &p, 10);
    return (*p == 0);
}

int main() {
    string name;
    string age_input;
    int age;
    float salary;
    string choice;

    do {
        // Input and validate name
        while (true) {
            cout << "Enter your name: ";
            getline(cin, name);
            if (is_alpha(name)) {
                break;
            } else {
                cout << "Invalid input. Name must contain only letters. Please try again." << endl;
            }
        }

        // Input and validate age
        while (true) {
            cout << "Enter your age: ";
            getline(cin, age_input);
            if (is_valid_integer(age_input)) {
                age = stoi(age_input);
                if (age > 0) {
                    break;
                } else {
                    cout << "Invalid input. Age must be a positive integer. Please try again." << endl;
                }
            } else {
                cout << "Invalid input. Age must be a positive integer. Please try again." << endl;
            }
        }

        // Input and validate salary
        while (true) {
            cout << "Enter your salary: ";
            cin >> salary;
            if (cin.fail() || salary < 0) {
                cin.clear(); // clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                cout << "Invalid input. Salary must be a non-negative float. Please try again." << endl;
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear the newline character left in the buffer
                break;
            }
        }

        cout << "Hello, " << name << ", you are " << age << " years old and your salary is $" << salary << "." << endl;

        while (true) {
            cout << "Do you want to enter another person's information? (yes/no): ";
            getline(cin, choice);
            if (choice == "yes" || choice == "no") {
                break;
            } else {
                cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
            }
        }
    } while (choice == "yes");

    return 0;
}
