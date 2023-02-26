#include "KGPL_window.h"

KGPL::Window::Window(WindowConfig config)
{
	m_Config = &config;

	if (!glfwInit()) {
		fprintf(stderr, "GLFW initialization failed\n");
		exit(EXIT_FAILURE);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, config.opengl_major);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, config.opengl_minor);

	m_Window = glfwCreateWindow(config.width, config.height, config.title.c_str(), NULL, NULL);

	if (!m_Window) {
		fprintf(stderr, "Window creation failed\n");
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(m_Window);
	glViewport(0, 0, config.width, config.height);

	LOG("OpenGL Version: %s\n", glGetString(GL_VERSION));
}

KGPL::Window::~Window()
{
	glfwDestroyWindow(m_Window);
	glfwTerminate();
}
