#pragma once
#include <pugixml/pugixml.hpp>
#include <map>
#include <iostream>
#include <glm\glm.hpp>
#include <vector>
#include "../MeshObj/cMeshObj.h"


class cXML
{
public:
	cXML();
	~cXML();

	bool loadModelFromXML(std::string filename, std::map<std::string, cMeshObj*>& mapInstancetoMeshOBJ, std::vector<cMeshObj*>& pVecInstanceMeshObj);
	bool findPathFromModelName(std::string modelName, std::string& modelPath);

	void loadSoundFromXML();

	std::map<std::string, std::string> mapModelNameAndPath;
	std::map<std::string, std::string> mapInstanceAndModelName;
	glm::vec3 cameraEyeFromXML;

	std::string my_fx_path[2];
};

