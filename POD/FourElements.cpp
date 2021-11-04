
#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

int twoPointer(int A[], int l, int r, int x)
{
    while(l<r)
    {
        if(A[l] + A[r] == x)
            return true;
        if(A[l] + A[r] > x)
            --r;
        else ++l;
    }
    return false;
}

bool find4Numbers(int A[], int n, int X)  
{
    sort(A, A+n);

    for(int i=0; i<n; ++i)
        for(int j = i+1; j<n; ++j)
            if(twoPointer(A,j+1, n-1, X-A[i]-A[j]))
                return true;
    
    return false;
}