#include <iostream>
#include "Point.hpp"
using namespace std;
int main() {
   Point r;
    r.generatempoints();
    r.generatepointsclusterA();
    r.generatepointsclusterB();
    r.center();
    r.checkCluster();
 
    return 0;
}
