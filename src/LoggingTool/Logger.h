/*
 * Logger.h
 *
 *  Created on: Aug 15, 2014
 *      Author: michaelroberts
 */

#ifndef LOGGER_H_
#define LOGGER_H_
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <string>
#include <iostream>
#include <pcl/point_types.h>

#include <pcl/point_types.h>

#include <boost/thread/thread.hpp>


#include <pcl/io/vtk_io.h>
class Logger {
public:
	Logger(std::string job );
	std::string job;
    void addimg(std::string topic , std::string process,int id ,cv::Mat * img  );
	virtual ~Logger();
};

#endif /* LOGGER_H_ */
