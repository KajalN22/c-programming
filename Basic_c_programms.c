


//String -------------------------------------------------------------------

/*
//1. Write a program which accepts a sentence from the user and alters it as follows: Every space is
//replaced by *, case of all alphabets is reversed, digits are replaced by ?.
#include <stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX_LENGTH 100
void alterSentence(char sentence[]);
int main()
 {
    char sentence[MAX_LENGTH];

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);

    alterSentence(sentence);

    printf("Altered sentence: %s\n", sentence);

    return 0;
}

void alterSentence(char sentence[])
 {
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            sentence[i] = '*';
        } else if (isdigit(sentence[i])) {
            sentence[i] = '?';
        } else {
            if (islower(sentence[i])) {
                sentence[i] = toupper(sentence[i]);
            } else if (isupper(sentence[i])) {
                sentence[i] = tolower(sentence[i]);
            }
        }
        i++;
    }
}

*/


 /*
//2. Write a program that accepts n strings and displays the longest string. Use array of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char strings[100][100], longest[100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();
    // Accepting the strings
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets( strings[i], sizeof(strings[i]),stdin);
        strings[i][strcspn(strings[i], "\n")]= '\0';
    }

    // Finding the longest string
    strcpy(longest, strings[0]);
    for (i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(longest)) {
            strcpy(longest, strings[i]);
        }
    }

    // Displaying the longest string
    printf("The longest string is: %s\n", longest);

    return 0;
}
*/




//3. Write a menu driven program to perform the following operations on strings using standard library
//functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase, Lowercase, Check case.

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i,choice;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nString Operations Menu:\n");
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenation\n");
    printf("4. Comparison\n");
    printf("5. Convert to Uppercase\n");
    printf("6. Convert to Lowercase\n");
    printf("7. Check Case\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of the string: %zu\n", strlen(str1));
            break;
        case 2:
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;
        case 3:
            printf("Enter another string: ");
            getchar();  // Clearing the newline character from the input buffer
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';  // Removing the trailing newline character
            strcat(str1, str2);
            printf("Concatenated string: %s", str1);
            break;
        case 4:
            printf("Enter another string: ");
            getchar();  // Clearing the newline character from the input buffer
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';  // Removing the trailing newline character
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal\n");
            } else {
                printf("Strings are not equal\n");
            }
            break;
        case 5:
        	
            for ( i = 0; str1[i] != '\0'; i++) {
                str1[i] = toupper(str1[i]);
            }
            printf("Uppercase string: %s\n", str1);
            break;
        case 6:
             for (i = 0; str1[i] != '\0'; i++) {
                str1[i] = tolower(str1[i]);
            }
            printf("Lowercase string: %s\n", str1);
            break;
    }
}
    */


//Functions--------------------------------------------------------------------------------------------
/*
//1. WAP to accept an array of n integers and calculate sum of odd numbers and even numbers using the
//pointer to an array.

    #include <stdio.h>
    void calculateSum(int *arr, int size, int *evenSum, int *oddSum);

    int main()
 {
    int i,arr[100], size, evenSum = 0, oddSum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
 
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++)
        {
          scanf("%d", &arr[i]);
        }

    calculateSum(arr, size, &evenSum, &oddSum);

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}


    void calculateSum(int *arr, int size, int *evenSum, int *oddSum)
{
	int i;
    for ( i = 0; i < size; i++)
        {
         if (arr[i] % 2 == 0)
          {
            *evenSum += arr[i];
          }
    else {
            *oddSum += arr[i];
        }
        }
}

*/


/*
//2. Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and
//0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd.
#include<stdio.h>
int isEven (int num)
{

	if (num%2==0)
	{
	printf("\n %d is Even number", num);
	return 1;
    }
    else

    {
    printf("\n %d is Not Even number", num);
    return 0;
   }
}

int main()
{
   int n, num;
    printf("\n Enter the number of values to check: ");
    scanf("%d", &n);
    int i;
    for ( i = 1; i <= n; i++)
	{
        printf("\n Enter number %d: ", i);
        scanf("%d", &num);
        isEven(num);
    }

	return 0;
}
*/


/*
//3. Write a function isPrime, which accepts an integer as parameter and returns 1 if the number is prime
//and 0 otherwise. Use this function in main to display the first 10 prime numbers.


#include<stdio.h>
#include<math.h>
int isPrime (int);
int main()
{
    int num;
    int count= 0;
    printf("The first ten prime numbers are:\n ");
    while(count<10)
    {
    	if (isPrime(num))
       {
    printf("%d \n", num);
    count++;
       }
       num++;
   }

    return 0;
}
    int isPrime(int num)
    {
    if(num<=1)
    {
    	return 0; //not a prime number

	}
	int i;
    for ( i = 2; i <= num/2; i++)
	{
        if(num%i==0)
        {
        	return 0; //not a prime number
		}
    }

return 1; //prime number

}
*/


/*
//4. For the following standard functions, write corresponding user defined functions and write a menu
//driven program to use them. strcat, strcmp, strrev, strupr.



#include <stdio.h>
#include <string.h>

void my_strcat(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int my_strcmp(char *str1, char *str2) {
    while (*str1 && *str2 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

void my_strrev(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void my_strupr(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: \n");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);

    printf("\nString Functions Menu:\n");
    printf("1. Concatenation\n");
    printf("2. Comparison\n");
    printf("3. Reverse \n");
    printf("4. Convert to Uppercase\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch (choice)
	{
        case 1:
        	my_strcat(str1,str2);
            printf("Concateneted strings: %s \n",str1);
            break;
        case 2:
            if(my_strcmp(str1,str2)==0)
            {
            printf("Strings are equal\n");
            }
			else{
				printf("Strings are not equal \n");
			}
            break;
        case 3:
        	my_strrev(str1);
            printf("Reversed string: %s ",str1);
            break;
        case 4:
        	my_strupr(str1);
            printf("Uppercase string:%s \n",str1);

            break;
    }
}
*/


 /*
//5. Write a function power, which calculates x raised to y . Write another function, which calculates n! Using
//for loop. Use these functions to calculate the sum of first n terms of the Taylor series:
  //                      sin(x) = x - 3! 3 x + 5! 5 x + ……
  
  #include<stdio.h>
  double power(double x, int y) ;
  int factorial(int n);
  double calculateSin(double x, int n);
  
  int main()
{
	double x;
	int n;
	printf("Enter the value of x : \n");
	scanf("%lf",&x);
	printf("Enter the number of terms: \n");
	scanf("%d", &n);
	
	double sum=calculateSin(x,n);
	printf("The sum of first %d terms of the taylors series for sin(%2lf) is : %4lf \n", n,x,sum);
	return 0;
}
double power(double x, int y) {
    double result = 1;
    int i;
    for (i = 1; i <= y; i++) 
    {
        result *= x;
    }
    return result;
}
int factorial(int n) {
    int i, result = 1;
    for ( i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calculateSin(double x, int n) {
    double result = 0;
    int i,sign = 1;
    for (i = 1; i <= n; i += 2) {
        result += (sign * power(x, i)) / factorial(i);
        sign *= -1;
    }
    return result;
}

*/


/*
//6. Write a recursive C function to calculate the GCD of two numbers. Use this function in main.
     // The GCD is calculated as :
                  // gcd(a,b) = a if b = 0
                                 //  = gcd (b, a mod b) otherwise.

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int result = gcd(num1, num2);
    
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}
*/



/*
//7. Write a recursive C function to calculate x raised to y . (Do not use standard library function)

#include <stdio.h>

double power(double x, int y) {
    if (y == 0) {
        return 1;
    } else if (y > 0) {
        return x * power(x, y - 1);
    } else {
        return 1 / (x * power(x, -y - 1));
    }
}

int main() {
    double base;
    int exponent;
    
    printf("Enter the base number: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);
    
    return 0;
}
*/


/*
//8. Write a recursive function to calculate the sum of digits of a number till you get a single digit number.
  //     Example: 961 -> 16 -> 5. (Note: Do not use a loop)
  
  #include <stdio.h>

int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    } else {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sumOfDigits(sum);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sumOfDigits(number);
    
    printf("The sum of digits of %d is %d\n", number, result);
    
    return 0;
}
*/


/*
9. Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the
first n Fibonacci numbers.
     The recursive definition of nth Fibonacci number is as follows:
              fib(n) = 0 if n = 1
                         = 1 if n = 2
                         = fib(n-2) + fib(n-1) if n>2

    */
    
 /*   
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long long fibo(int num) 
{
    if(num == 0)      //Base condition
        return 0;
    else if(num == 1) //Base condition
        return 1;
    else 
        return fibo(num-1) + fibo(num-2); 
}

void displayFibonacciSeries(int n) 
{
	int i;
    printf("The first %d Fibonacci numbers are: ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
       unsigned long long fibonacci;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    fibonacci=fibo(n); 
    
    printf("%dth fibonacci term is %llu \n", n, fibonacci);
    displayFibonacciSeries(n);
    
    return 0;
}
*/
