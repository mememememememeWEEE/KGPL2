#pragma once
#include "KGPL.h"

namespace KGPL {
	class Window final {
	protected:
		//GLFWwindow* window;
		uint32_t m_Width, m_Height;
		std::string m_Title;

	public:
		Window(uint32_t width, uint32_t height, const std::string& title);
		~Window();

		//auto inline getGLFWwindow() const { return this->window; }
		auto inline getWidth() const { return m_Width; }
		auto inline getHeight() const { return m_Height; }
		auto inline getTitle() const { return m_Title; }
		//auto inline shouldClose() const { return glfwWindowShouldClose(this->window); }
	};
}
