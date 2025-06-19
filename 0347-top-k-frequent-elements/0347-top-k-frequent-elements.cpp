class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Create a frequency map
        unordered_map<int, int> freq;
        for (int& num : nums) {
            freq[num]++; // Count frequency of each number
        }

        // Step 2: Use a min-heap to keep top k frequent elements
        // The heap stores pairs of (frequency, number)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (auto& pair : freq) {
            int num = pair.first;
            int count = pair.second;

            minHeap.push({count, num}); // Push frequency and number

            // If heap size exceeds k, remove the smallest frequency element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // Step 3: Extract elements from the min-heap
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second); // Get the number
            minHeap.pop();
        }

        return result;
    }
};
