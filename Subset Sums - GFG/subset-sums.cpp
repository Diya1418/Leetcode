//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:


    void helper(int i,vector<int> &arr,int s,vector<int> &res,vector<int> &t){
        if(i==arr.size()){
            res.push_back(s);
            return;
        }
        
        // res.push_back(arr[i]);
        
        
        helper(i+1,arr,s,res,t);
        t.push_back(arr[i]);
        helper(i+1,arr,s+arr[i],res,t);
        t.pop_back();
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> res;
        vector<int> ans;
        
        helper(0,arr,0,res,ans);
        
        return res;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends