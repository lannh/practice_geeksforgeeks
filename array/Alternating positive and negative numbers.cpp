 #include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

    void copyArr(int arr[], const vector<int>& otherArr, int m,int i, int j)
    {
        for(int k = j; k<m; ++k)
        {
            arr[i] = otherArr[k];
            ++i;
        }
    }

	void rearrange(int arr[], int n) {
	    // code here2
	    
	    vector<int> negative, positive;
	    for(int i=0; i<n; ++i)
	        if(arr[i]>=0)
	            positive.push_back(arr[i]);
	        else negative.push_back(arr[i]);
	   
	   int i=0, j=0, nNegative=negative.size(), nPositive=positive.size(), k=0;
	   while(i<nNegative && j<nPositive)
	   {
	       if(k%2==0)
	       {
	            arr[k] = positive[j];
	            ++j;
	       }
	       else
	       {
	           arr[k] = negative [i];
	           ++i;
	       }
	       ++k;
	   }
	   
	   if(i<nNegative)
	        copyArr(arr, negative, nNegative, k, i);
	   else copyArr(arr, positive, nPositive, k, j);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends