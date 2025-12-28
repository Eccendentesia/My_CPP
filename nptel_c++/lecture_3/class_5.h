
class stack{
    private : 
      int top = -1 , size ;
      int *arr;
    public:
      stack(int size){
          arr = new int(size);
      }
    ~stack(){
        delete []arr;
    } 
    int push(int data ){};
    int pop(){};
    int isEmpty(){};
    int isFull(){};
    void print(){};
};