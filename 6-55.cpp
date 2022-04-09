#include <iostream>
#include <random>
#include <chrono>

using namespace std ;

int main(int argc ,  char *argv[] )
{
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count() ;
    mt19937 rand_generator(seed) ;
    uniform_int_distribution<int> dist(6,666) ;
    for(int cnt = 0 ; cnt < 10 ; ++cnt) cout << dist(rand_generator) << endl ;
    return 0 ;
}
