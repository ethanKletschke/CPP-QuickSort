#ifndef QUICKSORTER_H_INCLUDED
#define QUICKSORTER_H_INCLUDED

class QuickSorter {
    private: 
        static int partition(int[], int, int);
    public:
        static void sort(int[], int, int);
};

#endif // QUICKSORTER_H_INCLUDED
