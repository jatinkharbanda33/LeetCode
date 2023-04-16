class Solution
{
public:
    int addMinimum(string word)
    {
        int i = 0;
        int n = word.length();
        int flag = 0;
        int ans = 0;
        char prev = '1';
        while (i < n)
        {
            char x = word[i];
            if (prev == '1')
            {
                if (x == 'a')
                {
                    prev = 'a';
                }
                else if (x == 'b')
                {
                    ans++;
                    prev = 'b';
                }
                else
                {
                    ans += 2;
                    prev = 'c';
                }
            }
            else
            {
                if (x == 'a')
                {
                    if (prev == 'a')
                    {
                        ans += 2;
                    }
                    else if (prev == 'b')
                    {
                        ans++;
                        prev = 'a';
                    }
                    else
                    {
                        prev = 'a';
                    }
                }
                else if (x == 'b')
                {
                    if (prev == 'a')
                    {
                        prev = 'b';
                    }
                    else if (prev == 'b')
                    {
                        ans += 2;
                        prev = 'b';
                    }
                    else
                    {
                        ans++;
                        prev = 'b';
                    }
                }
                else
                {
                    if (prev == 'a')
                    {
                        ans++;
                        prev = 'c';
                    }
                    else if (prev == 'b')
                    {
                        prev = 'c';
                    }
                    else
                    {
                        ans += 2;
                        prev = 'c';
                    }
                }
            }
            i++;
        }
        if (prev != 'c')
        {
            if (prev == 'a')
            {
                ans += 2;
            }
            else if (prev == 'b')
            {
                ans++;
            }
        }
        return ans;
    }
};