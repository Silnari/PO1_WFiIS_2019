#pragma once

#include "Compass.h"

/**
 * This is a class representing Tracking system
 */
class TrackingSystem: public virtual Compass{
public:
	/**
 	 * Tracking system parameterless constructor, sets direction to north by default
 	 */
	TrackingSystem(){
		setDirection("North");
	}

	/**
 	 * Returns short name of class and direction
 	 */
	std::string CompassDirection() const override {
		return "T/" + getDirection();
	}

};