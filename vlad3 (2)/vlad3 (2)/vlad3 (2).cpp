#include <stdio.h>
#include <random>

int main()
{
   
	int M[100],amount = 0, k_element = 0, n = 0, a = 0;
    bool boolean = 0;
    printf("input k = ");
    
    boolean = scanf_s("%d", &k_element);
    while (boolean != 1) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &k_element);
    }
   
    printf("input n = ");
    
    boolean = scanf_s("%d", &n);
    while (boolean != 1) 
    {
        printf("Pls try again\n");
        rewind(stdin);
        boolean = scanf_s("%d", &n);
    }
    printf("input array elements: \n");
    for (int i = 0; i < n; i++)
    {
        a++;
        amount++;
        boolean = scanf_s("%d", &M[amount]);
        while (boolean != 1)
        {
            printf("Pls try again\n");
            rewind(stdin);
            boolean = scanf_s("%d", &M[amount]);
        }
        if ( a % k_element == 0)
        {
            amount++;
            M[amount] = 0;
        }
    }
    for (int i = 1; i <= amount; i++)
        printf("%d ", M[i]);

   
   
	return 0;
}