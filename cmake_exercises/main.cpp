#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

#include <vector>
#include <boost/algorithm/string.hpp>


int main(int argc, char const *argv[])
{

    std::string command_string = "GET_ROPOD_LIST++{HELLO}";
//   \"header\": {
//     \"type\": \"VARIABLE_QUERY\",
//     \"version\": \"0.1.0\",
//     \"metamodel\": \"ropod-msg-schema.json\",
//     \"msg_id\": \"0d05d0bc-f1d2-4355-bd88-edf44e2475c8\",
//     \"timestamp\": current_time
//   },
//   \"payload\": {
//     \"metamodel\": \"ropod-demo-cmd-schema.json\",
//     \"commandList\":[
//       { 
//         # \"command\": \"GETQUERY\",
//         \"features\": features_list,
//         \"start_time\": \"02/05/2018\", 
//         \"end_time\": \"02/23/2018\"
//       }
//      ]
//   }
// }"

    std::cout << "command" << std::endl << command_string << std::endl;

    std::vector<std::string> commands;
    boost::split(commands, command_string, boost::is_any_of("++"));

    for (auto &i : commands)
    {
        std::cout << i <<std::endl;
    }

    std::cout << "commands[0]: " << commands[0] <<std::endl;


    // istringstream iss(command);
    // copy(istream_iterator<std::string>(iss),
    //     istream_iterator<std::string>(),
    //     commands.pushback()
        // ostream_iterator<string>(std::cout, "\n")); 

	std::cout << "Everything is running." << std::endl;
	return 0;
}