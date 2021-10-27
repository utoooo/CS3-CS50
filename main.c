#include <stdio.h>

int main(void) {
    long number = 0;
    long min = 0;
    long max = 0;
    long total = 0;
    long count = 0;
    float average = 0.0;


    printf("Enter a number (enter 0 to stop):");
    scanf("%ld", &number);
    min = number;
    max = number;
    while (number != 0)
    {
        if (number < min)
            min = number;
        if (number > max)
            max = number;
        total += number;
        count ++;
        printf("Enter a number (enter 0 to stop):");
        scanf("%ld", &number);
    }
    printf("\n");
    if (count == 0)
        printf("No number is read\n");
    else 
        average = (float)total / count;
        printf("Count is: %ld\n", count);
        printf("Minumum is: %ld\n", min);
        printf("Maximum is: %ld\n", max);
        printf("Total is: %ld\n", total);
        printf("Average is: %6.2f\n",average);
return 0;
  
}