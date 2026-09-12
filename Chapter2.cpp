/*Comparison operators copare two values and return a boolean result
1 = true, 0 = false
Comparison operators are >, <, ==, !=, >=, <=
*/

#include <iostream>
using namespace std; 
int main(){
    int a = 7; 
    cout << (a > 4) << endl; // true, 1
    cout << (a<=7) << endl; // true, 1
    cout << (a>=8) << endl; // false, 0
    cout << (a<4) << endl; //false, 0
    cout << (a==4) << endl; //0
    cout << (a!=4) << endl; // 1

    /* logical operators: && (AND), || (OR), ! (NOT)
    && is true if both are true
    !! is true if either one is true
    ! is true if exxpression is false and vice versa*/

    int age = 24, salary = 950, result; 
    result = (age >=18) && (salary > 600);
    cout << result << endl;  // 1
    result = (age >= 18) && (salary > 1000); 
    cout << result << endl; //0

    result = (age >=18) || (salary > 1000); 
    cout << result << endl; //1
    result = (age >=30) || (salary > 1000); 
    cout << result << endl; 

    cout << !(age >=18) << endl; //(age>=18) = TRUE, so !TRUE is FALSE/0
    cout << !(age>=30) << endl; // FALSE, so !FALSE is TRUE

    /* if statement syntax: if(condition) { code to execute }*/
    int number = 4; 
    if(number>0){
        cout << "number is greater than 0" << endl; 
    }
    cout << "code outside if statement" << endl; 

    number = -4; 
    if(number>0){
        cout << "number is positive" << endl;
    }
    cout << "outside if statement" << endl; 

    /* if else statement syntax: true = if executed, false = else executed
    if (condition){ 
         //body of if
    } else { 
        //body of else
     }*/
    cout << "Welcome to an if else statement, enter a number to evaluate: " << endl; 
    int input_number; 
    cin >> input_number; 
    
     if(input_number>0){
        cout << "Number is positive" << endl;
     } else if (input_number == 0){
        cout << "Number is 0" << endl; 
    }
     else {
        cout << "Number is negative" << endl; 
     }
     /* you can also write an if statement like this:
        if (number > 0)
         cout << "number is positive"
        else 
          cout << "number is negative";
     */

     /* For Loops: there are three types (For, while, and do while)
     Syntax for a for loop is
     for(initialization; condition; update) { 
        //the loop body
        }
        
    the intialization statement is executed only once at the beginning
    the condition is evaluted
    if the condition is true, the body of the loop is executed, and the update is performed
    again, condition is evaluated
    the process goes on until condition evaluates to false
    if the condition is false, the loop is terminated
    */
   for (int i = 0; i<3; ++i){
    cout << "The value of i is " << i << endl; 
   }
   cout << "Time for the alphabet" << endl;
   for (char letter = 65; letter <=90; letter++){
    cout << letter << " ";
   }
   cout << endl;
   for(char letter = 97; letter <=122;  letter++){ 
    cout << letter << " ";
   }
   cout << endl; 
   //calculate the sum of 1 to 100
   int sum = 0;
   for(int i=1; i<=100; ++i){
    sum = sum + i;
   }
   cout << "the sum of 1 to 100 is " << sum << endl;

   /*Infinit for loops happend when the condition never evaluates to false
   example:
   for(int i = 1; i <=4; i--){
    cout << i
   }
    reacp: a for loop is used to repeat a block of code
    the loop runs as long as the test condition is true
    if the test condition never evaluates to false, the loop runs endlessly. (infinite loop)*/
    return 0;
}
