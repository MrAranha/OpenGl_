#include "glfwFuncs.h"
#include <iostream>
#include<GLFW/glfw3.h>

using namespace Functions;

void glfwFuncs::framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}