//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
    float nthPower = 1;

    if (n == 0) {
        nthPower = 1;

    } else if (n < 0) {

        n *= -1;
        for (int i = 0; i < n; i++) {
            nthPower *= 2;
            
        }

    } else {
        for (int i = 0; i < n; i++) {
            nthPower *= 2;
            
        }
    }
        
    return nthPower;
}

double nthpowern(int n)
{
    float nthPower;
    nthPower = nthpowerp(n);
    return 1/nthPower;
        
return nthPower;
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}


// int main ()
// {
//     int n;
//     float result;
    
//     cout << "What value would you like 2 to be raised to? "; 
//     cin >> n;

//     if (n > 0)
//     {
//         result = nthpowerp(n);
//     } else if (n < 0) {
//         result = nthpowern(n);
//     }

//     printout(result);
  
// }
