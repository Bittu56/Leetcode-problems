class Solution {
public:
vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
       int n=products.size();
    vector<vector<string>> ans;
    sort(products.begin(),products.end());
    vector<string>temp;
    string curr="";
    
    for(auto c:searchWord)
    {
        curr+=c;
        temp.clear();
        for(int i=0;i<n;i++)
        { string s=products[i];
              if(s.substr(0,curr.length())==curr){              
                    temp.push_back(s);
                }
            if(temp.size()==3) break;
         }
 ans.push_back(temp);
        }
        return ans;
    }
               };