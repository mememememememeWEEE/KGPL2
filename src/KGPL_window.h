#pragma once
#include "KGPL.h"

namespace KGPL {
	struct WindowConfig final {
		uint32_t width = 600;
		uint32_t height = 400;
		std::string title = "KGPL";

		uint32_t opengl_major = 3;
		uint32_t opengl_minor = 0;
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
