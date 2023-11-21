#include <iostream>
#include"TQueue.h"


template <class T>
TQueue<T>::TQueue(int _size)
{
  if (_size > 0)
  {
    size = _size;
    start = 0;
    end = 0;
    data = new T[size];
  }
  else
    throw "invalid size";
}

template <class T>
TQueue<T>::TQueue(const TQueue<T>& p)
{
  size = p.size;
  start = p.start;
  end = p.end;
  data = new T[size];
  for (int i = 0; i < size; i++)
  {
    data[i] = p.data[i];
  }
}

template <class T>
TQueue<T>::~TQueue()
{
  delete[] data;
  start = 0;
  end = 0;
  count = 0;
}

template <class T>
void TQueue<T>::Push(T& p)
{
  if (end < size)
  {
    data[end] = p;
    end++;
  }
  else
    throw "error";
}

template <class T>
T TQueue<T>::Pull()
{
  T elem;
  if (start < size && start > 0)
  {
    elem = data[start];
    start++;
    return elem;
  }
  else
    throw "error";
}

template <class T>
int TQueue<T>::GetCount()
{
  return end - start;
}

template <class T>
bool TQueue<T>::IsEmpty()
{
  if (start == end)
    return 1;
  else
    return 0;
}

template <class T>
bool TQueue<T>::IsFull()
{
  if (end == size)
    return 1;
  else
    return 0;
}
