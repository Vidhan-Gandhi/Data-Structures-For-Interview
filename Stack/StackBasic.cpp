//Stack is a  data structure that follows the Last In First Out (LIFO) principle. It means that the last element added to the stack will be the first one to be removed. The basic operations of a stack are push (to add an element), pop (to remove the top element), and top(to view the top element without removing it).

//Creating Normal Stack
stack<int>st;
st.push(1);//Adding element 1 to the stack
st.push(23);//Adding element 23 to the stack
st.pop();//Removing the top element from the stack
st.top();//Viewing the top element of the stack
return st.empty();//Checking if the stack is empty or not
return !st.empty();//Checking if the stack is not empty
return st.size();//Getting the size of the stack

//Making array to behave as a stack
vector<int>stt;
stt.push_back(1);//Adding element 1 to the stack
stt.push_back(23);//Adding element 23 to the stack
stt.pop_back();//Removing the top element from the stack
stt.back();//Viewing the top element of the stack
return stt.empty();//Checking if the stack is empty or not
return !stt.empty();//Checking if the stack is not empty
return stt.size();//Getting the size of the stack

//Crating stack to store pairs
stack<pair<int,int>>sttt;
sttt.push({1,2});//Adding pair (1,2) to the stack
sttt.push({3,4});//Adding pair (3,4) to the stack
sttt.pop();//Removing the top pair from the stack
sttt.top();//Viewing the top pair of the stack



//Some rules to remember while using stack:
//1. Stack is a linear data structure that follows the LIFO principle.
//2. While popping an element from the stack, it is important to check if the stack is empty to avoid underflow.
//3.while calling top() function, it is important to check if the stack is empty to avoid accessing invalid memory.
