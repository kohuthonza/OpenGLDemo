#include<glm/glm.hpp>
#include<GL/glew.h>


class Vertex
{
public:
	Vertex(const glm::vec3 &pos)
	{
		this->pos = pos;
	}
protected:
private:
	glm::vec3 pos;
};


class Mesh
{
public:
	Mesh(Vertex *vertices, unsigned int numVertices);
	void Draw();
	Mesh();
	virtual ~Mesh();

private:

	enum 
	{
		POSITION_VB,
		NUM_BUFFERS
	};

	GLuint vertexArrayObject;
	GLuint vertexArrayBuffers[NUM_BUFFERS];
	unsigned int drawCount;
};

