#include <vector>
#include <queue>
using namespace std;

int kth_largest(std::vector<int> values, int k) {
    // defining priority queue
    priority_queue<int> pq;
    int v_size = values.size();
    for (int i = 0; i < v_size; i++) {
        pq.push(values[i]);
    }

    for (int i = 0; i = k; i++) {
        pq.pop();
    }
    return pq.top();
}
