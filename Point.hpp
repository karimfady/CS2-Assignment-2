#ifndef Point_hpp
#define Point_hpp
class Point{
private:
    struct pnt{
        double x,y;
    };
    pnt *A;
    pnt *B;
    pnt *p;
    int nA,nB,m;
    pnt cA,cB;
public:
    Point();
    void center();
    void checkCluster();
    void createDynamicArr(pnt,int);
    void generatempoints();
    void generatepointsclusterA();
    void generatepointsclusterB();
    int getm();
   

    
};


#endif 
