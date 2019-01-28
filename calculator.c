#include<stdio.h>
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);
int modulo(int, int);
void display(int);
int main(){
	int a=0,b=0,c=0;
	printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n");
	scanf("%d",&a);
	printf("Enter two values\n");
	scanf("%d,%d",&b,&c);
	switch(a){
	case 1: display(addition(b,c));break;
	case 2: display(subtraction(b,c));break;
	case 3: display(multiplication(b,c));break;
	case 4: display(division(b,c));break;
	case 5: display(modulo(b,c));break;
	default : printf("Invalid one");
	}
	return 0;	
	}
int addition(int x, int y){
return x+y;
}
int subtraction(int x, int y){
return x-y;
}
int multiplication(int x, int y){
return x*y;
}
int division(int x, int y){
return x/y;
}
int modulo(int x, int y){
return x%y;
}
void display(int a){
printf("the result is %d\n", a);
}

