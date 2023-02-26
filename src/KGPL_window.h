#pragma once
#include "KGPL.h"

namespace KGPL {
	struct WindowConfig final {
		int width = 600;
		int height = 400;
		std::string title = "KGPL";

		int opengl_major = 3;
		int opengl_minor = 0;
	};

	class Window final {
	protected:
		GLFWwindow* m_Window;
		WindowConfig* m_Config;

	public:
		Window(const WindowConfig config);
		~Window();

		Window(Window const&) = delete;
		Window& operator=(Window const&) = delete;

		auto inline getGLFWwindow()  const { return m_Window; }
		auto inline getConfig()      const { return m_Config; } //unsafe, don't use it
		auto inline getWidth()       const { return m_Config->width; }
		auto inline getHeight()      const { return m_Config->height; }
		auto inline getTitle()       const { return m_Config->title; }
		auto inline shouldClose()    const { return glfwWindowShouldClose(m_Window); }
	};
}
