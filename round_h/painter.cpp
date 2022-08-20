#include <iostream>
#include <math.h>

#define UNCOLORED 0

#define RED 1
#define GREEN 2
#define BLUE 3


int solve (int n, std::string p) 
{
    int color;

    // Initialize every element of P.
    int r=0;
    int g =0;
    int b =0;
    int y = 0;
    int bl = 0;

    for (int i; i<n; i++) 
    {
        switch (p[n])
        {
            case 'R':
                r = std::string::find(p, p.length(), 'R'); 
            case 'G':
                g = std::string::find(p, p.length(), 'G');
        };
    }
    std::cout << r << std::endl;
    std::cout << g << std::endl;
}
int main () 
{
    solve(6, "RRRGGG");
}