#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    bool initSucceeded = static_cast<bool>(glfwInit());

    if (!initSucceeded) {
        std::cerr << initSucceeded << std::endl;
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(800, 600, "Teste", nullptr, nullptr);
    if (window == nullptr) {
        std::cerr << "falha ao inicializar a janela" << std::endl;
        return 1;
    }

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
