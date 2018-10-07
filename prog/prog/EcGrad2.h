#pragma once
class EcGrad2
{
private:
	float delta;
	float x, y, z;

public:
	EcGrad2();
	EcGrad2(float, float, float);
	void ec2(float, float, float);
	~EcGrad2();
};

