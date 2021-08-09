//2. Write a class template for queue class. Assume the programmer using the queue won't make mistakes, like exceeding the capacity of the queue, or trying to remove an item when the queue is empty. Define several queues of different data types and insert and remove data from them.
#include <iostream>
template <typename T>
class Queue {
	T data[100];
	size_t size = 0;
	public:
	void push(T d) {
		data[size++] = d;
	}
	T pop() {
		T ret_value = data[0];
		for(size_t i = 1; i < size; ++i) data[i - 1] = data[i];
		size--;
		return ret_value;
	}
	friend std::ostream& operator<<(std::ostream& s, const Queue& q) {
		for(size_t i = 0; i < q.size; ++i) s << q.data[i] << ' ';
		return s;
	}
};
int main() {
	Queue<int> q1;
	q1.push(1);  q1.push(2);  q1.push(3); 
	std::cout << q1 << '\n';
	std::cout << q1.pop() << '\n';
	q1.push(4); 
	std::cout << q1 << '\n';
	Queue<float> q2;
	q2.push(4.1f); q2.push(5.2f); q2.push(6.3f);
	std::cout << q2 << '\n';
	std::cout << q2.pop() << '\n';
	q2.push(7.4f);
	std::cout << q2 << '\n';
	return 0;
}

//#include <iostream>
//#include <vector>
//template <typename T>
//class Queue {
//std::vector<T> data;
//public:
//Queue(std::vector<T> data) : data(data) {}
//void push(T d) {
//data.push_back(d);
//}
//T pop() {
//T ret_value = data[0];
//for(size_t i = 1; i < data.size(); ++i) data[i - 1] = data[i];
//return ret_value;
//}
//friend std::ostream& operator<<(std::ostream& s, const Queue& q) {
//for(size_t i = 0; i < q.data.size(); ++i) s << q.data[i] << ' ';
//return s;
//}
//};
//int main()
//{
//Queue<int> q1 = std::vector<int> {1,2,3,4,5};
//Queue<float> q2 = std::vector<float> {6.9f, 4.20f, 12.f, 33.f};
//std::cout << q1 << std::endl;
//std::cout << q2 << std::endl;
//std::cout << q1.pop() << std::endl;
//std::cout << q2.pop() << std::endl;
//q1.push(6); q2.push(16.f);
//std::cout << q1 << std::endl;
//std::cout << q2 << std::endl;
//return 0;
//}
