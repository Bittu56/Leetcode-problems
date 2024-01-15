class Solution {
public:
 int count=1;
 vector<string>output;
 vector<string> letterCasePermutation(string s) {
 transform(s.begin(), s.end(), s.begin(), ::tolower);
 output.push_back(s);
     for(int i=0;i<s.length();i++)
     {
         if(isalpha(s[i]))
         {
             add(toupper(s[i]),i);
         }
     }
     
               return output;
 }
    
    void add (char c, int pos)
    {
        int i=0;
        while(i<count)
        {
            string x=output[i];
            x[pos] = c;
            output.push_back(x);
            i++;
        }
        count+=count;
    }

};