#include <iostream>
template<class T>
class u_unique_ptr
{
public:
	explicit u_unique_ptr(T *p = nullptr):ptr(p){}
	u_unique_ptr(const u_unique_ptr& obj) = delete;
	u_unique_ptr operator = (const u_unique_ptr& obj) = delete;
	~u_unique_ptr()
	{
		if (ptr)
		{
			delete ptr;
			ptr = nullptr;
		}
	}
	T& operator *()
	{
		return *ptr;
	}

	T& operator ->()
	{
		return ptr;
	}

private:
	T* ptr;
};

int main() 
{
	u_unique_ptr<int> ptr(new int);
	*ptr = 10;
	std::cout << "ptr content: " << *ptr << std::endl;

	u_unique_ptr<int> ptr1;
	return 0;
}