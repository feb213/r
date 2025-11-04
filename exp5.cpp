#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if brackets are matching pairs
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if expression is well parenthesized
bool isWellParenthesized(const string &expr) {
    stack<char> st;

    for (char ch : expr) {
        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // If closing bracket, check for matching pair
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty() || !isMatchingPair(st.top(), ch)) {
                return false; // mismatch or no opening bracket
            }
            st.pop(); // matched, remove top
        }
    }

    // If stack is empty, expression is well parenthesized
    return st.empty();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression);

    if (isWellParenthesized(expression)) {
        cout << "The expression is well parenthesized." << endl;
    } else {
        cout << "The expression is NOT well parenthesized." << endl;
    }

    return 0;
}

