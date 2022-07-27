#include<stdio.h>

// void bubble_sort(int arr[], int n)
// {
//     int k;
//     for (int i=0; i<n; i++)
//     {
//         for (int j=i+1; j<n; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                 k=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=k;
//             }
//         }
//     }

// }

void selection_sort(int arr[], int n)
{  
    int k=0;
    while(k<n)
    {
        int small=k;
        for (int i=k+1; i<n; i++)
        {
            if(arr[small]>arr[i])
            {
                small=i;
            }
        }
        int temp=arr[small];
        arr[small]=arr[k];
        arr[k]=temp;

        k++;
    }    
}

void print_array(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
}


int main()
{   
    //initialization
   int arr[]={2,1,5,3,4,8,7,9,6}; //array initialization
   int n=sizeof(arr)/sizeof(arr[0]); //size of array
    

    //before 
    printf("The array before sorting is:\n");
    print_array(arr, n);
    printf("\n");

    //bubble_sort(arr, n);

    selection_sort(arr, n); //sorting method

    //after
    printf("The array after sorting is:\n");
    print_array(arr, n);


}