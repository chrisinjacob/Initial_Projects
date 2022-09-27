#include <iostream>
#include "point.h"
#include <math.h>
using namespace std;

namespace cj_point{
     point::point (double x1, double y1){
        x = x1;
        y = y1;
     }
     void point::shift (double x2, double y2){
        x += x2;
        y += y2;
     }
     void point::rotate (){
        double x3, y3;
        x3 = y;
        y3 = -x;
        x = x3;
        y = y3;
     }
 
     istream& operator >> (istream& in, point& dest){
        in >> dest.x >> dest.y; 
        return in;
     }
     double dist (const point& p1, const point& p2){
        double a, b, c;
        a = p1.getx() - p2.getx();
        b = p1.gety() - p2.gety();
        c = a*a + b*b;
        return sqrt(c);
     }
    point mid (const point& p1, const point& p2){
        double xmid, ymid;
        xmid = (p1.getx() + p2.getx())/2;
        ymid = (p1.gety() + p2.gety())/2;
        point middle (xmid, ymid);
        return middle;
    }
    point operator +(const point& p1, const point& p2){
        double sumx, sumy;
        sumx = (p1.getx() + p2.getx());
        sumy = (p1.gety() + p2.gety());
        point sum (sumx, sumy);
        return sum;
    }
    bool operator ==(const point& p1, const point& p2){
        return (p1.getx() == p2.getx()) && (p1.gety() == p2.gety());
    }
    bool operator !=(const point& p1, const point& p2){
        return !(p1 == p2);
    }
    ostream& operator << (ostream& out, const point& source){
        out << "[" << source.getx() << "," << source.gety() << "]";
        return out;
        
    }
}