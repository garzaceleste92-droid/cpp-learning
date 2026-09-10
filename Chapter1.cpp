//Comment
#include <iostream>
using namespace std; //comment

/* multiline comment
comment line 2 */
int main() {

//implicit type conversion is when one type auto converts

    int num = 18; 
    double sum;
     sum = num + 4.5; 
    cout << "Sum: " << sum << endl; //22.5

//explicit type conversion occurs when one type manually converts
//this is called TYPE CASTING    

    double num1 = 5.4, num2 = 10.6; 
    int data1 = (int)num1; 
    int data2 = (int)num2; 

    cout << "data1: " << data1 << endl << "data2: " << data2;
    cout << endl;
    //Multiply Floating-Point Numbers
    double number1, number2, product; 
    cout << "Enter two numbers: " << endl; 
    cin >> number1 >> number2; 
    product = number1 * number2;
    cout << "The product is " << product; 
    cout << endl;
    //use ++ and -- operators
    //++ and -- can only be used with integers
    //they can be used as ++n1 or n1++
    int n1 = 5, n2 = 4; 
    ++n1;
    --n2; 
    cout << "n1 = " << n1 << endl; 
    cout << "n2 = " << n2 << endl;
    //find the size of variables
    //the sizeof operator gives the size in bytes
    char char_type; 
    int int_type; 
    float float_type;
    double double_type; 
    cout << "char: " << sizeof(char_type) << endl;
    cout << "int: " << sizeof(int_type) << endl;
    cout << "float: " << sizeof(float_type) << endl; 
    
    cout << "double: " << sizeof(double_type) << endl;
    //use float when you need LESS precision
    
    //swap two numbers
    int swap1 = 5, swap2 = 10; 
    cout << "num1 (before swap): " << swap1 << endl; 
    cout << "num2 (before swap): " << swap2 << endl; 
    int temp = swap1; 
    swap1 = swap2; 
    swap2 = temp; 
    cout << "num1 (after swap): " << swap1 << endl; 
    cout << "num2 (after swap): " << swap2 << endl;
    
return 0;
}