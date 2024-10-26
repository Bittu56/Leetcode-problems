class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
    vector<string>result;
    unordered_set<string> s(folder.begin(), folder.end());
    for(string currfolder: folder)
    {
        bool flag=false;
        string tempfolder=currfolder;
        
        while(!currfolder.empty())
        {
            size_t position= currfolder.find_last_of('/');
            currfolder=currfolder.substr(0, position);
                                                     
            if(s.find(currfolder)!=s.end())
            {
                flag= true;
                break;
            }
        }
                                                     
       if(!flag)
       {
           result.push_back(tempfolder);
       }
    }
        return result;
        
    }
};