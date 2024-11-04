#include <iostream>
#include<string>
#include<vector>
using namespace std;

//int ComplexNumber::counter = 0;
class Shap {

public:
    virtual float area()=0;

};

class Circle : public Shap {
public:
    int rad;
    const float b = 3.14;
    Circle() {}
    Circle(int r) {
        rad = r;
    }


    float area()
        override
    {
        return b * rad * rad;
    };
};

class Traingle : public Shap {

public:
    int x;
    float y;
    Traingle() {}
    Traingle(float base, float high) {
        x = base;
        y = high;
    }


    float area()
        override
    {
        return  (x * y)/2;
    };
};

class Rectangle : public Shap {

public:
    int x;
    float y;
    Rectangle() {}
    Rectangle(int base, int high) {
        x = base;
        y = high;
    }


    float area()
        override
    {
        return   x * y;
    };
};

class Square : public Shap {

public:
    int x;
    
    Square() {}
    Square(int base) {
        x = base;
       
    }


    float area()
        override
    {
        return   x * x;
    };
};

float Area(Shap* shap) {

   return shap->area();
}


int main()
{

    vector<float> allArea;
    float sum = 0;
    int cho;
    cout << "1.To calculate Area for each Shap\n2.ToCalculate Average of All Area\n3.To Exit Program\n";
    int ch;
    cin >> ch;
    Circle c1;
    Rectangle r;
    Square s1;

    char open='A';
    
    while (open == 'A'|| open == 'a') {
        switch (ch) {
            case 1:
                cout << "Please Enter Value for Radis of Circle To Calculate Area : \n";
                int radis;
                cin >> radis;
                c1.rad = radis;
                cout << " area of Circle  " << Area(&c1) << "\n";

                 cout << "Please Enter Value for base and High of Rectangle To Calculate Area : \n";
                 float base, high;
                 cin >> base >> high;

                 r.x = base;
                 r.y = high;
                 cout << " area of Rectangle  " << Area(&r) << "\n";

                 cout << "Please Enter Value for side of Square To Calculate Area : \n";
                 int side;
                 cin >> side;

                 s1.x = side;
                 cout << " area of Square  " << Area(&s1) << "\n";
                 ch = 0;
                break;
            case 2:
                allArea.push_back(Area(&c1));
                allArea.push_back(Area(&r));
                allArea.push_back(Area(&s1));

                for (int i = 0;i < allArea.size();i++) {
                    sum += (allArea[i]) / allArea.size();
                }
                
                cout << "Average of All Areas :  " << sum<<"\n";
                ch = 0;
                break;
            case 3:
                open = 's';
                break;
            default:
                cout << "1.To calculate Area for each Shap\n2.ToCalculate Average of All Area\n3.To Exit Program\n";
                cin >> ch;
                break;
        }
    
    
    }
     

}


