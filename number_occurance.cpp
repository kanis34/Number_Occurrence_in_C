/*Write a program to find out the number of occurence of a digit in a number.
Explanation if n= 12223 and d=2 it will print out 3. Because there is 3 digits which are equals to d.*/
#include<stdio.h>
int main()
{
    unsigned int num;
    int serach;
    int remainder;
    printf("Enter a number: ");
    scanf("%u",&num);

    printf("\nEnter the number you want to know the occurrence: ");
    scanf("%d",&serach);

    int arr[10] = {0};

    while(num!=0)
    {
        remainder = num%10;
        arr[remainder]++;
        num = num/10;
    }
    printf("Occurrence: %d", arr[serach]);
    return 0;
}
