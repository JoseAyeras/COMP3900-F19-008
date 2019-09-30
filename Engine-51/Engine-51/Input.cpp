#include "Header.h"

// Process user inputs: query GLFW whether relevant keys are pressed/released this frame and react accordingly
void processInput(GLFWwindow* window, glm::vec3& position, glm::vec3& rotation)
{
	//If escape key is pressed, close window
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, true);
	}

	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
		position.z -= 0.03f;
	}

	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
		position.z += 0.03f;
	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
		position.x -= 0.03f;
	}

	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
		position.x += 0.03f;
	}
	
	if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS) {
		rotation.y += 1.0f;
	}

	if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS) {
		rotation.y -= 1.0f;
	}
}
