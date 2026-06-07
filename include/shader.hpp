#ifndef SHADER_HPP
#define SHADER_HPP

#include <glad/glad.h>

#include <string>

class Shader {
public:
    unsigned int ID;

    // Reads and builds the shader.
    Shader(const std::string &vertexPath, const std::string &fragmentPath);

    // Use / activate the shader.
    void use();

    // Utility uniform functions.
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
private:
    void compileShaders(const char *vertexCode, const char *fragmentCode);
};

#endif
