#include "Suprannua.h"

void AI_spin(unsigned char agent, int agentNumber, bool direction, double amount)
{
    switch(agent)
    {
		/*((direction * 2) - 1) is used to alternate between -1 and +1 from 
		* direction values of either 0 or 1. 
		* 
		* ((0 * 2) - 1) = -1
		* ((1 * 2) - 1) = +1
		*/

        case POLYGON:   polygon[agentNumber].properties.angle +=
                        ((direction * 2) - 1) * (amount / (FRAME_RATE));
        break;
    }
}

void AI_follow(unsigned char agent, int agentNumber, unsigned char object, int objectNumber)
{

}

void AI_avoid(unsigned char agent, int agentNumber, unsigned char object, int objectNumber)
{

}

void AI_shoot(unsigned char agent, int agentNumber, unsigned char object, int objectNumber)
{

}

void AI_mimic(unsigned char agent, int agentNumber, unsigned char object, int objectNumber)
{

}

void AI_signal(unsigned char message)
{

}

void AI_listen()
{

}

void AI_catch(unsigned char agent, int agentNumber, unsigned char object, int objectNumber)
{

}

void AI_travel(unsigned char agent, int agentNumber, double toXPosition, double toYPosition, double Velocity)
{

}