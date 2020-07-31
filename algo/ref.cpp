#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int x;
        static int y;//=1000;
        A()
        {
            A::y = 10000;
            x=5;
        }
};
int main()
{
  A a= A();
  A &z = a;
  A b = A();
  b.x=199;
  cout<<A::y<<endl;
  cout<<a.x<<" "<<b.x<<" "<<z.x;
  z=b;
  z.x=188;
  cout<<endl<<a.x<<" "<<b.x<<" "<<z.x;
}