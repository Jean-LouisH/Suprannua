/**
 * Geometry
 *
 * Author: Jean-Louis Haywood
 *
 * Handles the mathematics behind 2D polygon and rectangle plotting, spatial data and transforms.
 */

double geometry_findDistance(	unsigned char firstObject,
								int firstObjectNumber,
								unsigned char secondObject,
								int secondObjectNumber);	//Finds the hypotenuse between object centres as a right angled triangle.

void geometry_plotBlock(int objectNumber);					//Plot block points based on centre, height and width.
void geometry_plotPolygon(int objectNumber);				//Plot polygon points based on number of sides, and radius.
void geometry_transform();									//Update points based on velocity and angular displacement.
							 