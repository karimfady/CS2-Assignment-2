#include <iostream>
#include "Point.hpp"
#include <cmath>
using namespace std;
Point::Point(){
    cout<<"Please enter the number of points in cluster A: ";
    cin>>nA;
    cout<<"Please enter the number of points in cluster B: ";
    cin>>nB;
    A=new pnt[nA];
    B=new pnt[nB];
    m=20;
    p=new pnt[m];
};
void Point::checkCluster(){
    double dA,dB;
    for(int i=0;i<m;i++)
    {
        dA=sqrt(pow((cA.x-p[i].x),2)+pow((cA.y-p[i].y),2));
        dB=sqrt(pow((cB.x-p[i].x),2)+pow((cB.y-p[i].y),2));
        if(dB>dA)
            cout<<"("<<p[i].x<<","<<p[i].y<<")"<<"Point belongs to cluster A"<<endl;
        if(dA>dB)
            cout<<"("<<p[i].x<<","<<p[i].y<<")"<<"Point belongs to cluster B"<<endl;
        if(dA==dB)
            cout<<"("<<p[i].x<<","<<p[i].y<<")"<<"Point is equidistant from both clusters"<<endl;
            }
};
void Point::center(){
        double sumxA=0,sumyA=0;
    double sumxB=0,sumyB=0;
        for(int i=0;i<nA;i++)
        {
            sumxA=sumxA+A[i].x;
            sumyA=sumyA+A[i].y;
        }
    for(int i=0;i<nA;i++)
    {
        sumxB=sumxB+B[i].x;
        sumyB=sumyB+B[i].y;
    }
    cA.x=sumxA/nA;
    cA.y=sumyA/nA;
    cB.x=sumxB/nB;
    cB.y=sumyB/nB;
};
void Point::generatempoints(){
    double z,f;
       srand(time(0));
          for(int i=0;i<m;)
         {
          z=rand()%100;
          if(z<=100&&z>=5)
          {
              p[i].x=z;
              i++;
          }
         }
          for(int i=0;i<m;)
         {
          f=rand()%100;
          if(f<=100&&f>=5)
          {
              p[i].y=f;
              i++;
          }
       }
};
void Point::generatepointsclusterA(){
    double z,f;
    srand(time(0));
       for(int i=0;i<nA;)
       {
           z=rand()%100;
           if(z<=90&&z>=70)
           {
               A[i].x=z;
               i++;
           }
       }
       for(int i=0;i<nA;)
      {
       f=rand()%100;
       if(f<=90&&f>=70)
       {
           A[i].y=f;
           i++;
       }
    }

};
void Point::generatepointsclusterB(){
    double z,f;
    srand(time(0));
       for(int i=0;i<nB;)
       {
           z=rand()%100;
           if(z<=40&&z>=20)
           {
               B[i].x=z;
               i++;
           }
       }
       for(int i=0;i<nB;)
      {
       f=rand()%100;
       if(f<=40&&f>=20)
       {
           B[i].y=f;
       i++;
       }
      }
};
int Point::getm(){
    return m;
};

