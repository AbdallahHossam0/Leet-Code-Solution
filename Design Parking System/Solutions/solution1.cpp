class ParkingSystem {
private:
    vector<int> park;
public:
    ParkingSystem(int big, int medium, int small){
        park = {big, medium, small};
    }
    
    bool addCar(int carType) {
        if(park[carType - 1]){
            --park[carType - 1];
            return 1; 
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */