#include "Suprannua.h"

void AI_spin(unsigned char agent, int agentNumber, bool direction, double amount)
{
    switch(agent)
    {
        case POLYGON:   polygon[agentNumber].properties.angle +=
                        ((direction * 2) - 1) * (amount / (FRAME_RATE));
        break;
    }
}
