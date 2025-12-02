// what is C : second most significant language after assembly, light, reliable, fast, close to hardware 
// 
// basic data type "int" --> 0, 2, -5 ..."float" --> 3.24, 12.1 ...   "double" --> 3.124512 ... "char" --> for single characters 'a', 'b', 'Z'
// 
// +, -, *, /, % ... / --> for quotient, % --> for remainders
// 
// printf(" desired message ")
// 
// == variables ==
// int age = 25;
// float salary = 250021.02;
// double pi = 3.141592;
// char grade = 'A';

#include <stdio.h>

// function
int main(){
    printf("Hello Prachi \n");
    
    int age = 27;
    float salary = 2551.10;
    double pi = 23.1231452;
    char grade = 'A';
    
    
    printf("Age of my sibling : %d, %.2f, is my salary \n .. Do you know the value of pi is %.10f \n ... Do you know my grade in class 4th %c", age, salary, pi, grade);
    
    
    int userAge = 21;
    int userA = 233;
    int userB = 24;
    
    printf("Holly molly : this is user age %d, Holla userA %d, Jholla userB %d", userAge, userB, userA);
}

