#include <bits/stdc++.h>
using namespace std;

// Check if it's a number
bool isOperand(char ch)
{
    return isdigit(ch);
}

// Function to perform arithmetic operations
int applyOperation(int operand1, int operand2, char operation)
{
    switch (operation)
    {
    case '+':
        return operand2 + operand1;
    case '-':
        return operand2 - operand1;
    case '*':
        return operand2 * operand1;
    case '/':
        return operand2 / operand1;
    case '^':
        return pow(operand2, operand1); // Power operation
    default:
        return 0;
    }
}

// Function to evaluate a prefix expression
int evaluatePrefix(const string &expression)
{
    stack<int> operands;

    // Start from the rightmost character in the prefix expression
    for (int i = expression.length() - 1; i >= 0; --i)
    {
        char ch = expression[i];

        // If the character is an operand (number), push it to the stack
        if (isOperand(ch))
        {
            // Convert char to int
            // '9' - '0' = 9
            // '-' - '0' = other value
            operands.push(ch - '0');
        }

        // If the character is an operator, pop two operands, apply the operator, and push the result back
        else
        {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = applyOperation(operand1, operand2, ch);
            operands.push(result);
        }
    }

    // The final result will be the only element in the stack
    return operands.top();
}

int main()
{
    string expression = "-*+567/84";
    int result = evaluatePrefix(expression);
    cout << "The result of the prefix expression is: " << result << endl;

    return 0;
}
