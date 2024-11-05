#include<bits/stdc++.h>
using namespace std;
class Geometry{
    public:
        float base;
        float height;
        float arm;
        float arm1;
        Geometry(float base,float height,float arm,float arm1){
            this->base=base;
            this->height=height;
            this->arm=arm;
            this->arm1=arm1;
        }
        void area(){
            float triangle_area=.5*base*height;
            float perimeter=base+arm+arm1;
            cout<<"area= "<<triangle_area<<" "<<"perimeter= "<<perimeter<<endl;
        }
        void rectangle(){
            float r_area=arm*arm1;
            cout<<"area is="<<r_area<<endl;

        }

};
int main(){
    Geometry t(5.3,6.0,3.2,4.2);
    Geometry r(5.3,6.0,5.2,8.0);
    t.rectangle();
    r.rectangle();

    return 0;
}