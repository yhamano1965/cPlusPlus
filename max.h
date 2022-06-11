#ifndef _MAX_H_
#define _MAX_H_

template <class T>
T max_t(T x, T y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
#endif // !_MAX_H_
