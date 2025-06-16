class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
     int m=0;
     unordered_map<string, int>map;
     for(string s : arr)
     {
        map[s]++;
     }   
     for(int i=0;i<arr.size();i++)
     {
        if(map[arr[i]]==1)
        {
            m++;
            if(m==k)
            {
                return arr[i];
            }
        }
     }
     return "";
    }
};