

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int i = N-1;
        while(i>=0)
        {
            ++arr[i];
            
            if(arr[i]<10)
                break;
            
            if(arr[i]==10)
                arr[i] = 0;
            --i;
        }
        
        if(i<0)
        {
            arr[0] = 1;
            arr.push_back(0);
        }
        
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends