class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double hrDegree = ((hour < 12) ? hour * 30 : 0) + minutes * 0.5, minDegree = minutes * 6;
        cout << hrDegree << " " << minDegree;
        double ans = min(abs(hrDegree - minDegree), abs(minDegree - hrDegree));
        if (ans > 180)
        {
            ans = 360 - ans;
        }
        return ans;
    }
};