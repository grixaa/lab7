#pragma once
#include "Service.h"
#include "pugixml-1.13/src/pugixml.hpp"
#include <exception>
using namespace pugi;
using namespace std;

class XmlService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

