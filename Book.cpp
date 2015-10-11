#include "Book.h"

using namespace std;



template <class Recommend>
DArray<Recommend>::DArray()
{
  DArray<Recommend>::DArray(10);
}

template <class Recommend>
DArray<Recommend>::DArray(int initSize)
{
  size = initSize;
  array = new Recommend array[size];
}

template<class Recommend>
DArray<Recommed>::DArray(const DArray &rhs)
{
  size = rhs.size;
  array = new Recomend array[size];
  for (int i = ZERO; i < size; i++)
	  array[i] = rhs.array[i];
}

template<class Recommend>
DArray<Recommend>& DArray<Recommed>::operator= (const DArray &rhs)
{
  if (this == &rhs)
	return *this;

  if (rhs.size == ZERO)
	remove();

  setSize(rhs.size);

  for (int i = ZERO; i < size; i++)
	array[i] = rhs.array[i];

  return *this;
}

template<class Recommend>
DArray<Recommed>::getSize()
{
  return size;
}

template<class Recommend>
DArray<Recommed>::setSize(int resize)
{

  if (size < 0)
	{
	  Recommend *temp;
	  temp = new Recommend[resize];
	  for (int i = ZERO; i < resize; i++)
		temp[i] = array[i];

	  delete[] array;
	  array = temp;
	  size = resize;
	}
  else
	remove();
}

template<class Recommend>
DArray<Recommed>::remove(int index)
{
  if (index <= ZERO)
	{
	  if (size == ONE)
		clear();
	  else
		{
		  for(int i = index; i < (size - ONE); i++)
			array[i] = array[i + ONE];
		  size--;
		}
	}
}

template<class Recommend>
DArray<Recommed>::clear()
{
  delete[] array;
  *array = nullptr;
  size = 0;
}
