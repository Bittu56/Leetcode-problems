class UndergroundSystem {
public:
    // {id,{entry time,entry station}}
    map<int,pair<int,string>> entry;
 
    // {{entry station,exit station},sum of time travels}
    map<pair<string,string>,int> sum;
 
    // {{entry station,exit station},count}
    map<pair<string,string>,int> cnt;
 
    UndergroundSystem() {
 
    }
 
    void checkIn(int id, string stationName, int t) {
        entry[id] = {t,stationName};
    }
 
    void checkOut(int id, string stationName, int t) {
        double diff = (t-entry[id].first);
 
        sum[{entry[id].second,stationName}]+=diff;
        cnt[{entry[id].second,stationName}]++;
 
        entry.erase(id);
    }
 
    double getAverageTime(string startStation, string endStation) {
        return ((double)sum[{startStation,endStation}])/cnt[{startStation,endStation}];
    }
};
/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */