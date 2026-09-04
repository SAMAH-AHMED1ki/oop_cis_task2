#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ConfigurationManger {
private:
    string configuration_path;
    vector<string> servers_ips;
    string aws_service_url;
    // Other heavy data
    bool is_loaded = false;
     ConfigurationManger(string configuration_path) :
            configuration_path(configuration_path) {
    }
public:
    void Load() {
        if (is_loaded)
            return;
        // some heavy load
        cout << "Lazy loading\n";
        servers_ips.push_back("10.20.30.40");
        servers_ips.push_back("10.20.30.41");
        servers_ips.push_back("10.20.30.42");
        aws_service_url = "https://dynamodb.us-west-2.amazonaws.com";
        is_loaded = true;
    }
    string GetAwsServiceUrl() {
        Load();
        return aws_service_url;
    }
    static ConfigurationManger& getistance(){
        static ConfigurationManger instance("/home/moustafa/conf_info.txt"); 
        return instance ;       
    }
};

void f1() {
    ConfigurationManger &mgr = ConfigurationManger::getistance();
    cout << mgr.GetAwsServiceUrl() << "\n";
}

void f2() {
    ConfigurationManger &mgr = ConfigurationManger::getistance();
    cout << mgr.GetAwsServiceUrl() << "\n";
}

int main() {
    f1();
    f2();
}
