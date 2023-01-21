#include <iostream>

using namespace std;

class demo {
        static int n;
        public:
                demo ()
                {
                        n += 1;
                        cout << "\nObject " << n << " created\n";
                }
};

int demo::n = 0;

int main ()
{
        demo w, x, y, z;

        return 0;
}

