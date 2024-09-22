#include <iostream.h>
#include<conio.h>
// Function prototypes
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main() {
    float num1, num2;
    int operation;
    clrscr();
    cout << "Welcome to the basic calculator!" << endl;

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display operations
    cout << "Select operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    // Input operation choice
    cout << "Enter operation (1/2/3/4): ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation) {
	case 1:
	    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
	    break;
	case 2:
	    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
	    break;
	case 3:
	    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
	    break;
	case 4:
	    if (num2 != 0) {
		cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
	    } else {
		cout << "Error! Division by zero." << endl;
	    }
	    break;
	default:
	    cout << "Invalid operation selected!" << endl;
	    break;
    }

    getch();
}

// Function definitions
float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}
