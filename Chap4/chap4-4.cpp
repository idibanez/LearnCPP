#include <iostream>
#include <cmath>

double getTowerHeight(){
	double tower_height;
	
	std::cout<< "Enter the height of the tower in meters:\t";
	std::cin>> tower_height;

	return tower_height;
}

void ballHeightCalc(double tower_height){
	double gravity_constant{9.81};
	double x_seconds{};
	double current_height{};
	
	for(int i{0};i<6;i++){
		x_seconds = static_cast<double>(i);
		current_height = tower_height - 0.5*gravity_constant*pow(x_seconds,2);
		
		if(current_height>=0){
			std::cout<< "At " <<i<< " seconds, the ball is at height:\t" << current_height << " meters\n";
		}else{
			std::cout<< "At " <<i<< " seconds, the ball is on the ground.\n";
			break;
		}
	}
}

int main(){
	double tower_height{getTowerHeight()};
	ballHeightCalc(tower_height);
	
	return 0;
}