#include <iostream>

template <class T>

class TQueue
{
protected:
  int size;
  int start, end;
  T* data;
public:
  TQueue(int _size = 1);
  TQueue(const TQueue<T>&);
  ~TQueue();
  void Push(T&);
  T Pull();
  int GetCount();
  bool IsFull();
  bool IsEmpty();
};