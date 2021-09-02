//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int numOf0 = 0;
    int numOf1 = 0;
    
    for(int i=0; i<n; ++i)
        if(a[i]==0)
            ++numOf0;
        else if(a[i]==1)
            ++numOf1;
    
    for(int i = 0; i<numOf0; ++i)
        a[i] = 0;
    for(int i = numOf0; i<numOf1+numOf0; ++i)
        a[i] = 1;
    for(int i = numOf0+numOf1; i<n; ++i)
        a[i] = 2;
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends