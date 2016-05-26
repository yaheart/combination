#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    for ( c=100; c<=100; c-- )
        { for ( b=2; b<c; b++ )
              { for ( a=1; a<b; a++ )
                    { if ( a*a+b*b == c*c )
                         { cout << "a=" << a << " ,b=" << b << " ,c="<< c << endl;
                         }
                    }
              }
        }

return 0;
}
