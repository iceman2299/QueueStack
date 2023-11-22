

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

template <class T>

class TQueue
{
protected:
  int size;
  int start, end;
  T* data;
public:
  TQueue(int _size);
  TQueue(const TQueue<T>&p);
  ~TQueue();
  void Push(T&p);
  T Pull();
  int GetCount();
  bool IsFull();
  bool IsEmpty();
};

#endif