#include <stdio.h>
#include <math.h>
#define MAX2 (a,b) (a)>(b)? (a) : (b)

double w = 2; // 가중치 weight
double b = 1; // 편향 bias

double getActivation(double x) {
	//항등식
	return x;

	//ReLU max(0,x);
	//return MAX2(0,x);

	//Sigmoid = 1/(1+e^-x)
	return 1 / (1 + exp(-x));
}
double getfeedForward(double input) {
	double sigma = w * input + b;
	double activation = getActivation(sigma);
	double output_y = activation;
	return output_y;
}

int main()
{
	double input_x;
	double output_y;

	for (input_x = 0; input_x < 10; input_x++)
	{
		output_y = getfeedForward(input_x);
		printf("input_x == %lf --------- output_y == %lf\n", input_x, output_y);
	}

	return 0;
}