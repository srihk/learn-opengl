#version 330 core

layout(location = 0) in vec3 aPos;

uniform vec4 ourColor;

out vec4 VertColor;
out vec4 VertColor1;

void main() {
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
    VertColor = vec4(
            max(ourColor.y, aPos.x + 0.5),
            max(ourColor.y, aPos.y + 0.5),
            max(ourColor.y, max(-aPos.x - aPos.y, -0.5) + 0.5),
            1.0
        );
}
