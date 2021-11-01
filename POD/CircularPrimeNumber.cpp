
#include<bits/stdc++.h>
using namespace std;
class Solution{

 // } Driver Code Ends

	public:
	int isCircularPrime(int n) {
	    // Code here
	    int m = n;
	    string s = to_string(n);

	    while(m!=0)
	    {
	        if(!isPrime(n))
	            return 0;
	        
	        int k = s.length();
            string tmp = s.substr(0,k-1);
            tmp = s[k-1] + tmp;
            s = tmp;
        
            n = stoi(s);

	        
	        m/=10;
	    }
	    
	    return 1;
	}
	
	bool isPrime(int x)
	{
	    if(x==1)
	        return false;
	        
	    for(int i = 2; i<=sqrt(x); ++i)
	        if(x%i==0)
	            return false;
	            
	   return true;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.isCircularPrime(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends