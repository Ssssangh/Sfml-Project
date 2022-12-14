#pragma once
#include <SFML/Graphics.hpp>
#include <random>

using namespace sf;
using namespace std;

enum class Origins
{
	TL,
	TC,
	TR,
	ML,
	MC,
	MR,
	BL,
	BC,
	BR,
};

class Utils
{
private:
	static random_device rd;
	static mt19937 gen;
public:
	static void SetOrigin(Text& obj, Origins origin);
	static void SetOrigin(Sprite& obj, Origins origin);
	static void SetOrigin(Shape& obj, Origins origin);
	static void SetOrigin(Transformable& obj, Origins origin);
	static int Range(int min, int maxExclude); //0, 배열사이즈 -> 0~배열사이즈 까지 랜덤
	static float RandomRange(float min, int max);

	//대표적인 스칼라값은 속도 말고 속력
	static float Magnitude(const Vector2f& vec);
	static float SqrMagnitude(const Vector2f& vec);


	static Vector2f Normalize(const Vector2f& vec);
};

