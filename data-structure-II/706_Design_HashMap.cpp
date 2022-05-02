/*
https://leetcode.com/problems/design-hashmap/

Test Case-1:
["MyHashMap","remove","get","put","put","put","get","put","put","put","put"]
[[],[14],[4],[7,3],[11,1],[12,1],[7],[1,19],[0,3],[1,8],[2,6]]

*/

class MyHashMap {
public:
    vector<int> hashVect;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        int oldSize = hashVect.size();
        if(hashVect.size()<key+1)
            hashVect.resize(key+1);
        for(int i=oldSize;i<hashVect.size(); i++){
            if(hashVect[i]==0){
                hashVect.at(i) = -1;
            }
        }
        hashVect.at(key) = value;
    }
    
    int get(int key) {
        if(hashVect.size()<key+1){
            return -1;   
        }
        return hashVect.at(key);
    }
    
    void remove(int key) {
        //printf("remove\n");
        if(!hashVect.empty() && hashVect.size()>=key)
            hashVect.at(key) = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */