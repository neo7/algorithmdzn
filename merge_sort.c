# include <stdio.h>
void topDownSplitMerge(int[], int, int, int[]);
void topDownMerge(int[], int, int, int, int[]);
void copyArray(int[], int, int, int[] );
void topDownMergeSort(int[], int[], int);

int main(){
	
	int arrayA[100], num_of_elements, i, arrayB[100];
	scanf("%d", &num_of_elements);
	for (int i = 0; i < num_of_elements; i++)
	{
		scanf("%d", &arrayA[i]);
	
	}
	topDownMergeSort(arrayA, arrayB, num_of_elements);
	for (i = 0; i < num_of_elements; i++){
		printf("%d", arrayA[i]);
	}
	
}
void topDownMergeSort(int arrayA[], int arrayB[], int n)
{
	topDownSplitMerge(arrayA, 0, n, arrayB);
}

void topDownSplitMerge(int arrayA[], int iBegin, int iEnd, int arrayB[])
{
	if (iEnd - iBegin < 2)
		return;
	int iMiddle = (iEnd + iBegin)/2;
	topDownSplitMerge(arrayA, iBegin, iMiddle, arrayB);
	topDownSplitMerge(arrayA, iMiddle, iEnd, arrayB);
	topDownMerge(arrayA, iBegin, iMiddle, iEnd, arrayB);
	copyArray(arrayB, iBegin, iEnd, arrayA);
}

void topDownMerge(int arrayA[], int iBegin, int iMiddle, int iEnd, int arrayB[])
{
	int i0 = iBegin, i1 = iMiddle, j;
	for (j = iBegin ; j < iEnd; j++)
	{
		if(i0 < iMiddle && (i1 >= iEnd || arrayA[i0]<= arrayA[i1] ))
		{
		arrayB[j] = arrayA[i0];
		i0 = i0+1;

		}else
		{
		arrayB[j] = arrayA[i1];
		i1 = i1 +1; 

		}
	}
}

void copyArray(int arrayB[],int iBegin, int iEnd, int arrayA[])
{	int k;
	for (k = iBegin; k < iEnd; k++)
	{
		arrayA[k] = arrayB[k];
	}
}
