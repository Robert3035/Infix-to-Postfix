/*Robert Salyers
Computer Science 2
This program takes an infix equation and translates it into postfix using a stack*/
#include <iostream>
//allow stack
#include <stack>
//allow to check for string length
#include <string>

using namespace std;

int main(){
    //create stack
    stack <char> conversion;
    //equation to be translated into postfix
    string postfix = "(((A-B)+C*D+E)/F))";

    //iterate through string to look at every character
    for(int i = 0; i < postfix.length(); i++){
      //checks for characters to push
      if(postfix[i] == '('){
        conversion.push('(');
      }
      else if(postfix[i] == '+'){
        conversion.push('+');
      }
      else if(postfix[i] == '-'){
        conversion.push('-');
      }
      //check for characters that change the stack
      else if(postfix[i] == '*'){
        while(conversion.top() == '+' || conversion.top() == '-'){
          cout << conversion.top();
          conversion.pop();
        }
        conversion.push(postfix[i]);
      }
      else if(postfix[i] == '/'){
        while(conversion.top() == '+' || conversion.top() == '-'){
          cout << conversion.top();
          conversion.pop();
        }
        conversion.push(postfix[i]);
      }
      //pops everything after an open parenthesis when there is a close parenthesis
      else if(postfix[i] == ')'){
        while(conversion.top() != '('){
          cout << conversion.top();
          conversion.pop();
        }
      }
      else{
        cout << postfix[i];
        }
      }
    }