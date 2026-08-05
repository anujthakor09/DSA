class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty()) return;

        k %= nums.size();

        list<int> lst(nums.begin(), nums.end());

        while (k > 0) {
            int last = lst.back();
            lst.pop_back();
            lst.push_front(last);
            k--;
        }

        int i = 0;
        for (int x : lst) {
            nums[i++] = x;
        }
    }
};