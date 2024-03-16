getInstance() is a static method that returns an instance when it is invoked. It returns the same
instance if it is invoked more than once as an instance of Singleton class is already created. It is static
because we have to invoke this method without any object of Singleton class and static method can be invoked
without object of class
As constructor is private so we cannot create object of Singleton class without a static method as they can be
called without objects. We have to create an instance of this Singleton class by using getInstance() method.