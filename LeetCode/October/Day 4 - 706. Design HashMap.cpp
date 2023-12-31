// https://leetcode.com/problems/design-hashmap/
// TC: O(1)
// SC: O(N)

class MyHashMap {
public:
    int v[1000001];
    MyHashMap() {
        fill(v, v + 1000000, -1);
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};