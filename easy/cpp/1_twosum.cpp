#include <vector>;
#include <unordered_map>;
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap;
            vector<int> ret;
            for(int i = 0; i < nums.size(); i++)
            {
                int num = nums[i];
                if(numMap.count(target-num))
                {
                    ret.push_back(i);
                    ret.push_back(numMap[target-num]);
                }
                else
                {
                    numMap.emplace(nums[i], i);
                }
            }
            return ret;
        }
};