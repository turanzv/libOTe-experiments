#include "cryptoTools/common/Defines.h"
#include "cryptoTools/network/IOService.h"
#include "cryptoTools/network/Session.h"

using namespace osuCrypto;

int main() {
    IOService ios;
    Session session(ios, "127.0.0.1:1212", SessionMode::Server);

    // Create a PRG
    PRG prg(channel);
    
    
}