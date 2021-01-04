#include<stdio.h>
#include<math.h>
int main()
{
    int basefrom, number, decimal, baseto;
    int digits;
    digits = 0;
    int remainder, reverse;
    decimal = 0;
    remainder = 0;
    reverse = 0;
    printf("Number: ");
    scanf("%d", &number);
    printf("Base you need to convert from (less than equal 10): ");
    scanf("%d", &basefrom);
    printf("Base you need to convert to (less than equal 10): ");
    scanf("%d", &baseto);

    //digit counter
    int numbercopy;
    numbercopy = number;
    while(numbercopy != 0)
    {
        digits = digits + 1;
        numbercopy = numbercopy/10;
    }
    //printf("%d\n", digits);

    //converting number from basefrom to decimal
    if(basefrom != 0)
    {
        numbercopy = number;
        for(int i = 1; i <= digits; i++)
        {
            decimal = decimal + (numbercopy%10)*pow(basefrom, i-1);
            numbercopy = numbercopy/10;
        }
    }
    else 
    {
        decimal = number;
    }
    //printf("%d\n", decimal);

    //Getting converted number in reverse order
    while(decimal != 0)
    {
        remainder = (remainder*10) + (decimal%baseto);
        decimal = decimal/baseto;
    }
    printf("Reversed answer: %d\n", remainder);

    //Reversing the obtained number (stored in remainder) to get the conversion (storing it in reverse)
    /*while(remainder > 0)
    {
        reverse = (remainder*10) + (remainder%10);
        remainder = remainder/10;
    }
    printf("Conerted answer: %d", reverse);*/

    return 0;
}

/*Errors in code- 
1.Zeroes at start and end are not being printed.
2. Answer is in reverse order.*/