

 // } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        
        long long maxA = -1;
        for(int i=0; i<n; ++i)
            if(a[i]>maxA)
                maxA = a[i];
        
        vector<long long> tmp(maxA);
        tmp[0] = 1;
        tmp[1] = 1;
        
        for(int i=2; i<=maxA; ++i)
            tmp[i] = (tmp[i-1]*i)%1000000007;
            
        for(int i=0; i<n; ++i)
            a[i] = tmp[a[i]];
        
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends