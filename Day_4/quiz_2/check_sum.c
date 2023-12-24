#include <stdio.h>
int hasPairWithSum(int Arr[], int N, int X)
{
    int visited[100000] = {0};
    for (int i = 0; i < N; i++)
    {
        int complement = X - Arr[i];
        if (visited[complement] == 1)
        {
            return 1;
        }
        visited[Arr[i]] = 1;
    }
    return 0;
}
int main()
{
    int N, X;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int Arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &X);
    if (hasPairWithSum(Arr, N, X))
    {
        printf("Yes, there exist two elements in the array whose sum is %d.\n", X);
    }
    else
    {
        printf("No, there are no two elements in the array whose sum is %d.\n", X);
    }
    return 0;
}
