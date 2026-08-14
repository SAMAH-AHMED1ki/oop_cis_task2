#include <vector>
using namespace std;
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
#include<fstream>
class rooms {
private:
    bool cupboard;
    bool mirror;
    bool TV;
public:
    void setmirror(bool mirror_){
        mirror = mirror_;
    }
    bool getmiroor() {
        return mirror;
    }
    void setTV(bool TV_) {
        TV = TV_;
    }
    bool getTV() {
        return TV;
    }
    void setcupboard(bool cupboard_) {
        cupboard = cupboard_;
    }
    bool getcupboard() {
        return cupboard;
    }
};
class bathroom {
private:
    bool hasbath;
    bool hasbig_area;
public:
    void sethasbath(bool hasbath_) {
       hasbath= hasbath_ ;
    }
    bool gethasbath() {
        return hasbath;

    }
    void sethasbig_area(bool hasbig_area_) {
        hasbig_area=hasbig_area_;
    }
    bool gethasbig_area() {
        return hasbig_area;

    }
};
class elevator {
private:
    bool govenor;
    bool controlboard;
public:
    void setgovenor(bool govenor_) {
        govenor = govenor_;
    }
    bool getgovenor() {
        return govenor;
    }
    void setcontrol(bool control_) {
        controlboard = control_;
    }
    bool getcontrol() {
        return controlboard;
    }
};
class apartment {
    vector <rooms> room;
    vector <bathroom> bathroom1;
};
class building {
    vector <elevator> e1;
       vector <apartment> d1;
};

int main()
{
       
}
