class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>out;
        for(auto &ref:nums1)
        {
            s1.insert(ref);
        }
        
        for(auto &ref2:nums2)
        {
            s2.insert(ref2);
        }
        
        for(auto &ref3:s1)
        {
            if(s2.find(ref3)!=s2.end())
                out.push_back(ref3);
        }
        
        return out;
    }
};