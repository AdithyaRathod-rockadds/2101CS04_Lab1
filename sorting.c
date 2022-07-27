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

// void selection_sort(int arr[], int n)
// {  
//     int k=0;
//     while(k<n)
//     {
//         int small=k;
//         for (int i=k+1; i<n; i++)
//         {
//             if(arr[small]>arr[i])
//             {
//                 small=i;
//             }
//         }
//         int temp=arr[small];
//         arr[small]=arr[k];
//         arr[k]=temp;

//         k++;
//     }    
// }

// void insertion_sort(int arr[], int n)
// {  
//     for (int i=1; i<n; i++)
//     {
//         int current= arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
// }


void merge_sort(int a[], int length)
{
  merge_sort_recursion(a, 0, length - 1);
}


void merge_sort_recursion(int a[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;
  
    merge_sort_recursion(a, l, m);
    merge_sort_recursion(a, m + 1, r);
  
    
    merge_sorted_arrays(a, l, m, r);
  }
}


void merge_sorted_arrays(int a[], int l, int m, int r)
{
  int left_length = m - l + 1;
  int right_length = r - m;
  
  int temp_left[left_length];
  int temp_right[right_length];
  
  
  int i, j, k;
  
  
  for (int i = 0; i < left_length; i++)
    temp_left[i] = a[l + i];
  
  
  for (int i = 0; i < right_length; i++)
    temp_right[i] = a[m + 1 + i];
  
  
  for (i = 0, j = 0, k = l; k <= r; k++)
  {
    if ((i < left_length) &&
        (j >= right_length || temp_left[i] <= temp_right[j]))
    {
      a[k] = temp_left[i];
      i++;
    }
    else
    {
      a[k] = temp_right[j];
      j++;
    }
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

    // selection_sort(arr, n);

    // insertion_sort(arr, n);

    merge_sort(arr, n);

    //after
    printf("The array after sorting is:\n");
    print_array(arr, n);
}