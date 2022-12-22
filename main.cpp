#include <iostream>
#include <cmath>

using namespace std;

void cosine(float x);
double factorial(int n);

int main()
{
    float x = 3.14;
    cosine(x);

    return 0;
}

void cosine(float x){
    
    int resolution = 20;
    float result = 0;
    int index = 1;
    for(int i=0;i<resolution;i++){
        if(index%2==1){
            result = result + pow(x, i)/factorial(i);
            std::cout<<"result: "<<result<<", x is "<<x<<" to the +power of "<<i<<" power is "<<pow(x, i)<<", fact is "<<factorial(i)<<endl;
            index++;
            i++;
        }else{
            result = result - pow(x, i)/factorial(i);
            std::cout<<"result: "<<result<<", x is "<<x<<" to the -power of "<<i<<" power is "<<pow(x, i)<<", fact is "<<factorial(i)<<endl;
            index++;
            i++;
        }
        
    }
    
    std::cout<<"sine of x is "<<result<<endl;
    
}

double factorial(int n){
    double factorial = 1;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
    }
    return factorial;
}
