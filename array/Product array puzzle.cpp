//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    
    int hasMoreThan2Zero(const vector<long long int>& nums, int n, int& pos)
    {
        int numOfZero = 0;
        for(int i=0; i<n; ++i)
            if(nums[i]==0)
            {
                ++numOfZero;
                if(numOfZero==1)
                    pos = i;
                else break;
            }
        
        if(numOfZero==2)
            return 1;
        
        if(numOfZero==1)
            return 0;
            
        return -1;
    }
    
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here       
        int posOfFirstZero = -1, moreThan2Zero = -2;
        long long int prodWZero = 0, totalProd = 1;
                
        for(int i=0; i<n; ++i)
            if(nums[i]!=0)
                totalProd*=nums[i];
        
        moreThan2Zero = hasMoreThan2Zero(nums, n, posOfFirstZero);
        
        if(moreThan2Zero==1)
            totalProd = 0;
        
        vector<long long int> res(n);
        for(int i=0; i<n; ++i)
            if(nums[i]==0)
            {
                if(moreThan2Zero==0)
                    res[i] = totalProd;
                else res[i] = 0;
            }
            else if(moreThan2Zero!=-1)
                    res[i] = 0;
            else res[i] = totalProd/nums[i];
        
        return res;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends