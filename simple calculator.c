#include <stdio.h>
#include <cs50.h>
/* it's simple calculator by Atef Lassoued, used C language */
int main() {
    /* Variables declarations */
      int num1 = get_int("enter a first number: \n"); 
      char ope = get_char("enter an operator: \n"); 
      int num2 = get_int("enter a second number: \n");
      /* Conditionals */
      if(ope=='+') {
          printf("%d\n",num1+num2);
      }
      else if(ope=='-') {
          printf("%d",num1-num2);
      }
      else if(ope=='/') {
          printf("%d",num1/num2);
      }
      else if(ope=='*') {
          printf("%d",num1*num2);
      }
      else if(ope=='%') {
          printf("%d",num1%num2);
      }
}