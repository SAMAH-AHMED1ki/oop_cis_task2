class CarSpecs {
private:
    string trim;
    string engine_type;
    pair<int, int> horsepower;
    string steering_ratio;

public:
    string& GetEngineType() { return engine_type; }
    void SetEngineType(string& engineType) { engine_type = engineType; }
    pair<int, int> GetHorsepower() { return horsepower; }
    void SetHorsepower(pair<int, int> hp) { horsepower = hp; }
    string& GetSteeringRatio() { return steering_ratio; }
    void SetSteeringRatio(string& sr) { steering_ratio = sr; }
    string& GetTrim() { return trim; }
    void SetTrim(string& t) { trim = t; }

    // الحل: المنطق بقى مسؤولية الكلاس نفسه
    bool Matches(const CarSpecs& other) const {
        return engine_type == other.engine_type &&
               horsepower == other.horsepower &&
               steering_ratio == other.steering_ratio &&
               trim == other.trim;
    }
};

class AutoTrader {
private:
    vector<CarSpecs> current_cars_vec;

public:
    void LoadDatabase() {
        // Fill current_cars_vec
    }

    bool search_match(CarSpecs &query_car) {
        for (auto available_car : current_cars_vec) {
            if (available_car.Matches(query_car))   // مقارنة واحدة بس بدل 4 أسطر
                return true;
        }
        return false;
    }
};
