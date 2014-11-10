/*
 * GlobalHandel.h
 *
 *  Created on: Aug 14, 2014
 *      Author: michaelroberts
 */

#ifndef GLOBALHANDEL_H_
#define GLOBALHANDEL_H_
#include <MRIOpenCVSettings.h>
class GlobalHandel {
public:
	GlobalHandel();
	MRIOpenCVSettings * settings;
	virtual ~GlobalHandel();
};

#endif /* GLOBALHANDEL_H_ */
