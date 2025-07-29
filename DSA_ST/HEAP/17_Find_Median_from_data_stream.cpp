#include <bits/stdc++.h>
using namespace std;

class MedianFinder {
    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxh.size() == 0 || maxh.top() >= num) {
            maxh.push(num);
        }
        else minh.push(num);

        // Balance
        if(maxh.size() > minh.size() + 1) {
            minh.push(maxh.top());
            maxh.pop();
        }else if(maxh.size() < minh.size()) {
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        if(minh.size() == maxh.size()) {
            return (maxh.top() + minh.top()) / 2.0;
        }
        else return maxh.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */