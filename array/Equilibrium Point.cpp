#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        int i = 0;
        int totalSum = 0;
        int sumToI = 0;
        
        for(i=0; i<n; ++i)
            totalSum+=a[i];
        
        i = 0;
        while(i<n)
        {
            //cout<<i<<" "<<sumToI<<" "<<totalSum-a[i]-sumToI<<endl;
            if(totalSum-a[i]-sumToI == sumToI)
                return i+1;
            
            sumToI+=a[i];
            ++i;
        }
        
    
        return -1;
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends