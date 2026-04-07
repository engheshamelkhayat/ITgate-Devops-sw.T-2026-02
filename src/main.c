
#include <studio>

double add(double a, double b) {
    return a+b;
}
double getmax(double a, double b) {
    return (a > b) ? a : b;
}
int main(void){
int a=10;
int b=20;
ptintf("sum= %d \n", add(a+b));
ptintf("Max= %d \n", getmax(a+b));
return0;
}