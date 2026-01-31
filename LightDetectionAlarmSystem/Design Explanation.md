Singleton Pattern – AlarmSystem

The Singleton pattern is used to ensure that only one instance of the AlarmSystem class exists throughout the application. 
In a light detection alarm system, having multiple alarm controllers could lead to conflicting states and unpredictable behavior. 
By restricting the system to a single instance, all components interact with the same alarm controller, ensuring consistent configuration,
threshold management, and alarm triggering. This pattern improves reliability and provides centralized control of the alarm logic.

Factory Pattern – AlarmFactory

The Factory pattern is applied to handle the creation of alarm output objects such as buzzers or LEDs.
Instead of instantiating alarm objects directly within the system logic, the AlarmFactory class encapsulates the object creation process. 
This separation allows the system to support different alarm types without modifying existing code. 
As a result, the system becomes more flexible, easier to extend, and adheres to the open–closed principle.

Observer Pattern – LightSensor and AlarmSystem

The Observer pattern is used to implement an event-driven mechanism between the light sensor and the alarm system. 
The LightSensor acts as the subject, while the AlarmSystem acts as an observer that listens for changes in light intensity.
When the sensor detects a change, it automatically notifies all registered observers. 
This pattern decouples the sensor from the alarm logic, improving maintainability and 
allowing additional observers to be added without altering the sensor code.
