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
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        return operand1 / operand2;
    case '^':
        return pow(operand1, operand2);
    default:
        return 0;
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(const string &expression)
{
    stack<int> operands;

    // Traverse from left to right
    for (int i = 0; i < expression.length(); ++i)
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
    string expression = "56+7*84/-";
    // cout << "Enter postfix expression: ";
    // cin >> expression;

    int result = evaluatePostfix(expression);
    cout << "The result of the postfix expression is: " << result << endl;

    return 0;
}
