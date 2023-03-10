
#include <iostream>
#include<string>
#include<math.h>
using namespace std;
class Trianlge {
public:
    bool isTriangle(float a, float b, float c) {
        if ((abs(b - c)) < a && (a < b + c))
            return true;
        if ((abs(a - c)) < b && (b < a + c))
            return true;
        if ((abs(a - b)) < c && (c < a + b))
            return true;

        return false;
    }
    Trianlge(float a,float b,float c){
        if (!isTriangle(a,b,c))
        {
            cout << "Check the values ​​entered" << endl;
        }
        if(isTriangle(a,b,c) ==true)
        {
            cout << "Triangle creating..."<<endl;
            sideA = a;
            sideB = b;
            sideC = c;
            _getValues();
        }
    }
    ~Trianlge(){
        cout << "Process completed" << endl;
    }
    void _getValues() {
        int values[3] = { sideA,sideB,sideC };
        _valuesPrint(values);
        _calculateAreaandPrint(values);
    }
    void _calculateAreaandPrint(int values[]) {
        float s,area;
        s = (values[0] + values[1] + values[2])/2;
        area = sqrt(s * (s - values[0]) * (s - values[1]) * (s - values[2]));
        cout << "Triangles Area : " << area<<endl;
    }
    void _valuesPrint(int values[]) {
        cout << "Sides : " <<values[0] << "," << values[1] << "," << values[2]<<endl;
    }
    void _typesTriangle(int values[]) {
    }
private:
    float sideA, sideB, sideC;
};
int main()
{
    float a, b, c ;
    here:
    cout << "Enter the sides (values ​​are different): ";
    cout << "First side : ";
    cin >> a;
    cout << "Second side : ";
    cin >> b;
    cout << "Third side : ";
    cin >> c;
    if ((a == b) || (a == c) || (b == c))
    {
        cout << "Please values are different!" << endl;
        goto here;
    }
    Trianlge triangle(a,b,c);
}