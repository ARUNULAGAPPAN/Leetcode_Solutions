class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        map<int,vector<int>,greater<int>> mp;

        vector<int> result;
bool c= false;
        for(int i = 0;i<restaurants.size();i++){
            if(veganFriendly==0){
          
                if(restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                    mp[restaurants[i][1]].push_back(restaurants[i][0]);

             
    }}
    else{
          if(restaurants[i][2]==1 && restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                    mp[restaurants[i][1]].push_back(restaurants[i][0]);

    }
              
             


                }}
                
                 
                
                for(auto it=mp.begin();it!=mp.end();it++){
                  
                    sort(it->second.rbegin(), it->second.rend());
                    for (int id : it->second) {
                result.push_back(id);
            }

                }
            
        
        return result;
        
    }
};