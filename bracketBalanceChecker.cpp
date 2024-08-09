#include <iostream>
#include <string>
using namespace std;

void push(char brackets[], int &top, int size, char bracket)
{
    if (top >= (size - 1))
        return;
    top++;
    brackets[top] = bracket;
}

void pop(char brackets[], int &top)
{
    if (top < 0)
        return;
    brackets[top] = '\0';
    top--;
}

bool chckExp(string exp)
{
    const int length = exp.length();
    char brackets[length];
    int top = -1; // initially

    for (int i = 0; i < length; i++)
    {
        if ((exp[i] == '[') || (exp[i] == '{') || (exp[i] == '(') || (exp[i] == '<'))
            push(brackets, top, length, exp[i]);
        else if ((exp[i] == ']') || (exp[i] == '}') || (exp[i] == ')') || (exp[i] == '>'))
        {
            if (top == -1) // Closing bracket without an opening bracket, like if there is ], } or ) in the start 
                return false;
            else if ((exp[i] == ']' && brackets[top] == '[') || (exp[i] == '}' && brackets[top] == '{') || (exp[i] == ')' && brackets[top] == '(') || (exp[i] == '>' && brackets[top] == '<'))
                pop(brackets, top);
            else
                return false; // Mismatched brackets, wrong order/arrangement of brackets 
        }
    }

    if (top == -1) // means the stack is empty
        return true;
    return false;
}

int main()
{
    string exp;
    cout << "Enter an expression: ";
    getline(cin, exp);

    cout << "Expression is " << (chckExp(exp) ? "balanced" : "un-balanced") << endl;

    system("pause");
    return 0;
}