#include <vector>
class DynamicArray {
private:
    std::vector<int> dyArr;
    int capacity;
    int length;
public:

    DynamicArray(int capacity) {
        this-> dyArr.resize(capacity);
        this-> dyArr.erase(dyArr.begin() , dyArr.end());
    }
    void set(int i, int n){
        this->dyArr[i] = n;
    }

    int get(int i) {
        return dyArr[i];
    }

    void insert(int i, int n) {
        this->dyArr[i] = n;
    }

    void pushback(int n) {
        this->dyArr.push_back(n);
    }

    int popback() {
        int i = dyArr.back();
        dyArr.pop_back();
        return i;
    }

    void resize() {
        int newCap = dyArr.size()*2;
        this->dyArr.resize(newCap);
    }

    int getSize() {
        return dyArr.size();
    }

    int getCapacity() {
        return dyArr.capacity();
    }
};
