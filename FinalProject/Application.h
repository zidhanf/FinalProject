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
		VBO10, EBO10, VAO10, texture10, VBO11, EBO11, VAO11, texture11, VBO12, EBO12, VAO12, texture12, VBO13, EBO13, VAO13, texture13, VBO14, EBO14, 
		VAO14, texture14, VBO15, EBO15, VAO15, texture15, VBO16, EBO16, VAO16, texture16, VBO17, EBO17, VAO17, texture17, VBO18, EBO18, VAO18, texture18, 
		VBO19, EBO19, VAO19, texture19, VBO20, EBO20, VAO20, texture20;
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
	void BuildPoolSurface();
	void BuildPinggiranPool_1();
	void BuildStandLampu();
	void BuildLamp();
	void BuildAtapLampu();
	void BuildPinggiranPool_2();
	void BuildPermukaanKolam();
	void BuildTree();
	void BuildFlower();
	void BuildTreeLeaf();
	void BuildChair();
	void BuildDoor();
	void BuildWindow();
	void BuildColoredPlane();
	void BuildChairBottom();
	void BuildWall();
	void DrawStreet();
	void DrawWall();
	void DrawChair();
	void DrawChairBottom();
	void DrawHouse();
	void DrawFlower();
	void DrawHouseRoof();
	void DrawPoolSurface();
	void DrawPinggiranPool_1();
	void DrawStandLampu();
	void DrawLamp();
	void DrawAtap();
	void DrawPinggiranPool_2();
	void DrawTree();
	void DrawTreeLeaf();
	void DrawDoor();
	void DrawWindow();
	void DrawColoredPlane();
	void InitCamera();
	void MoveCamera(float speed);
	void RotateCamera(float speed);
	void StrafeCamera(float speed);
};

