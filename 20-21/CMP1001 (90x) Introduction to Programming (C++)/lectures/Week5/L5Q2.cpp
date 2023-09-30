#include <iostream>

using namespace std;
int main()
{
    char shape = 'N';
    int area, perimeter;
    while( shape != 'Q' )
    {
        cout<<"Please Enter Shape (C: Circle, S: Square, R: Rectangle Q:quit) >"<<endl;
        cin>>shape;
        if( shape == 'C' )
        {
            float radius, area;
            std::cout << "Enter the radius of circle : ";
            std::cin >> radius;
            area = 3.14 * radius * radius;
            std::cout << "Area of circle with radius "
                      << radius << " is " << area<<endl;
        }
        else if( shape == 'S' )
        {
            int side;
            cout<<" Please enter the side of the square >"<<endl;
            cin>>side;
            perimeter=4*side;
            cout<<"Perimeter of square is "<<perimeter<<endl;
        }
        else if( shape == 'R' )
        {
            double l,w,area;
            cout<<"Length : ";
            cin>>l;
            cout<<"Width : ";
            cin>>w;
            area=l*w;
            cout<<"Area of Rectangle : "<< area << endl;
        }
    }
    return(0);
}