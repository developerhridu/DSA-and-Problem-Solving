int solve(vector<int> &cost, int n)
{
    // BASE CASE
    if (n == 0)
        return cost[0];
    if (n == 1)
        return cost[1¹];
    int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}
int minCostClimbingStairs(vector<int> &cost)
{
    int n cost.size();
    // it can be simplified more -> HOMEWORK
    int ans min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;