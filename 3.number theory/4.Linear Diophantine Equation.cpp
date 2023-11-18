#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b, int &x, int &y)
{
   if (b == 0)
   {
       x = 1;
       y = 0;
       return a;
   }
   int x1, y1;
   int g = gcd(b, a%b, x1, y1);
   x = y1;
   y = x1 - y1*(a/b);
   return g;
}

void one_solution(int a, int b, int c)
{
    int xg, yg;
    int g = gcd(abs(a), abs(b), xg, yg);
    if (a < 0)
        xg = -xg;
    if (b < 0)
        yg = -yg;
    if (c % g != 0)
        return;

    int x0 = xg*c/g;
    int y0 = yg*c/g;
}

void kth_value(int k, int x0, int y0,
              int a, int b, int g)
{
     int xk = x0+k*b/g;
     int yk = y0-k*a/g;
}

int main()
{

    return 1000;

}
