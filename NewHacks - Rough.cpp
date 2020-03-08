#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

int readSnow(string fileName);

int main{
	
	while(go){
		double levelSnow = readSnow("output.txt");
	}
	
	temperature > -2 && temperature < 2 && humidity > 65 ? condition = wet: condition = notWet;
	
	if (condition == wet)
	{
		if(force < safeF && levelSnow < safeH){
			//turn on green light
		}
		if (force > safeF && force < upperB && levelSnow > safeH && levelSnow < upperSB){
			//turn on yellow light
		}
		if (force > upperB && levelSnow > upperSB){
			//turn on red light and vibrate
		}
	}
	
	if (condition == dry)
	{
		if(force < safeF2 && levelSnow < safeH2){
			//turn on green light
		}
		if (force > safeF2 && force < upperB2 && levelSnow > safeH2 && levelSnow < upperSB2){
			//turn on yellow light
		}
		if (force > upperB2 && levelSnow > upperSB2){
			//turn on red light and vibrate
		}
	}
	

}

int readSnow (string fileName){
	ifstream my_ifstream;
	double snowHeight, temperature, humidity, force;
	
	my_ifstream.open(fileName);
	
	if(!myifstream.fail()){
		my_ifstream >> snowHeight;
		return snowHeight;
	}
	else{
		return 0;
	}
}
