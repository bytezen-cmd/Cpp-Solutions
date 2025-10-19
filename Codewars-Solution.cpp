#include <string>
#include <cctype>
#include <iostream>

namespace CodewarsSolution {

    std::string rot13(std::string msg)
    {
        for (int i = 0; i < msg.length(); i++) {
            int c = (int)msg[i];
            if (std::isupper(msg[i]))
                msg[i] = 'A' + ((c - 65 + 13) % 26);
            else if (std::islower(msg[i]))
                msg[i] = 'a' + ((c - 97 + 13) % 26);
        }
        return msg;
    }
};

