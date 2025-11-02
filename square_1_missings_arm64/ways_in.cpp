#include "ways_in.h"
#include "sum_cdi.h"
#include <iostream>
using namespace std;

ways_in::ways_in()
{
    //ctor
}

ways_in::~ways_in()
{
    //dtor
}

ways_in::ways_in(const ways_in& other)
{
    //copy ctor
}

ways_in& ways_in::operator=(const ways_in& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

    sum_cdi *smcd=new sum_cdi();

int ways_in::way_one(long long int mainn){
    cout<<"\n";
    cout<<"Method A and some 'dirty' values to use in Method B\n";
    cout<<"\n";
    long long int rst=0;
    rst=mainn*mainn;
    smcd->cdi=0;
    long long int mn=0;
    mn=smcd->cdis(rst,4);
    cout<<"with " << mainn << " * " << mainn << " ::== " << rst <<" and cdi as  " << mn <<"\n";
    long long int one_piece_out=0;
    one_piece_out=rst-1;
    cout<<"if we leave first piece outside we take " << one_piece_out <<"\n";
    cout<<"calculating internal pieces. Leave the Γ styles of numbers non counting \n";
    long long int xmainn=0;
    //for(int i=1;i<mainn;i++){
    //   for(int j=1;j<mainn;j++){
    //      xmainn+=1;
    //   }
    //}
    //xmainn=rst-1;
    xmainn=(mainn-1)*(mainn-1);

    cout<<"the counter returns " << xmainn <<" its the dirty the part of it \n";
    long long int adding=0;
    adding=one_piece_out + xmainn ;
    long long int admn=0;
    smcd->cdi=0;
    admn=smcd->cdis(adding,4);
    cout<<"adding of " << one_piece_out << " + " << xmainn << " ::== " << adding <<" and cdi of " << admn <<"\n";
    long double xri=0;
    xri=(long double)adding /(long double)one_piece_out;
    cout<<"\n";
    cout<<adding << " / " << one_piece_out <<" ::== ";
    cout<<std::setprecision(9) << xri <<" almost near 2 \n";

    return 0;
}

int ways_in::way_two(long long int mainn){

    cout<<"\n";
    cout<<"Using Method B \n";
    cout<<"\n";

    long long int remove_one=0;
    remove_one=mainn-1;
    cout<<"we have " << mainn << " with -1 as the first piece which is the index aswell xD " << remove_one <<"\n";

    long long int rst=0;
    rst=mainn*mainn;
    cout<<mainn << " * " << mainn << " ::== " << rst <<"\n";

    long long int xrsti=0;
    xrsti=rst-1;
    cout<<rst << " - " << " 1 " << " ::== " << xrsti <<"\n";

    long long int xnmb=0;
    xnmb=mainn+remove_one;
    cout<<mainn << " + " << remove_one << " ::== " << xnmb <<"\n";

    long long int xrst=0;
    xrst=xnmb*mainn;
    cout<<xnmb << " * " << mainn << " ::== " << xrst <<"\n";

    long long int one_r=0;
    one_r=xrst-remove_one;
    cout<<xrst << " - " << remove_one << " ::== " << one_r <<"\n";

    long long int two_r=0;
    two_r=one_r-rst;
    cout<<one_r << " - " << rst << " ::== " << two_r <<"\n";

    long long int three_r=0;
    three_r=two_r+xnmb;
    cout<<two_r << " + " << xnmb << " ::== " << three_r <<" ur main * main number \n";

    cout<<"\n";

    long long int tr_r=0;
    tr_r=two_r+xrsti;
    cout<<two_r << " + " << xrsti << " ::== " << tr_r <<"\n";

    return 0;

}
