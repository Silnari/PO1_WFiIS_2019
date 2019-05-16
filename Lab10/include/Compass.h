#pragma once

#include <string>

/**
 * This is a class representing direction
 */
class Compass{
public:
	Compass(){
		_direction = "West";
	}

    Compass(const Compass& toCpy){
        _direction = toCpy.getDirection();
    }

	/**
 	 * Returns short name of class and direction
 	 */
	virtual std::string CompassDirection() const {
		return "C/" + _direction;
	}

	/**
	 * Getter of direction
	 */
	const std::string &getDirection() const {
        return _direction;
    }

    /**
	 * Setter of direction
	 */
    void setDirection(const std::string &direction) {
        _direction = direction;
    }

    /**
	 * Static method returning direction as string
	 */
    static std::string North(){
    	return "North";
    }

    /**
	 * Static method returning direction as string
	 */
    static std::string South(){
    	return "South";
    }

    /**
	 * Static method returning direction as string
	 */
    static std::string East(){
    	return "East";
    }

    /**
	 * Static method returning direction as string
	 */
    static std::string West(){
    	return "West";
    }

private:
std::string _direction;
};