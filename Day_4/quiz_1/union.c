#include <stdio.h>
void printUnion(int arr1[], int n, int arr2[], int m) 
{
    int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if (arr1[i] < arr2[j]) 
        {
            printf("%d ", arr1[i]);
            i++;
        } 
        else if (arr2[j] < arr1[i]) 
        {
            printf("%d ", arr2[j]);
            j++;
        } 
        else 
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n) 
    {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m) 
    {
        printf("%d ", arr2[j]);
        j++;
    }
}
int main() 
{
    int n, m;
    printf("Enter array size: ");
    scanf("%d", &n);
    int i,arr1[n];
    printf("Enter elements of array in sorted order: \n");
    for (i = 0; i < n; i++) 
    {
        printf("%d : ",(i+1));
        scanf("%d", &arr1[i]);
    }
    printf("Enter second array size: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements of second array in sorted order: \n");
    for (i = 0; i < m; i++) 
    {
        printf("%d : ",(i+1));
        scanf("%d", &arr2[i]);
    }
    printf("Union of the two arrays: ");
    printUnion(arr1, n, arr2, m);
    return 0;
}
