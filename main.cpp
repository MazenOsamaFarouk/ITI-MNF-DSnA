// main.cpp


#include <iostream>
#include <list>
#include <forward_list>


#if  0
#include <vector>
#include <array>


#define _add(Type)      \
Type  add(Type a, Type b) \
{\
	return a+b ;\
}

// template function
template <typename Type >
Type  add(Type a, Type b) 
{
	return a+b ;
}

// template class
template <typename Type,int size >
class cArray
{
	private:
		Type arr[size]; // statically allocated
	public:
		Type& operator [](int index)
		{
			return arr[index];
		}
};

#endif


#if 0
int add(int a, int b)
{
	return a+b;
}


float add(float a, float b)
{
	return a+b;
}


char add(char a, char b)
{
	return a+b;
}


std::string add(std::string a, std::string b)
{
	return a+b;
}
#endif


int main(void)
{

#if 0
	std::vector<int> v(5) ;
	// exception
	/*
	for(int i=0; i<5; i++)
	{
		v.at(i) = (i+1)*(i+1);		
	}
	
	for(int i=0; i<v.size(); i++)
	{
		std::cout << v[i] << ' ' ;
	}
	*/
	//  for i in range(5):
	#if 1
	for(std::vector<int>::iterator it=v.begin();  it < v.begin()+5 ; it++ )
	{
		it = v.insert(it, 200 );
	}
	
	/*
	// modern c++
	for( auto i : v) // ranged for loop 
	{
		
	}
	*/
	
	for(std::vector<int>::iterator it=v.begin();  it < v.begin()+5 ; it++ )
	{
		std::cout << *it << ' ' ;
	}
	#endif
	
	/*
	std::cout << add<long int>(5,6) << ' ' 
	          << add(5.5,6.25) << ' ' 
	        //  << add(static_cast<std::string>("Mazen"), static_cast<std::string>("Osama"))<< std::endl;
			<< add<std::string>("Mazen ", "Osama");
	
	cArray<int, 10> a ;
	
	for(int i=0; i<10; i++)
	{
		a[i] = 20 ;
	}
	
	for(int i=0; i<10; i++)
	{
		std::cout << a[i] << ' ' ;
	}
	*/
	
#endif
	
	// list -> double linklist
	std::list<int> mylist = {5,10,15,20} ;
	// forward_list -> single linked list
	std::forward_list<int> myForwardList = {2,4,6,8};
	
	mylist.push_back(25);
	mylist.push_front(2);
	
	for(auto it=mylist.begin(); it != mylist.end(); it++)
	{
		std::cout << *it << ' ' ;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}