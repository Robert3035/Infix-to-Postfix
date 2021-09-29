#include <iostream>
//allow stack
#include <stack>
//allow to check for string length
#include <string>

using namespace std;

int main(){
    //create stack
    stack <char> conversion;
    string postfix = "(((A-B)+C*D+E)/F))";

    //iterate through string to look at every character
    for(int i = 0; i < postfix.length(); i++){
      if(postfix[i] == '('){
        conversion.push('(');
      }
      else if(postfix[i] == '+'){
        conversion.push('+');
      }
      cout << postfix[i] << endl;
    }

}