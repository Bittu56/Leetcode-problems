class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        // consecutively 3 same chars can not be added
        priority_queue<pair<int,char>>pq; // to get max at top (decreasing order)
        if(a) pq.push({a,'a'}); // if a/b/c not 0 then push in queue
        if(b) pq.push({b,'b'});
        if(c) pq.push({c,'c'});
        string ans="";
        while(pq.size()>1){
            pair<int,char>one = pq.top();pq.pop();
            pair<int,char>two = pq.top();pq.pop();
            // pushing two consecutive chars if top 2 >=2
            // else just add 1 char
            if(one.first>=2){
                ans+=one.second;
                ans+=one.second;
                one.first-=2;
            }
            else{
                ans+=one.second;
                one.first-=1;
            }
            if(two.first>=2 && two.first>=one.first){
                ans+=two.second;
                ans+=two.second;
                two.first-=2;
            }
            else{
                ans+=two.second;
                two.first-=1;
            }
            if(one.first>0) pq.push(one);
            if(two.first>0) pq.push(two);
        }

        if(pq.empty()) return ans; // return ans 
        if(pq.top().first>=2){ // still anything remains, add 2 chars
            ans+=pq.top().second;
            ans+=pq.top().second;
        } else ans+=pq.top().second; // or add 1 char only
        
        return ans;
    }
};