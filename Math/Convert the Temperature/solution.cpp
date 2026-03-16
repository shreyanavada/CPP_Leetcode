class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Kelvin;
        double fahrenheit;
        vector<double>ans;
        Kelvin = celsius + 273.15 ;
        fahrenheit = celsius * 1.80 + 32.00;
        ans.push_back(Kelvin);
         ans.push_back(fahrenheit);
        return ans;



        
    }
};
