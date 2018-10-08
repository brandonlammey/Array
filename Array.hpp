
/*===== ===== =====*/
/*Constructor and Destructors*/
/*===== ===== =====*/
template<typename T>
Array<T>::Array()
{
	m_size = 0;
	m_arrPtr = nullptr;
}


template<typename T>
Array<T>::Array(int arrSize)
{
	m_size = arrSize;
	m_arrPtr = new T*[arrSize];

	//set all indeces in array to nullptr
	for(int i = 0; i<m_size; i++)
	{
		m_arrPtr[index] = nullptr;
	}
}

template<typename T>
Array<T>::Array(const Array &myArr)
{

}


template<typename T>
Array<T>::~Array()
{
	//free memory
	for(int i = 0; i < m_size; ++i)
    	delete[] m_arrPtr[i];

	// delete array of pointers
	delete[] m_arrPtr; 
	m_size = 0;
}

/*===== ===== =====*/
/*Member Functions*/
/*===== ===== =====*/
template<typename T>
bool Array<T>::isEmpty() const
{
	if(m_size == 0)
		return true;
	else
		return false;
}

template<typename T>
int Array<T>::getSize() const
{
	return m_size;
}

template<typename T>
bool Array<T>::setValue(int index, T val)
{
	if(m_size == 0 || index > (m_size-1) || index < 0)
	{
		//if index is not within the array return false
		return false;
	}
	else if(m_arrPtr[index] == nullptr)
	{
		//set array pointer at the index to point to new value of type T
		//if nothing exists at that index
		m_arrPtr[index] = new T(val);

		return true ;
	} 
	else
	{
		//delete what currently exists at index and create new value of type T
		delete[] m_arrPtr[index];
		m_arrPtr[index] = new T(val);
		return true;
	}
}

template<typename T>
void Array<T>::addFront(T val)
{
	//create new array of size m_size+1
	int temp_size = m_size+1;
	T** temp_arrPtr = new T*[temp_size];

	//set first element as val 
	temp_arrPtr[0] = new T(val);

	//set remaining elements
	for(int i =1; i< temp_size; i++)
	{
		temp_arrPtr[i] = m_arrPtr[i-1];
	}

	// delete array of pointers
	//keep access to items it is pointing to through temp_arrPtr 
	delete[] m_arrPtr; 

	//set member variables
	m_arrPtr = temp_arrPtr;
	m_size = temp_size; 

}

template<typename T>
void Array<T>::addBack(T val)
{
	//create new array of size m_size+1
	int temp_size = m_size+1;
	T** temp_arrPtr = new T*[temp_size];

	//set first elements
	for(int i =0; i< m_size; i++)
	{
		temp_arrPtr[i] = m_arrPtr[i];
	}

	//set last element as val 
	temp_arrPtr[temp_size-1] = new T(val);

	//delete array of pointers but not what they are pointing to
	delete[] m_arrPtr;

	//set member variables
	m_arrPtr = temp_arrPtr;
	m_size = temp_size; 
}

template<typename T>
bool Array<T>::rotateFrontToBack()
{
	return 0;
}

template<typename T>
bool Array<T>::rotateBackToFront()
{
	return 0;
}

template<typename T>
T Array<T>::getValue(int index)
{
	return 0;
}

template<typename T>
int Array<T>::getIndex(T val)
{
	return 0;
}

template<typename T>
int Array<T>::getInstances(T val)
{
	return 0;
}

template<typename T>
bool Array<T>::removeValue(T val)
{
	return 0;
}

