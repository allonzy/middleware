#include "Server.h"

using namespace std;
using namespace Mp3Player;

int main(int argc, char* argv[])
{

    Ice::CommunicatorPtr ic;
    try {
        ic = Ice::initialize(argc, argv);
        Ice::ObjectAdapterPtr adapter =
            ic->createObjectAdapterWithEndpoints("Mp3PlayerAdapter", "default -p 10000");
        Ice::ObjectPtr object = new Mp3PlayerI;
        adapter->add( object, ic->stringToIdentity("Mp3Player"));
        adapter->activate();
        ic->waitForShutdown();
    } catch (const Ice::Exception& e) {
        cout << e << "\n";
    }
    if (ic) {
        try {
            ic->destroy();
        } catch (const Ice::Exception& e) {
            cerr << e << endl;
        }
    }
    return 1;
}
