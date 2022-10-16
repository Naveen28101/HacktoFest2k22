#include<iostream>
#include<vector>
using namespace std;

int containerArea(vector<int> &height)
{
    int maxArea=-1;
    for(int i=0;i<height.size();i++)
    {
        int a=0;
        for(int j=i+1;j<height.size();j++)
        {
            int h=min(height[i],height[j]),l=j-i;
            a=h*l;
            if(a>maxArea)
            maxArea=a;
        }
        
    }
    return maxArea;
}

int remove(vector<int> &nums,int val)
{
    vector<int>:: iterator it;
    for(it=nums.begin();it!=nums.end();it++)
    {
        if(*it==val)
        nums.erase(it);
    }
    return nums.size();
    // return s;
}

int main()
{
    vector <int> v={2,3,4,5,18,17,6};
    // cout<<containerArea(v);
    cout<<remove(v,18);
    return 0;
}



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    vector<int>:: iterator it;
    for(it=nums.begin();it!=nums.end();it++)
    {
        if(*it==val)
        nums.erase(it);
    }
    return nums.size();
    }
};