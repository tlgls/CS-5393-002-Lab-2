// Name: Tiffany Nguyen & Jocelin Juarez
// Class: 5393-002 Data Structures in C++

#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check for balanced parentheses/brackets
bool isBalanced(const string &expression){
    stack<char> s;
    for(char ch : expression){
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}'){
            if(s.empty())
                return false; // returns false if there's an opening pair
            char top = s.top();
            if((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{') ) { // checks if there are parentheses/brackets on both sides
                return false; // returns false if there's a mismatched pair
            }
            s.pop(); // removes the top element from the stack
        }

    }
    return s.empty(); // stack should be empty if it's balanced
}

int main(){
    string expression1 = "[(x+y)/(x-y)] * [t[5]+u/(v*(w+y))];";
    string expression2 = "[(x+y)/(x-y)] * [t[5]+u/(v*(w+y))";

    if(isBalanced(expression1)){
        cout << "Expression 1 is balanced." << endl;
    } else {
        cout << "Expression 1 is not balanced." << endl;
    }

    if(isBalanced(expression2)){
        cout << "Expression 2 is balanced." << endl;
    } else {
        cout << "Expression 2 is not balanced." << endl;
    }

    return 0;
}