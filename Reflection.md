# Reflection on the PID controller project

## Final video

The video of the controller can be found here on youtube: https://youtu.be/7w7QTOu3G2Y


## The Effects of P, I and D

To start from the basics, lets first address what each of those letters stand for:

P: Proportional 
I: Integral
D: Derivative

PID is not only used in autonomous vehicles, its also used in naval ships and other systems. PID is essentially a control loop feedback mechanism that is to the core of control systems.

The purpose of the controller is to basically reduce error over time. P refers to the current value of the error. I accounts on the other hand for past values of the error.
D accounts for future trends of the error. 


## How did I implement my PID?

After going through the lectures, in the python run robot example Sebastian have given us some initial values to be able to draw our PID with its oscillations. I took the values
that were provided in the class and manually tweaked it to be able to create a working PID controller. 

In addition to getting the steering value, thanks for the help of Denise James, Miguel Morales and other students on the Forum, they suggested to also tweak the throttle values. Inspired by the behaviroal cloning project I have setup a random threshold at which we have two throttle values.