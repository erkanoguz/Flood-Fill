#ifndef BOARDINTERFACE_H
#define BOARDINTERFACE_H



class BoardInterface 
{
    public:
        virtual ~BoardInterface() {}
        virtual void SetSize(const int numRows, const int numCols) = 0;
        virtual void GetSize(int & numRows, int & numCols) = 0;
        virtual void SetZero(const int row, const int col) = 0;
        virtual void SetOne(const int row, const int col) = 0;
        virtual bool isFilled (const int row, const int col) = 0;
        virtual void Print() = 0;   
};


#endif // !BOARDINTERFACE_H
