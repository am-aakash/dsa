class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int i = 0, n = plants.size(), ans = 0, usage = capacity;

        while (i < n)
        {
            if (usage < plants[i])
                ans += 2 * (i), usage = capacity;
            usage -= plants[i];
            ans++;
            i++;
        }
        return ans;
    }
};