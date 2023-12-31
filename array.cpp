#include <iostream>
#include <string>
#include <fstream>

// archive in simple text format:
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
using namespace std;

int main()
{
ofstream ofs("sourcename");

    // create class instance
    const gps_position g(0, 0, 0.0f);

    // save data to archive
    {
        boost::archive::text_oarchive oa(ofs);
        // write class instance to archive
        oa << g;
    	// archive and stream closed when destructors are called
    }

    // ... then restore the class instance to its orginal state
    gps_position newg;
    {
        // create and open an archive for input
        ifstream ifs("sourcename");
        boost::archive::text_iarchive ia(ifs);
        // read class state from archive
        ia >> newg;
        // archive and stream closed when destructors are called
    }
    return 0;
}
