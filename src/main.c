#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", NULL, NULL);
    if (!window) {
        printf("Failed to create GLFW window!\n");
        glfwTerminate();
        return 1;
    }
    glfwMakeContextCurrent(window);
    return 0;
}
