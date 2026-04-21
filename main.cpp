#include <iostream>

#include <glad/glad.h>

#include <GLFW/glfw3.h>

const char* vertexShaderSource = "#version 330 core\n"

"layout (location = 0) in vec3 aPos; \n"

"void main()\n"

"{\n"

"  gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"

"}\0";

const char* fragmentShaderSource = "#version 330 core\n"

"out vec4 FragColor; \n"

"void main()\n"

"{\n"

"  FragColor = vec4(0.8f, 0.3f, 0.02f, 1.0f);\n"

"}\n\0";

int main() {

	glfwInit();



	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);



	GLFWwindow* window = glfwCreateWindow(800, 800, "BRUNO", NULL, NULL);



	if (window == NULL)

	{

		std::cout << "Failed to create GLFW window " << std::endl;

		glfwTerminate();

		return -1;





	}

	glfwMakeContextCurrent(window);



	gladLoadGL();











	glViewport(0, 0, 800, 800);



	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

	glClear(GL_COLOR_BUFFER_BIT);

	glfwSwapBuffers(window);



	while (!glfwWindowShouldClose(window))

	{

		glfwPollEvents();

	}





	glfwDestroyWindow(window);

	glfwTerminate();

	return 0;

}