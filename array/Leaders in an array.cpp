// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
	
	//first solution:
	vector<int> ans(1);
        ans[0] = a[n-1];
        int maxRight = -1;
        //max[n-1] = -1;
        
        for(int i=n-2; i>=0;--i)
        {
            if(maxRight<a[i+1])
                maxRight = a[i+1];
            if(a[i]>=maxRight)
                ans.push_back(a[i]);
        }
        
        int i = 0, j=ans.size()-1;
        while(i<j)
        {
            int tmp = ans[i];
            ans[i] = ans[j];
            ans[j] = tmp;
            ++i;
            --j;
        }

	/* second solution
        vector<int> max(n,-1);
        vector<int> ans;
        max[n-1] = -1;
        
        for(int i=n-2; i>=0;--i)
            if(max[i+1]<a[i+1])
                max[i] = a[i+1];
            else max[i] = max[i+1];
        
        for(int i=0; i<n; ++i)
            if(a[i]>=max[i])
                ans.push_back(a[i]);
	*/
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends