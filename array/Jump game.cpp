
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        int pos = N - 1, i = N - 2;

        while (i >= 0)
        {
            while (i >= 0 && A[i] + i < pos)
                --i;
    
            if (i >= 0)
            {
                pos = i;
                --i;
            }
        }
    
        return (pos == 0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends