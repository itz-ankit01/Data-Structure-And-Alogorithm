/*
#include<iostream>
#include<array>

using namespace std;
int main(){
    
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};    // array in STL

    int size = a.size();   // calculating array size

    for(int i = 0; i < size; i++){
        cout << a[i] <<endl;
    }
    // Different Operation of STL Array
    cout <<"Element at 2nd Index -> " << a.at(2) <<endl;

    cout <<"Empty or not -> " <<a.empty() << endl;

    cout << "First Element -> " <<a.front() << endl;

    cout <<"Last Element-> " <<a.back() << endl;
    return 0;
} */



// VECTOR IN STL

/*
A vector in C++ is a dynamic array that allows you to store and manipulate elements of the same data type. Vectors are part of the Standard Template Library (STL) and are defined in the <vector> header file. Here are some important features of vectors:

Declaration: You can declare a vector by specifying its data type, like this: vector<int> myVector;. This creates an empty vector of integers.
Adding elements: You can add elements to a vector using the push_back() method, which adds an element to the end of the vector. For example: myVector.push_back(10);.
Accessing elements: You can access elements of a vector using the [] operator, which takes an index as an argument. For example: myVector[0] returns the first element of the vector.
Size: You can get the number of elements in a vector using the size() method. For example: myVector.size() returns the number of elements in the vector.
Iterators: You can use iterators to traverse the elements of a vector. For example: vector<int>::iterator it = myVector.begin(); creates an iterator that points to the first element of the vector.
Capacity: Vectors have a capacity, which is the maximum number of elements they can hold without having to reallocate memory. You can get the capacity of a vector using the capacity() method. For example: myVector.capacity() returns the capacity of the vector.
Resizing: You can resize a vector using the resize() method. For example: myVector.resize(10); resizes the vector to hold 10 elements.
*/

/*
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    cout << "Size -> " << v.size() << endl;        // v.size() = no. of current element assigned 
    cout << "Capacity -> " << v.capacity() << endl << endl;    // v.capacity() = total kitne element kliye memory allocate hui padi h

    v.push_back(1);
    cout << "Size -> " << v.size() << endl;       
    cout << "Capacity -> " << v.capacity() << endl << endl;  

    v.push_back(2);
    cout << "Size -> " << v.size() << endl;       
    cout << "Capacity -> " << v.capacity() << endl << endl;   

    v.push_back(3);
    cout << "Size -> " << v.size() << endl;       
    cout << "Capacity -> " << v.capacity() << endl << endl;      // capacity = double

    cout <<"Element at 2nd Index is " << v.at(2) << endl;

    cout<< "Front Element " << v.front() << endl;
    cout<< "Last Element " << v.back() << endl;

    cout<<"Before Pop" << endl;
    for(int i : v){
        cout << i <<" ";
    }
    cout<<endl;

    v.pop_back();   // Delete the last element

    cout<<"After Pop" <<endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size " << v.size() << endl;
    v.clear();          // clear means all elements delete but memory allocation delete nhin hoga it means ki size = 0 not capactity will be zero
    cout << "After clear size " << v.size() << endl;

    cout<<endl;
    vector<int> a(5, 1);   // 5 is size , 1 is element assigned
    for(int i: a){
        cout << i <<" ";
    } 
    cout << endl;

    vector<int> last(a);
    cout << "Print Last" <<endl;
    for(int i: last){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}               */


// DEQUE IN STL

/*
A deque (pronounced "deck") in C++ is a double-ended queue, which is an ordered collection of elements that allows insertion and removal of elements from both ends. The deque is part of the Standard Template Library (STL) and is defined in the <deque> header file. Here are some important features of deques:

Declaration: You can declare a deque by specifying its data type, like this: deque<int> myDeque;. This creates an empty deque of integers.

Adding elements: You can add elements to a deque using the push_back() method, which adds an element to the end of the deque, and the push_front() method, which adds an element to the front of the deque. For example: myDeque.push_back(10); adds the value 10 to the end of the deque, and myDeque.push_front(5); adds the value 5 to the front of the deque.

Accessing elements: You can access elements of a deque using the [] operator, which takes an index as an argument. For example: myDeque[0] returns the first element of the deque.

Size: You can get the number of elements in a deque using the size() method. For example: myDeque.size() returns the number of elements in the deque.

Iterators: You can use iterators to traverse the elements of a deque. For example: deque<int>::iterator it = myDeque.begin(); creates an iterator that points to the first element of the deque.

Capacity: Deques have a capacity, which is the maximum number of elements they can hold without having to reallocate memory. You can get the capacity of a deque using the capacity() method. For example: myDeque.capacity() returns the capacity of the deque.

Resizing: You can resize a deque using the resize() method. For example: myDeque.resize(10); resizes the deque to hold 10 elements.

Erasing elements: You can remove elements from a deque using the pop_front() method, which removes the first element of the deque, and the pop_back() method, which removes the last element of the deque. For example: myDeque.pop_front(); removes the first element of the deque.

*/
/*
#include<iostream>
#include<deque>

using namespace std;
int main(){
    
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(4);
    for(int i: d ){
        cout << i << " ";
    }
    cout << endl;

    //d.pop_front();  // to delete the front element
    cout << "After pop front " << endl;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Print the element of 1st Index " << d.at(0) << endl;

    cout <<"Front element " << d.front() << endl;
    cout <<"Last element " << d.back() << endl;

    cout <<"Empty or not " << d.empty() << endl;

    cout << "Before erase size " << d.size() << endl;
    for(int i: d){
        cout << i << " " ;
    }
    cout << endl;

    d.erase(d.begin(), d.begin()+2);             // we have to give range for erasing

    cout << "After erase size " << d.size() << endl;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}  *?



// LIST IN STL
/*
A list in C++ is a doubly linked list, which is an ordered collection of elements that allows insertion and removal of elements from anywhere within the list. The list is part of the Standard Template Library (STL) and is defined in the <list> header file. Here are some important features of lists:

Declaration: You can declare a list by specifying its data type, like this: list<int> myList;. This creates an empty list of integers.

Adding elements: You can add elements to a list using the push_back() method, which adds an element to the end of the list, and the push_front() method, which adds an element to the front of the list. You can also insert elements at any position within the list using the insert() method. For example: myList.push_back(10); adds the value 10 to the end of the list, myList.push_front(5); adds the value 5 to the front of the list, and myList.insert(myList.begin(), 7); inserts the value 7 at the beginning of the list.

Accessing elements: You can access elements of a list using the front() method, which returns the first element of the list, and the back() method, which returns the last element of the list. You can also use iterators to traverse the elements of the list. For example: list<int>::iterator it = myList.begin(); creates an iterator that points to the first element of the list.

Size: You can get the number of elements in a list using the size() method. For example: myList.size() returns the number of elements in the list.

Erasing elements: You can remove elements from a list using the pop_front() method, which removes the first element of the list, the pop_back() method, which removes the last element of the list, and the erase() method, which removes elements from any position within the list. For example: myList.pop_front(); removes the first element of the list, myList.pop_back(); removes the last element of the list, and myList.erase(it); removes the element pointed to by the iterator it.

Sorting: You can sort a list using the sort() method. For example: myList.sort(); sorts the elements of the list in ascending order.

Reverse: You can reverse the order of elements in a list using the reverse() method. For example: myList.reverse(); reverses the order of elements in the list.
*/

/*
#include<iostream>
#include<list>

using namespace std;
int main(){
    
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);
    l.push_front(5);

    for(int i: l){
        cout << i << " " ;
    }
    cout << endl;

    cout << "Before erase " << endl;
    for(int i: l){
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After erase " << endl;
    for(int i: l){
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();

    cout <<"After pop Back " << endl;
    for(int x : l){
        cout << x << " ";
    }
    cout << endl;

    cout <<"Size of list " << l.size() << endl;

    // copying the element 
    list<int> newlist(l);
    cout <<"Element of new List " << endl;
    for(int x: newlist){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}                   */


// STACK IN STL
/*
The C++ STL stack container is an adapter that provides a LIFO (Last-In-First-Out) data structure. It is used to store a collection of elements with the ability to add or remove elements only from one end, which is the top of the stack.

The stack container is implemented as an adapter class that is designed to work with any container class that supports push_back(), pop_back(), and back() operations. By default, the stack container is implemented using the deque container class. However, you can specify a different container class by passing it as a template argument to the stack container.

The stack container provides the following member functions:

push(): This function is used to add an element to the top of the stack. The syntax for the push() function is:

void push(const T& val);
Here, T is the data type of the element being pushed to the stack, and val is the value of the element being pushed.

pop(): This function is used to remove the element at the top of the stack. The syntax for the pop() function is:

void pop();
This function does not return any value.

top(): This function returns a reference to the element at the top of the stack. The syntax for the top() function is:

T& top();
Here, T is the data type of the element being returned.

empty(): This function is used to check if the stack is empty or not. The syntax for the empty() function is:

bool empty() const;
This function returns true if the stack is empty, and false otherwise.

size(): This function returns the number of elements in the stack. The syntax for the size() function is:

size_t size() const;
This function returns the number of elements in the stack.

The stack container does not provide iterators. However, you can access elements of the stack using the top() function.

Here is an example that demonstrates how to use the stack container in C++:


#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl;
    s.pop();
    std::cout << "Top element: " << s.top() << std::endl;
    std::cout << "Stack size: " << s.size() << std::endl;

    return 0;
}
In this example, we create a stack container of integers using std::stack<int>. We then add the integers 10, 20, and 30 to the stack using the push() function. We use the top() function to get the value of the top element of the stack (which is 30), and then we use the pop() function to remove the top element from the stack. Finally, we print the value of the new top element (which is 20) and the size of the stack (which is 2).
*/
/*
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");

    cout << "Top Element -> " << s.top() << endl;

    s.pop();
    cout << "Top Element -> " << s.top() << endl;

    cout << "Size of stack -> " << s.size() << endl;

    cout << "Empty or not " << s.empty() << endl;

    return 0;
}          */

// QUEUE IN STL

/*
In C++, the Standard Template Library (STL) provides a container called "queue" which is a data structure that works based on the first-in-first-out (FIFO) principle. In this structure, elements are inserted from the back and removed from the front. Here's a detailed explanation of queue in STL:

Container class:
The queue container is defined in the <queue> header file in the STL. It is a template class, which means it can store any data type.

Syntax:
The syntax for creating a queue in C++ is:

queue< data_type > queue_name;
Here, "data_type" is the data type of the elements that the queue will store, and "queue_name" is the name of the queue.

Operations:
The following are the operations that can be performed on a queue in STL:
a. Push:
The push() function is used to insert an element at the back of the queue. The syntax for this is:

queue_name.push(element);
Here, "element" is the value to be inserted into the queue.

b. Pop:
The pop() function is used to remove an element from the front of the queue. The syntax for this is:

queue_name.pop();
This function does not return anything.

c. Front:
The front() function is used to access the element at the front of the queue without removing it. The syntax for this is:

queue_name.front();
This function returns the value at the front of the queue.

d. Back:
The back() function is used to access the element at the back of the queue without removing it. The syntax for this is:

queue_name.back();
This function returns the value at the back of the queue.

e. Size:
The size() function is used to get the number of elements in the queue. The syntax for this is:

queue_name.size();
This function returns the number of elements in the queue.

f. Empty:
The empty() function is used to check if the queue is empty or not. The syntax for this is:

queue_name.empty();
This function returns true if the queue is empty, and false if it is not.

Example:
Here's an example code that demonstrates the use of queue in STL:

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size of queue: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    return 0;
}
In this example, we create a queue named "q" of data type int. We then insert three values (10, 20, 30) using the push() function. We then print the size of the queue, the value at the front of the queue, and the value at the back of the queue using the size(), front(), and back() functions respectively. We then remove the element at the front of the queue using the pop() function, and print the value at the front of the queue again. Finally, we return 0 to end the program.

Output:

Size of queue: 3
Front element: 10
Back element: 30
Front element after pop: 20
This output shows that the size of the queue is 3, the value at the               */
/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    
    cout << "First element -> " << q.front() << endl;
    cout << "Size before pop -> " << q.size() << endl;

    q.pop();
    cout <<"First element -> " << q.front() << endl;

    cout << "Size after pop -> " << q.size() << endl;
    return 0;
}           */

// PRIORITY QUEUE IN STL

/*
In C++, the Standard Template Library (STL) provides a container called "priority_queue" which is a data structure that works based on the concept of priority. In this structure, elements are stored based on their priority, and the element with the highest priority is always at the front of the queue. Here's a detailed explanation of priority queue in STL:

Container class:
The priority_queue container is defined in the <queue> header file in the STL. It is a template class, which means it can store any data type.

Syntax:
The syntax for creating a priority queue in C++ is:

priority_queue < data_type > queue_name;
Here, "data_type" is the data type of the elements that the priority queue will store, and "queue_name" is the name of the priority queue.

Operations:
The following are the operations that can be performed on a priority queue in STL:
a. Push:
The push() function is used to insert an element into the priority queue. The syntax for this is:

queue_name.push(element);
Here, "element" is the value to be inserted into the priority queue.

b. Pop:
The pop() function is used to remove the element with the highest priority from the priority queue. The syntax for this is:

queue_name.pop();
This function does not return anything.

c. Top:
The top() function is used to access the element with the highest priority in the priority queue without removing it. The syntax for this is:

queue_name.top();
This function returns the value with the highest priority in the priority queue.

d. Size:
The size() function is used to get the number of elements in the priority queue. The syntax for this is:

queue_name.size();
This function returns the number of elements in the priority queue.

e. Empty:
The empty() function is used to check if the priority queue is empty or not. The syntax for this is:

queue_name.empty();
This function returns true if the priority queue is empty, and false if it is not.

Priority:
In a priority queue, elements are stored based on their priority. The default behavior is to store elements in descending order (i.e., highest priority first). However, you can change this by specifying a custom priority function.
The priority function should be a boolean function that takes two elements as input and returns true if the first element has higher priority than the second element. You can specify the priority function using the following syntax:


priority_queue < data_type, vector<data_type>, priority_function > queue_name;
Here, "priority_function" is the name of the priority function that you want to use.

Example:
Here's an example code that demonstrates the use of priority queue in STL:

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size of queue: " << q.size() << endl;
    cout << "Top element: " << q.top() << endl;

    q.pop();

    cout << "Top element after pop: " << q.top() << endl;

    return 0;
}
In this example, we create a priority queue named "q" of data type int. We then insert three values (10, 20, 30) using the push() function. We then print the size of the priority queue and the value with the highest priority using the size() and top() functions respectively. We then remove the element with the highest priority using the pop() function 
*/
/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi ;

    // mini heap
    priority_queue<int, vector<int>, greater<int> > mini ; 

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    maxi.push(9);

    cout << "Size of maxi -> " << maxi.size() << endl;

    int n = maxi.size();

    // it will give every time the maximum element
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        
    }
    cout << endl;

    // print maximum and pop it
    cout << "Now after using print and pop " << endl;
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " " ;
        maxi.pop();
    }
    cout << endl;
    
    // mini heap
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout <<endl<<endl;

    cout << "Size of mini -> " << mini.size() << endl;
    int x = mini.size();

    // it will give every time the minimum element
    for(int i = 0; i < n; i++){
        cout << mini.top() << " ";
    }
    cout << endl;

    // now after using print and pop 
    cout << "Now after using print and pop " << endl;
    for(int i = 0; i < x; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Aree khalli hai kya bhai ?? -> " << mini.empty() << endl;
    return 0;
}          */




// SET IN STL   

/*
The Standard Template Library (STL) in C++ provides a container called the "set" that stores a collection of unique elements in a sorted order. Each element in a set must be unique, and the elements are sorted in ascending order by default. Here are some details about the set container in STL:

Declaration: The set container in STL can be declared using the following syntax:

std::set < data_type > set_name;
Here, data_type represents the data type of the elements that will be stored in the set, and set_name is the name given to the set container.

Functions: The set container in STL supports the following member functions:
insert(): Inserts an element into the set.
erase(): Removes an element from the set.
find(): Searches for an element in the set and returns an iterator to it.
count(): Counts the number of elements in the set with a given value.
size(): Returns the number of elements in the set.
empty(): Checks if the set is empty.
begin(): Returns an iterator to the first element in the set.
end(): Returns an iterator to the element after the last element in the set.
Example: Here's an example that demonstrates the use of the set container in STL:

#include <iostream>
#include <set>

int main()
{
    std::set<int> my_set;

    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);

    std::cout << "Size of the set: " << my_set.size() << std::endl;

    std::set<int>::iterator it = my_set.find(20);

    if (it != my_set.end())
        std::cout << "Element found in the set: " << *it << std::endl;
    else
        std::cout << "Element not found in the set" << std::endl;

    my_set.erase(20);

    std::cout << "Size of the set after erasing an element: " << my_set.size() << std::endl;

    std::cout << "Elements in the set: ";
    for (auto element : my_set)
        std::cout << element << " ";

    return 0;
}
Output:

Size of the set: 3
Element found in the set: 20
Size of the set after erasing an element: 2
Elements in the set: 10 30 
In the above example, we create a set my_set of integers and add three elements to it using the insert() function. We then print the size of the set using the size() function and search for an element in the set using the find() function. We remove an element from the set using the erase() function and print the new size of the set. Finally, we iterate over the elements in the set and print them using a for-each loop.   */

/*
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    // output will be in sorted order and repeated element will be printed only once
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    // set<int>::iterator it = next(s.begin(),2);
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

    cout <<"5 is present or not -> " << s.count(5) << endl;
    cout <<"-5 is present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);
    
    for(auto it = itr; it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}               */

// MAP IN STL

/*
Definition: map is an associative container that stores elements in a sorted order based on their keys. Each element in the container is a key-value pair, where the key must be unique within the container. map is implemented as a balanced binary search tree, which ensures that searching, insertion, and deletion operations are efficient.

Declaration: The map container can be declared using the following syntax:

std::map<key_type, value_type> map_name;
Here, key_type and value_type represent the data types of the keys and values that will be stored in the map, respectively. map_name is the name given to the map container.

Member functions: The map container supports the following member functions:
insert(): Inserts an element (key-value pair) into the map.
erase(): Removes an element from the map using its key.
find(): Searches for an element in the map using its key and returns an iterator to it.
count(): Counts the number of elements in the map with a given key.
size(): Returns the number of elements in the map.
empty(): Checks if the map is empty.
begin(): Returns an iterator to the first element in the map.
end(): Returns an iterator to the element after the last element in the map.
operator[]: Returns the value associated with a given key. If the key is not found in the map, a new element is inserted with a default-constructed value.
clear(): Removes all elements from the map.
Example: Here is an example that demonstrates the use of the map container in STL:

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> my_map;

    my_map.insert(std::make_pair("apple", 10));
    my_map.insert(std::make_pair("banana", 20));
    my_map.insert(std::make_pair("orange", 30));

    std::cout << "Size of the map: " << my_map.size() << std::endl;

    std::map<std::string, int>::iterator it = my_map.find("banana");

    if (it != my_map.end())
        std::cout << "Value for key 'banana': " << it->second << std::endl;
    else
        std::cout << "Key 'banana' not found in the map" << std::endl;

    my_map.erase("banana");

    std::cout << "Size of the map after erasing an element: " << my_map.size() << std::endl;

    std::cout << "Elements in the map: " << std::endl;
    for (auto element : my_map)
        std::cout << element.first << ": " << element.second << std::endl;

    return 0;
}
Output:

Size of the map: 3
Value for key 'banana': 20
Size of the map after erasing an element: 2
Elements in the map:
apple: 10
orange: 30                 

In the above example, we create a map my_map that stores string keys and integer values. We add three key-value pairs to the map using the insert() function. We then print the size of the map using the size() function and search for a value using the find() function. We remove an element from the map using the erase() function and print the new size of the map. Finally, we iterate over the elements in the map and print them using a for-each loop.                */

/*
#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, string> m;

    m[1] = "Babbar";
    m[13] = "Kumar";
    m[2] = "LOve";

    m.insert( {5, "Bheem"});

    cout << "Before Erase " << endl;
    cout << "Size -> " << m.size() << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding -13 " << m.count(-13) << endl;

    //m.erase(13);
    cout << "After Erase " << endl;
    cout << "Size -> " << m.size() << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "At index 5 " << m.at(5) << endl;
    
    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }
    return 0;
}                */



// ALGORITHM IN STL

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

    int main(){

        vector<int> v;

        v.push_back(1);
        v.push_back(3);
        v.push_back(6);
        v.push_back(7);

        cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;
        cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

        cout << "Lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
        cout << "Upper bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

        int a = 5;
        int b = 3;
        cout << "Max -> " << max(a, b) << endl;
        cout << "Min -> " << min(a, b) << endl;

        swap(a,b);
        cout << "a -> " << a << endl;

        string abcd = "abcd";
        reverse(abcd.begin(), abcd.end());
        cout << "string -> " << abcd << endl;

        rotate(v.begin(), v.begin()+1, v.end());
        cout << "After rotate " << endl;
        for(int i:v){
            cout << i << " ";
        }
        cout << endl;

        sort(v.begin(), v.end());
        for(int i: v){
            cout << i << " ";
        }
        cout << endl;
        return 0;
    }