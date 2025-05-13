class Solution {
public:
   /* vector<int> twoSum(vector<int>& nums, int target) {    */


        std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndices;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndices.find(complement) != numIndices.end()) {
            result.push_back(numIndices[complement]);
            result.push_back(i);
            return result;
        }
        numIndices[nums[i]] = i;
    }

    return result; // If no solution is found, return an empty vector (this shouldn't happen in this problem).
}

int main() {
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    // Output: result1 = {0, 1}

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    // Output: result2 = {1, 2}

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    // Output: result3 = {0, 1}

    return 0;
}   
};
