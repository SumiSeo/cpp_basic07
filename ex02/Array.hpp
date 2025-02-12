#ifndef ARRAY__HPP
#define ARRAY__HPP


template <class T>
class Array
{  

    private : 
        unsigned int n;
        T *array;

    public :
        Array() : n(0), array(NULL)
        {

        }

        Array(unsigned int n) : n(n), array(new T[n]()){};

        Array(const Array &original): n(original.n), array(new T[original.n])
        {
           for (unsigned int i = 0; i < n; i++)
            array[i] = original.array[i];
        };

        Array &operator=(const Array &original)
        {
            if(this != &original)
            {
                delete[] array;
                n = original.n;
                array = new T[n];
                for (unsigned int i = 0; i < n; i ++)
                    array[i] = original.array[i];
            }
            return *this;
        };
        ~Array()
        {
            delete[] array;
        };
        unsigned int size() const
        {
            return n;
        };

        T &operator[](unsigned int i)
        {
            if(i >= n)
                throw std::out_of_range("Index out of bounds");
            return array[i];
        }

        T &operator[](unsigned int i) const 
        {
            if(i >= n)
                throw std::out_of_range("Index out of bounds");
            return array[i];
        }
};  

#endif 