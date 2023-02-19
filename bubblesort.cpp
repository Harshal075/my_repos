#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int n)
{
    for( int i = 1 ; i < n ; i++)
    {
        for( int j = 0 ; j < n - i ; j++)
        {
            if( arr[j] > arr[j + 1])
            {
                swap(arr[j] , arr[j + 1]);
            }
        }
    }
}

void printArray( int arr[] , int n)
{
    for( int i = 0 ; i <n ; i++)
    {
        cout << arr[i] << "   ";
    }
}

void selectionSort( int arr[] , int n)
{
    for( int i = 0 ; i < n - 1 ; i++)
    {
        for( int j = i+1 ; j < n ; j++ )
        {
            if( arr[i] > arr[j])
            {
                swap( arr[i] , arr[j]);
            }
        }
    }
}


int main()
{
    int arr[6] = {9,8,7,54,5,4};
    bubbleSort( arr , 6);
    //selectionSort( arr , 6);
    printArray( arr , 6);
}