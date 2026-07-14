#include <iostream>
using namespace std;

float HitungRerataBerparameter(float x, float y){
return (x + y) / 2;

}

string CekStatusBerparameter(float a){
    if (a >= 60){
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}
int main()
