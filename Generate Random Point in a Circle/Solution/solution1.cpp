class Solution {
public:
    Solution(double radius, double x_center, double y_center) {
        m_radius = radius;
        m_x = x_center;
        m_y = y_center;
    }
    
    double random(){
        return (double) rand() / RAND_MAX;
    }
    vector<double> randPoint() {
        double a = random() * 2 * M_PI;
        double smallR = sqrt(random()) * m_radius;
        return {m_x + smallR * cos(a), m_y + smallR * sin(a)};
    }
private: 
    double m_radius;
    double m_x;
    double m_y;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */