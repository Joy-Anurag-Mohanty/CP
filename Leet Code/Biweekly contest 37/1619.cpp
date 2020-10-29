#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    double trimMean(vector<int>& arr) 
    {
        int len = arr.size();
        
        sort(arr.begin(),arr.end());
        
        int skip_range_start = (0.05)*len;
        int skip_range_end = (0.05)*len;
        
        double mean = 0;
        
        cout<<skip_range_start<<" "<<skip_range_end<<endl;
        
        double N = len - skip_range_start - skip_range_end;
        double sum = 0;
        
        cout<<N<<endl;
        
        for(int i = skip_range_start; i < len - skip_range_end; i++)
            sum = sum + arr[i];
        
        mean = sum / N;
            
        return mean;
    }
};