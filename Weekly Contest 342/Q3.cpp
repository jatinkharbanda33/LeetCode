class Solution
{
public:
    vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
    {
        int i = 0;
        vector<int> help(101, 0);
        vector<int> res;
        int n = nums.size();
       
        while (i < n)
        {
           help[nums[i]+50]++;
             if (i >= k)
            {
                int x = nums[i - k];
                help[x + 50]--;
            }
            if (i >= k - 1)
            {
               
                
                int cnt = 0;
                int ans = 0;
                for (int j = 0; j < 50; j++)
                {
                    if (help[j] > 0)
                    {
                        cnt+=help[j];
                        ans = j;
                    }
                    if (cnt>=x)
                    {
                        cnt=x;
                        break;
                    }
                }
                if (cnt != x)
                    res.push_back(0);
                else
                {
                    res.push_back(ans - 50);
                }
               
            }
            i++;
        }
        return res;
    }
 };