#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    vector<int> res;
    res.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (res.back() < nums[i])
        {
            res.push_back(nums[i]);
        }
        else
        {
            auto iter = lower_bound(nums.begin(), nums.end(), nums[i]);
            *iter = nums[i];
        }
    }
    return res.size();
}

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp1, mp2;
        for(auto& num: nums1){
            mp1[num]++;
        }
        for(auto& num: nums2){
            mp2[num]++;
        }
        vector<int> res;
    }

int main()
{
    int a = 0;
    cin >> a;
    cout << a << endl;
    vector<string> msg;
    cout << "Hello world" << endl;
    msg.push_back("Hello");
    msg.push_back("Hello");
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
