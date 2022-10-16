int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    
    int ans = 0, min_diff = INT_MAX, n = nums.size();
    
    for(int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(target - sum) < min_diff) 
                min_diff = abs(target - sum),ans = sum;
            sum > target ? k--:j++;
        }
    }
    return ans;
    }
