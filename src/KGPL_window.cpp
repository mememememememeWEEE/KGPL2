#include "KGPL_window.h"

KGPL::Window::Window(uint32_t width, uint32_t height, const std::string& title)
{
	m_Width = width; m_Height = height; m_Title = title;
	
}

KGPL::Window::~Window()
{
}
