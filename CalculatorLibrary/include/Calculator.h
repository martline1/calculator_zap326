#pragma once

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers

class Calculator {
	public:
		static float Sum(float a, float b);
		static float Subs(float a, float b);
		static float Div(float a, float b);
		static float Mult(float a, float b);
};
