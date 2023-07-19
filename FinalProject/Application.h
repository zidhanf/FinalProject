#pragma once

#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Application :
    public RenderEngine
{
public:
    Application();
    ~Application();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, BO4, VAO4, EBO4, texture4, VBO5,
		BO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9,
		VBO10, EBO10, VAO10, texture10, VBO11, EBO11, VAO11, texture11, VBO12, EBO12, VAO12, texture12, VBO13, EBO13, VAO13, texture13, VBO14, EBO14, VAO14, texture14;
	float angle = 0;
	float position1 = -1;
	float position2 = -2;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildStreet();
	void BuildHouse();
	void BuildHouseRoof();
	//void BuildTree();
	//void BuildTreeLeaf();
	void BuildColoredPlane();
	void DrawStreet();
	void DrawHouse();
	void DrawHouseRoof();
	/*void DrawTree();
	void DrawTreeLeaf();*/
	void DrawColoredPlane();
	void InitCamera();
	void MoveCamera(float speed);
	void RotateCamera(float speed);
	void StrafeCamera(float speed);
};

