#include <stdio.h>
void bubble_sort(int[], int);
int main(){

    int array[100], number_of_elements, i, j;
    scanf("%d", &number_of_elements);
    for(i = 0 ; i < number_of_elements; i++){
        scanf("%d", &array[i]);
    } 
    bubble_sort(array, number_of_elements);
}

void bubble_sort(int array[], int number_of_elements){
    int i, j, swap;
    for (i = 0 ; i < number_of_elements-1; i++)
    {
        for(j = 0; j < number_of_elements-1 - i; j++ )
        {
            if (array[j]>array[j+1])
            {
                swap = array[j];
                array[j] = array[j +1];
                array[j+1] = swap;    
            }
        }    
    }
    for (i = 0 ; i < number_of_elements; i ++)
    {
        printf("%d", array[i]);
    }

}
