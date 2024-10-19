// Name: Tiffany Nguyen & Jocelin Juarez
// Class: 5393-002 Data Structures in C++

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Queue {
    private:
        vector<string> trafficTypes; // stores the traffic types
        vector<int> priorities; // stores the corresponding priorities

    public:
        // adds element at the end of the queue
        void enqueue(const string &trafficType, int priority){
            trafficTypes.push_back(trafficType);
            priorities.push_back(priority);
        }

        // removes the front element
        void dequeue(){
            if(trafficTypes.empty()){
                cout << "Error, cannot dequeue if Queue is empty." << endl;
                return;
            }
            trafficTypes.erase(trafficTypes.begin()); // removes first traffic type
            priorities.erase(priorities.begin()); // removes first priority
        }

        // returns front element
        void front(){
            if(trafficTypes.empty()){
                cout << "Queue is empty." << endl;
                return;
            }
            cout << "Traffic Type: " << trafficTypes.front() << ", Priority: " << priorities.front() << endl;
        }

        // checks if empty
        bool isEmpty(){
            return trafficTypes.empty();
        }

        // returns size of queue
        int size(){
            return trafficTypes.size();
        }

        // displays
        void display(){
            cout << "Queue elements: " << endl;
            for(int i = 0; i < trafficTypes.size(); i++){
                cout << "Traffic Type: " << trafficTypes[i] << ", Priority: " << priorities[i] << endl;
            }
        }
};

int main(){
    Queue q;

    // enqueuing values and priorities into queue
    q.enqueue("Signaling", 0);
    q.enqueue("Voice",1);
    q.enqueue("Video", 2);
    q.enqueue("Data",3);
    q.enqueue("Other",4);

    q.display(); // displays queue

    cout << "\nCurrent size of the queue: " << q.size() << endl; // showing current size of the queue

    // dequeue two elements
    cout << "\nDequeuing two elements..." << endl;
    q.dequeue();
    q.dequeue();

    cout << "\nCurrent size of the queue: " << q.size() << endl; // showing current size of the queue

    q.display(); // displays queue after dequeuing
    
    return 0;
}