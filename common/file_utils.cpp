#include "file_utils.hpp"
#include <fstream>

const std::string load_file(std::string file_path) {
    std::ifstream file_ifstream(file_path, std::ios::binary);

    if (!file_ifstream) {
        return "";
    }

    return std::string(
        std::istreambuf_iterator<char>(file_ifstream),
        std::istreambuf_iterator<char>()
    );
}
