#ifndef BAG_HEADER_FILE
#define BAG_HEADER_FILE
#include <stdlib.h>
class bag {
    public:
        typedef double data_type;
        typedef std::size_t size_type;
        static const size_type DEFAULT_CAPACITY = 50;
        
        bag(size_type ini_capacity = DEFAULT_CAPACITY);
        bag(const bag & source);
        ~bag();
        
        size_type size() const {return used;}
        size_type count(const data_type & target) const;
        
        void insert(const data_type & entry);
        size_type erase(const data_type & target);
        bool erase_one(const data_type & target);
        void reserve(size_type given_capacity);
        void operator +=(const bag & addend);
        void operator =(const bag & source);
    private:
        data_type *data;
        size_type used;
        size_type capacity;
};

bag operator +(const bag & b1, const bag & b2);

#endif
