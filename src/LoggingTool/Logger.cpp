/*
 * Logger.cpp
 *
 *  Created on: Aug 15, 2014
 *      Author: michaelroberts
 */

#include "Logger.h"
#include <boost/filesystem.hpp>
#include <stdio.h>
#include <sstream>

#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

Logger::Logger(std::string job) {
	boost::filesystem::create_directories("/home/michaelroberts/log/" + job);
	this->job = job;
}
void Logger::addimg(std::string topic, std::string process,int id , cv::Mat * img  )
{
	boost::filesystem::create_directories("/home/michaelroberts/log/" + this->job + "/" + topic + "/"+process);
	std::string  file =  SSTR( id );
	file += ".jpg";
	cv::imwrite("/home/michaelroberts/log/" + this->job + "/" + topic + "/"+process+"/" +file,*img);

}
Logger::~Logger() {
	// TODO Auto-generated destructor stub
}

