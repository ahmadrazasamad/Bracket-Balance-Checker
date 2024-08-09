# Bracket Balance Checker
This repository contains a C++ program that checks the balance of brackets in a given expression. The program ensures that every opening bracket ([, {, () is properly matched with its corresponding closing bracket (], }, )) in the correct order. This tool is useful for validating code snippets, mathematical expressions, or any other strings where bracket balance is crucial.
## Features
- Bracket Matching: Verifies that each opening bracket has a corresponding closing bracket.
- Error Detection: Detects mismatched or improperly nested brackets.
- Input Flexibility: Accepts any string as input for validation.
- Simple and Efficient: Utilizes a stack-based approach for efficient processing.
## How It Works
The program uses a stack to track opening brackets as they are encountered in the input expression. When a closing bracket is found, it checks if it matches the top of the stack. If it does, the bracket is removed from the stack; if not, the expression is immediately flagged as unbalanced. After processing the entire expression, if the stack is empty, the expression is balanced.
## Example
```
Enter an expression: ( [ { } ] )
Expression is balanced
```
```
Enter an expression: ( [ { ] } )
Expression is un-balanced
```
## Output
![image](https://github.com/user-attachments/assets/eca77c93-3fa6-47f6-ad70-7e168568b7e5)
![image](https://github.com/user-attachments/assets/5c75dae0-91d5-4526-b954-e6e8b55932dd)
## Contributing
Contributions are welcome! If you find a bug or have a suggestion for improvement, please open an issue or submit a pull request.
