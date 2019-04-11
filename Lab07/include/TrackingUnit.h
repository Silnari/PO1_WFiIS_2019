#pragma once

#include "TrackingSystem.h"
#include "Gps.h"
#include "Haversine.h"

/**
 * This is a class representing Tracking unit
 */
class TrackingUnit: public Gps, public TrackingSystem{
public:
	/**
 	 * Tracking system parameterless constructor, sets direction to south by default
 	 */
	TrackingUnit(){
		setDirection("South");
	}

	/**
 	 * Returns short name of class and direction
 	 */
	std::string CompassDirection() const override{
		return "TUnit/" + getDirection();
	}

	/**
 	 * Sets start location
 	 * @param coordinate - current gps location
 	 */
	void Location(const Coordinate coordinate){
		_coordinateStart = coordinate;
	}

	/**
 	 * Start tracking distance
 	 */
	void Start(){ 
		_coordinateCurrent = _coordinateStart;
		_distance = 0;
	}

	/**
 	 * Getter of distance
 	 */
	double Distance() const{
		return _distance;
	}

	/**
 	 * Returns current tracking location
 	 */
	Coordinate LocationInfo() const{
		return _coordinateCurrent;
	}

	/**
 	 * Moves location
 	 * @param val - how much to move
 	 * @param direction - where to go
 	 */
	void Go(double val, std::string direction){
		_coordinateCurrent.MoveInDirection(val, direction);
		_distance = Haversine(_coordinateStart.Longitude(), _coordinateStart.Latitude(), _coordinateCurrent.Longitude(), _coordinateCurrent.Latitude());
	}

private:
	Coordinate _coordinateStart;
	Coordinate _coordinateCurrent;
	double _distance;
};