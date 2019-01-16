#ifndef ECGRAD2_H
#define ECGRAD2_H

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
#endif // ECGRAD2_H
