#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int guess, nguesses = 1;
    srand(time(0));
    num = rand() % 100+ 1;
    printf("The number is %d \n", num);
    do
    {
        printf("Enter the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("Higher value please\n");
        }
        else if (guess > num)
        {
            printf("Lower value please\n");
        }
        else
        {
            printf("You got the correct answer and you took %d number of guesses \n", nguesses);
        }
        nguesses++;
    } while (guess != num);

    return 0;
}