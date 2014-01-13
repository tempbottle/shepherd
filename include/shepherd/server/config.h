#ifndef SHEPHERD_INCLUDE_SERVER_CONFIG_H_
#define SHEPHERD_INCLUDE_SERVER_CONFIG_H_

#include <string>
#include <unordered_map>

typedef std::unordered_map<std::string, std::string> FlagNameLookup;

namespace shepherd {
	namespace server{
		class Config{
			public: 
				Config();
				~Config();
              	void Load();
				static const std::string DefaultConfigPath;
			private:
				static const FlagNameLookup flagNameLookup;
				static FlagNameLookup LoadFlagNameLookup();
		};
	}
}
#endif //SHEPHERD_INCLUDE_SERVER_CONFIG_H_
