#include<stdio.h>
void insertion_sort(int [], int );

int main()
{
    int array[100], num_of_elements, i, j;
    scanf ("%d", &num_of_elements); 
    for (i = 0; i < num_of_elements; i ++)
    {
        scanf("%d", &array[i]);
    }
    insertion_sort(array, num_of_elements);
}

void insertion_sort(int array[], int  num_of_elements)
{
    int i,j,swap;
    for (i = 0 ; i < num_of_elements; i++){
        j = i;
        while (j>0 && array[j-1]>array[j]){
            swap = array[j-1];
            array[j-1] = array[j];
            array[j] = swap;
            j = j -1;
        }
    }

    for (i = 0; i < num_of_elements; i ++)
    {
        printf ("%d", array[i]);
    }
}
