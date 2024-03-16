Singletone return the same instance for multiple class objects. The steps for implementation are as follows:<br>
a. All members should be private.<br>
b. Create the Singletone instance as static.<br>
c. Call the getInstance() function at each object creation which will return the previous instance if any or if not then will create a new instance.<br>
d. Delete copy constructor 
