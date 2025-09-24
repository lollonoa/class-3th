#include "stdafx.h"
#include "Container.h"

template<typename T>
inline Container<T>::Container(unsigned int allocateSize)
{
	size = allocateSize;
	index = 0;

	list = new T[allocateSize];
}

template<typename T>
void Container<T>::Push(T data)
{
	if (index >= size)
	{
		cout << "Index Out of Range" << endl;
		return;
	}
	list[index++] = data;
}

template<typename T>
const int& Container<T>::Index()
{
	return index;
}

template<typename T>
const T& Container<T>::operator[](const int index)
{
	return list[index];
}

template<typename T>
Container<T>::~Container()
{	
	delete [ ] list;
}
template class Container<bool>;
template class Container<char>;
template class Container<int>;
template class Container<float>;
template class Container<double>;
template class Container<const char*>;