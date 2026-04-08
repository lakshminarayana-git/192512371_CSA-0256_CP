// check_vowel
#include <stdio.h>
int main(){
	char a;
	printf("enter a character");
	scanf("%c",&a);
	if(a=='A'||a=='a'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
		printf("yes it is vowel");
		
	}else{
		printf("no it is not vowel");
		
	}
	return 0;
}


//switch case
#include<stdio.h>
int main(){
	int a,b;
	char i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter operation[+,-,*,/]:");
	scanf(" %c", &i);
	switch(i)
	{
		case '+':
			printf("sum of two number is : %d ",a+b);
			break;
		case '-':
			printf("difference of two number is : %d ",a-b);
			break;
		case '*':
			printf("product of two number is : %d ",a*b);
			break;
		case '/':
			printf("sum of two number is : %d ",a/b);
			break;
	    default:
	    	printf("Invalid");
	    	break;
	}
}

// swapping with temporary
#include<stdio.h>
//int main(){
	int a,b,t;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a is %d and b is %d",a,b);
	return 0;
}


//saapping without  temporary
#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a is %d and b is %d",a,b);
	return 0;
}


/simple interest
#include<stdio.h>
int main(){
	int p,n;
	float r;
	printf("principal interest? no of years? rate of interest?");
	scanf("%d %d %f",&p,&n,&r);
	printf("simple interest is %.2f",(p*n*r)/100);
	return 0;
}

//reversing a digit
#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num = num / 10;               
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}



//pythogorous 
# include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c ||
	b*b==a*a+c*c||
	c*c==a*a+b*b){
		printf("%d %d %d is ttriplet",a,b,c);
	}else{
		printf("%d %d %d is not ttriplet",a,b,c);
	}
}


//prime
# include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c ||
	b*b==a*a+c*c||
	c*c==a*a+b*b){
		printf("%d %d %d is ttriplet",a,b,c);
	}else{
		printf("%d %d %d is not ttriplet",a,b,c);
	}
}


//pattern
#include<stdio.h>
int main(){
	int n,i,j;
	char c;
	printf("enter no of rows:");
	scanf("%d",&n);
	printf("enter symbol:");
	scanf(" %c",&c);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}


//odd or even
#include<stdio.h>
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if (a%2==0){
		printf("entered number is even");
		
	}else{
		printf("entered number is odd");
	}
	return 0;
}



//n natural numbers
#include<stdio.h>
int main(){
	int i,N;
	printf("N?");
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		printf("%d \n",i);
		
	}
	return 0;
}



//multiplication table
# include<stdio.h>
int main(){
	int n,i,j;
	printf("enter multiplication table:");
	scanf("%d",&n);
	printf("enter multiplication table:");
	scanf("%d",&j);
	for (i=1;i<=j;i++){
		printf("%d x %d = %d \n",n,i,n*i);
		
	}
	return 0;
}



//leap hyear
#include<stdio.h>
int main(){
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if ((year%400==0) || (year%4==0 && year%100!=0)){
		printf("leap year");
		
	}else{
		printf("no it is not a leap year");
	}
	return 0;
}



//
// check_vowel
#include <stdio.h>
int main(){
	char a;
	printf("enter a character");
	scanf("%c",&a);
	if(a=='A'||a=='a'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
		printf("yes it is vowel");
		
	}else{
		printf("no it is not vowel");
		
	}
	return 0;
}


//switch case
#include<stdio.h>
int main(){
	int a,b;
	char i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter operation[+,-,*,/]:");
	scanf(" %c", &i);
	switch(i)
	{
		case '+':
			printf("sum of two number is : %d ",a+b);
			break;
		case '-':
			printf("difference of two number is : %d ",a-b);
			break;
		case '*':
			printf("product of two number is : %d ",a*b);
			break;
		case '/':
			printf("sum of two number is : %d ",a/b);
			break;
	    default:
	    	printf("Invalid");
	    	break;
	}
}

// swapping with temporary
#include<stdio.h>
//int main(){
	int a,b,t;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a is %d and b is %d",a,b);
	return 0;
}


//saapping without  temporary
#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a is %d and b is %d",a,b);
	return 0;
}


/simple interest
#include<stdio.h>
int main(){
	int p,n;
	float r;
	printf("principal interest? no of years? rate of interest?");
	scanf("%d %d %f",&p,&n,&r);
	printf("simple interest is %.2f",(p*n*r)/100);
	return 0;
}

//reversing a digit
#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num = num / 10;               
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}



//pythogorous 
# include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c ||
	b*b==a*a+c*c||
	c*c==a*a+b*b){
		printf("%d %d %d is ttriplet",a,b,c);
	}else{
		printf("%d %d %d is not ttriplet",a,b,c);
	}
}


//prime
# include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c ||
	b*b==a*a+c*c||
	c*c==a*a+b*b){
		printf("%d %d %d is ttriplet",a,b,c);
	}else{
		printf("%d %d %d is not ttriplet",a,b,c);
	}
}


//pattern
#include<stdio.h>
int main(){
	int n,i,j;
	char c;
	printf("enter no of rows:");
	scanf("%d",&n);
	printf("enter symbol:");
	scanf(" %c",&c);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}


//odd or even
#include<stdio.h>
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if (a%2==0){
		printf("entered number is even");
		
	}else{
		printf("entered number is odd");
	}
	return 0;
}



//n natural numbers
#include<stdio.h>
int main(){
	int i,N;
	printf("N?");
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		printf("%d \n",i);
		
	}
	return 0;
}



//multiplication table
# include<stdio.h>
int main(){
	int n,i,j;
	printf("enter multiplication table:");
	scanf("%d",&n);
	printf("enter multiplication table:");
	scanf("%d",&j);
	for (i=1;i<=j;i++){
		printf("%d x %d = %d \n",n,i,n*i);
		
	}
	return 0;
}



//leap hyear
#include<stdio.h>
int main(){
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if ((year%400==0) || (year%4==0 && year%100!=0)){
		printf("leap year");
		
	}else{
		printf("no it is not a leap year");
	}
	return 0;
}



//grade
# include<stdio.h>
int main(){
	float mark;
	printf("enter your mark");
	scanf("%d",&mark);
	if (mark>85 && mark<=100){
		printf("S grade");
	
	}else if (mark>65 && mark<=80){
		printf("A grade");
	}else if (mark>50 && mark<=65){
		printf("B grade");
	}else{
		printf("Fail");
	}
	return 0;
}



//lcm_gcd
# include<stdio.h>
int main(){
	int x,y,a,b,t;
	 
	printf("enter 1st number:");
	scanf("%d",&x);
	printf("enter 2nd number:");
	scanf("%d",&y);
	a=x;
	b=y;
	while (y!=0){
		t=y;
		y=x%y;
		x=t;
	}
	printf("gcd is %d \n",x);
	printf("lcm is %d",a*b/x);
}


//factorial
# include<stdio.h>
int main(){
	int n,j,i;
	printf("enter a number:");
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++){
		j*=i;
	}
	printf("the factorial of %d is %d",n,j);
}



//count_digits
#include <stdio.h>

int main() {
    int num, reversed = 0, digit,count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; 
        reversed = reversed * 10 + digit;
        num = num / 10;
        count+=1;
    }

    printf("number of digits are:%d", count);

    return 0;
}



// armstrong 
# include<stdio.h>
# include<math.h>
int main(){
	int num,temp,digit=0,rem,sum=0;
	printf("enter a number : ");
	scanf("%d",&num);
	temp=num;
	while (temp!=0){
		temp/=10;
		digit++;
	}
	temp=num;
	while (temp!=0){
		rem=temp%10;
		sum+=pow(rem,digit);
		temp/=10;
	}
	if (sum==num){
		printf("yes %d is a armstrong number",num);
		
	}else{
		printf("No %d is not a armstrong number",num);
	}
}


///+,-,0
#include <stdio.h>
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a>0){
		printf("%d is positive",a);
	}else if(a<0){
		printf("%d is negative",a);
	}else{
		printf("%d is zero",a);
	}
	return 0;
}



//area
#include <stdio.h>
#include <stdbool.h>>
int main(){
	while(true){
		int ch,l,b,r,s,h;
	printf("1.circle,2.rectangle,3.square,4.traingle,5.exit \n");
	printf("enter your choice: ");
	scanf("%d", &ch);
	if (ch==1){
		printf("radius?");
		scanf("%d",&r);
		printf("area of circle is %f ",3.14 * r * r);
	
	}else if(ch==2){
		printf("length and breadth of rectangle");
		scanf("%d%d",&l,&b);
		printf("area of rectangle is %d and perimeter of rectangle is %d",l*b,2*(l+b));
	}else if(ch==3){
		printf("enter side");
		scanf("%d",&s);
		printf("area of square is %d and perimeter is %d",s*s,4*s);
		
	}else if(ch==4){
		printf("breadth and height?");
		scanf("%d %d",&b,&h);
		printf("area of ttriangle is: %f ",0.5*b*h);
	}else if(ch==5){
		break;
	}
	
	
	
	}
	return 0;
}
