#include <stdio.h>
#define ADD_NUM(x,y) ((x) + (y))
#define SUB_NUM(x,y) ((x) - (y))
#define MULT_NUM(x,y) ((x) * (y))
#define DIV_NUM(x,y) ((x) / (y))
int main() {
int num1;
int num2;
int operationChar;
printf("please enter 2 integers you would like to use\n");
scanf("%d %d", &num1, &num2);
printf("enter 1 for addition, enter 2 for subtraction, enter 3 for multiplication, enter 4 for division\n");
scanf("%d",  &operationChar);
if(operationChar == 1){
printf("the answer is %i\n", ADD_NUM(num1,num2));
}
else if(operationChar == 2){
printf("the answer is %i\n", SUB_NUM(num1,num2));
}
else if(operationChar == 3){
printf("the answer is %i\n", MULT_NUM(num1,num2));
}
else if(operationChar == 4){
printf("the answer is %i\n", DIV_NUM(num1,num2));
}else{}
return 0;
}


