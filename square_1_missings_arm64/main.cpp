#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include "ways_in.h"
using namespace std;

int main(int argc,char** argv)
{
    ways_in *win=new ways_in();
    long long int nmb=0;
    cout<<"enter a number \n";
    nmb=stold(argv[1]);
    //cin>>nmb;
    cout<<"\n";
    win->way_one(nmb);
    cout<<"\n";
    win->way_two(nmb);
    return 0;
}
