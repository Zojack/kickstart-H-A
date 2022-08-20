#include <iostream>
#include <math.h>

int solve(int x1, int y1, int x2, int y2) 
{
    int m_distance = abs(x1 - x2) + abs(y1-y2);// Manhattan Distance;

    int y_distance = m_distance/ pow(y1 -y2, 2);

    int x_distance = m_distance/ pow(x1 -x2, 2);    

    std::cout << y_distance << std::endl;
    std::cout << x_distance << std::endl;
}

int main ()   
{
    solve(0, 0 ,1 ,1 );
}
