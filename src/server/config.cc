#include <iostream>
#include "shepherd/server/config.h"

using namespace shepherd;

const std::string server::Config::DefaultConfigPath = "etc/shepherd/shepherd.conf";
const FlagNameLookup server::Config::flagNameLookup = server::Config::LoadFlagNameLookup();

server::Config::Config(){	

}
server::Config::~Config(){

}
FlagNameLookup server::Config::LoadFlagNameLookup(){	
    FlagNameLookup  flagNameLookup;
    flagNameLookup["C"] ="peers";
    flagNameLookup["CF"] ="peers-file";
    flagNameLookup["n"]="name";
    flagNameLookup["c"]="addr";
    flagNameLookup["cl"]="bind-addr";
    flagNameLookup["s"]="peer-addr";
    flagNameLookup["sl"]="peer-bind-addr";
    flagNameLookup["d"]="data-dir";
    flagNameLookup["m"]="max-result-buffer";
    flagNameLookup["r"]="max-retry-attempts";
    flagNameLookup["maxsize"]="max-cluster-size";
    flagNameLookup["clientCAFile"]="ca-file";
    flagNameLookup["clientCert"]="cert-file";
    flagNameLookup["clientKey"]="key-file";
    flagNameLookup["serverCAFile"]="peer-ca-file";
    flagNameLookup["serverCert"]="peer-cert-file";
    flagNameLookup["serverKey"]="peer-key-file";
    flagNameLookup["snapshotCount"]="snapshot-count";
	return flagNameLookup;
}
