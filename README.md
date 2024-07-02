# Personal-Info
The Personal Info project successfully meets the requirements by implementing robust input validation for user-provided name, age, and salary. The program ensures data integrity and provides a user-friendly experience by repeatedly prompting for correct inputs and allowing multiple entries. 
# Problem Statement
The objective of the PersonalInfo project is to create a program that prompts the user to enter their name, age, and salary. The program must ensure the name contains only letters, the age is a positive integer, and the salary is a non-negative float. Additionally, the program should allow multiple entries until the user decides to exit by entering "no".
# Challenges and Resolution

1. Validating Name Input: Ensuring the name contains only letters was challenging because users might inadvertently enter non-alphabetic characters. This was resolved by using the **isalpha** function within a loop to validate each character of the input string.

2.Validating Age Input: The age input had to be a positive integer. The challenge was to detect and handle non-integer inputs and negative numbers. This was managed by using a custom validation function **is_valid_integer** which checks if the input string is a valid integer, followed by checking if the integer value is positive.

3.Validating Salary Input: Ensuring the salary is a non-negative float required handling invalid float inputs and negative numbers. This was resolved by using **cin.fail** to detect invalid inputs and a condition to check for non-negative values.

4.Handling User Choices: Ensuring that the user could only input **"yes"** or **"no"** to continue or exit the program. This was managed by a loop that repeatedly prompts for input until a valid response is provided.

#Instructions

1.Compile and Run: Compile the program using a C++ compiler and run the executable.
2.Input Data: Enter the requested information when prompted. Ensure the name contains only letters, the age is a positive integer, and the salary is a non-negative float.
3.Repeat or Exit: After each entry, respond with "yes" to enter another person's information or "no" to exit the program

