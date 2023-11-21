#include <iostream>


template <class T>

class TStack
{
protected:
  int size;
  int count;
  T* data;
public:
  TStack(int);
  TStack(const TStack<T>&);
  ~TStack();
  void Push(T&);
  T Pull();
  int GetCount();
  bool IsFull();
  bool IsEmpty();
};