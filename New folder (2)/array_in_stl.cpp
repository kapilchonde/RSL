

/* Member  functions
 Following are the important and most used member function of array template

1] at():
     This method returns value in the array at the given range
     if the given range is greter than the array size,out_of_range exception thrown
   
   
     
#include<iostream>
using namespace std;
#include<array>

int main()
{
	 array<int ,5> data_array={11,22,33,44,55};
	  cout<<data_array.at(2); //33
	 // cout<<data_array.at(5); // Runtime error (out of range)
	  cout<<data_array[3]; //44
	  
}


front() method returns the first element in the array
back() method returns the last element in the array


#include<iostream>
using namespace std;
#include<array>

int main()
{
	// array<int ,5> data_array={11,22,33,44,55};
	 // cout<<data_array.front();// 11
	  // cout<<data_array.back();//55
	   
	array<int ,8> data_array={11,22,33,44,55};
	    cout<<data_array.front();// 11
	   cout<<data_array.back();// 0 [last value is 0 ]
	  
}

fill():
    This method assigns the given value to every element of
    the array

#include<iostream>
using namespace std;
#include<array>

int main()
{
	array<int ,8> data_array={11,22,33,44,55};
	data_array.fill(10);
	
	for(int i=0;i<=7;i++)
	{
		cout<<data_array[i]<<" ";
	}

}

swap():
This method swap the contents of two arrays of same type and same size 

It swaps index wise thus element of index i of first array
will be swapped with the element of index iof the second array

first_array.swap(second_array)


#include<iostream>
using namespace std;
#include<array>

int main()
{
	
	array<int ,5> data_array1={11,22,33,44,55};
	array<int ,5> data_array2={1,2,3,4,5};
	
	data_array1.swap(data_array2);
	
	for(int i=0;i<5;i++)
	{
		cout<<data_array1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<data_array2[i]<<" ";
	}

}

size():
 This method returns the number of elements present
 in the array



#include<iostream>
using namespace std;
#include<array>

int main()
{
	
	array<int ,5> data_array1={11,22,33,44,55};
	cout<<"Size is "<<data_array1.size(); //5
	array<int ,5> data_array2={11,22,33,44};
	cout<<"Size is "<<data_array2.size(); //5
}

begin():
begin() methods return the iterator pointing to the first element of the array
end() method return an iterator pointing to an element of the array


*/



