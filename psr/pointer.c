#include <stdio.h>
void swap(int* a , int* b);
int main()
{
        int x = 4;
        int y = 15;
        printf("x is %d, y is %d\n", x,y);
        swap (&x,&y);
        printf("After swap, x is %d, y is %d\n", x,y);
}
void swap(int* a, int* b)
        {
            int tmp = *b;
            *b = *a;
            *a = tmp;
        }


