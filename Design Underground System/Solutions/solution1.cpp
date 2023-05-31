class UndergroundSystem {
private:
    map<int, pair<int, string>> in;
    map<pair<string, string>, pair<int, double>> sum_num;
public:
    UndergroundSystem(){}
    
    void checkIn(int id, string stationName, int t) {
        in[id] = {t, stationName};
    }
    
    void checkOut(int id, string stationName, int t) {
        int time {t - in[id].first};
        sum_num[{in[id].second, stationName}].first += time;
        ++sum_num[{in[id].second, stationName}].second;

    }
    
    double getAverageTime(string startStation, string endStation) {
        return sum_num[{startStation, endStation}].first / sum_num[{startStation, endStation}].second;
    }
};



/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */