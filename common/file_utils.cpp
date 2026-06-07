#include "file_utils.hpp"
#include <fstream>

std::string load_file(const std::string &file_path) {
    std::ifstream file_ifstream(file_path, std::ios::binary);

    if (!file_ifstream) {
        return "ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ. File Path: " + file_path;
    }

    return std::string(
        std::istreambuf_iterator<char>(file_ifstream),
        std::istreambuf_iterator<char>()
    );
}
