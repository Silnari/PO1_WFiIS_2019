#pragma once
#include "Haversine.h"

class TrackingUnit;

/**
 * This is a class representing point on map
 */
class Gps: public virtual Compass{
public:
	/**
 	 * Gps parameterless constructor, sets direction to east by default
 	 */
	Gps(){
        setDirection("East");
    }

    /**
 	 * Gps constructor, sets direction to east by default
 	 * @param name - name of Gps
 	 * @param x - x of point
 	 * @param y - y of point
 	 */
    Gps(std::string name, double x, double y): _name(name){
    	_coordinate.Latitude(y);
    	_coordinate.Longitude(x);
        setDirection("East");
    }

    /**
 	 * Gps constructor
 	 * @param toCpy - object to copy coordinates from
 	 */
    Gps(const Gps& toCpy){
    	_coordinate = toCpy._coordinate;
    }

	/**
 	 * Returns actual location
 	 */
	Coordinate LocationInfo() const{
		return _coordinate;
	}

	/**
 	 * Returns short name of class and direction
 	 */
	std::string CompassDirection() const override{
		return "G/" + getDirection();
	}

protected:
	std::string _name;
	Coordinate _coordinate;
};