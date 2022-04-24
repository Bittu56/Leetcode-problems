class Solution {
public:
unordered_map <string,string>codedb,urldb;
   const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    // Encodes a URL to a shortened URL.
    
    string getcode()
    {
        string code="";
        for(int i=0;i<6;i++)
        {
            code+=chars[rand()%62];
        }
        
        return "http://tinyurl.com/" + code;
    }
    string encode(string longUrl) {
        
    if(urldb.find(longUrl)!=urldb.end()) return urldb[longUrl];
        string code=getcode();
        while (codedb.find(code) != codedb.end()) code = getcode();
        
        codedb[code] = longUrl;
        urldb[longUrl]=code;
        
        return code;
 }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return codedb[shortUrl];
        
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));