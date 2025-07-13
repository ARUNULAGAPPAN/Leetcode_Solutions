class Solution {
public:
    int matchPlayersAndTrainers(std::vector<int>& players, std::vector<int>& trainers) {
        ranges::sort(players);
        ranges::sort(trainers);
        int i = 0, j = 0, count = 0;
        while (i < players.size() && j < trainers.size()) 
        {
            if (players[i] <= trainers[j]) 
            {
                ++i;
                ++count;
            }
            ++j;
        }
        return count;
    }
};