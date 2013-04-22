# include <iostream>
using namespace std;
int main(){
    //int unsorted_array[20] = {19,18,17,16,15,14,9,8,7,6,5,4,3,2,1,13,12,11,10,20};
    //creating an array with help of user
    //n = length of array given by the user
    // Array is input by the user
    int n;
    cout<<"Enter Array Length"<<endl;
    cin>>n;
    const int size = n;
    int unsorted_array[size];
    int input_counter = 0;
    while (input_counter < n)
    {   int number;
        cin>>number;
        unsorted_array[input_counter] = number;
        input_counter = input_counter+1;
    }


        for (int j = 1; j<= sizeof(unsorted_array)/sizeof(unsorted_array[0]); j++){
            int key = unsorted_array[j];
            int i = j-1;
            while(i>=0 && unsorted_array[i]>key)
            {
                unsorted_array[i+1] = unsorted_array[i];
                i = i - 1;
                unsorted_array[i+1] = key;
            }
        }
        for (int i = 0; i < sizeof(unsorted_array)/sizeof(unsorted_array[0]); i++)
        {
            cout<<unsorted_array[i]<<'\t';
        }
        cout<<endl;
    }


