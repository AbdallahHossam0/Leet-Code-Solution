class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        size_t size{nums.size()};

        int i{}, j{}, k{};

        int sum{};

        vector<vector<int>> outer;

        vector<int> inner(3, 0);

        sort(nums.begin(), nums.end());

        for (; i < size - 2; ++i)
        {

            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            j = i + 1;
            k = size - 1;
            while (j < k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    inner[0] = nums[i];
                    inner[1] = nums[j];
                    inner[2] = nums[k];
                    outer.push_back(inner);
                    ++j;
                    --k;
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        ++j;
                    }
                    while (j < k && nums[k] == nums[k + 1])
                    {
                        --k;
                    }
                }
                else if (sum > 0)
                {
                    --k;
                }
                else
                {
                    ++j;
                }
            }
        }
        return outer;
    }
};