#pragma once
#include "Service.h"
#include "Weather.h"
#include <fstream>
#include <exception>
#include "json.hpp"

using namespace std;
using nlohmann::json;

class JsonService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

