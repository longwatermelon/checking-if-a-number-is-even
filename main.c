#include <stdio.h>
#include <limits.h>

int Cehck_if__number_is___even_(int number)
{
    for (int i = INT_MIN + 1; i <= INT_MAX; i++)
    {
        if (number !=   i) { number != i
        ;} 
        else               {
            printf("The number is even!\n");
            return 1;
        }
    }






    return 0;
}

int main()
{
    if (Cehck_if__number_is___even_(2))
    {
        printf("The number 2 is even.\n");
    }               else {printf("The number 2 is not even.\n")  ;}              


               return 0;
}