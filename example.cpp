// KGPL.cpp : Defines the entry point for the application.
//

#include "src/KGPL.h"

using namespace std;

int main(void)
{
	KGPL::Window window({
		600, 400, "example",
		4, 5
	});

	while (!window.shouldClose()) {
		glfwSwapBuffers(window.getGLFWwindow());
		glfwPollEvents();
	}

	return 0;
}
