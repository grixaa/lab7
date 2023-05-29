<<<<<<< HEAD
﻿#include <iostream>
#include "JsonService.h"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
=======
﻿// WeatherService.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "XmlService.h"
int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
>>>>>>> feature-xml
}
