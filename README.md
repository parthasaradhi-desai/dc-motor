PWM-BASED DC MOTOR SPEED CONTROL AND LED DIMMING USING 8051 MICROCONTROLLER

1. PROJECT TITLE

PWM-Based DC Motor Speed Control and LED Dimming Using AT89C51 Microcontroller

2. ABSTRACT

This project presents a software-based simulation of DC motor speed control and LED brightness control using Pulse Width Modulation (PWM) with the AT89C51 microcontroller.

The main objective is to control the speed of a DC motor and the brightness of an LED by varying the input voltage through a potentiometer.

The potentiometer provides an analog input voltage, which is converted into digital data using an Analog-to-Digital Converter (ADC). The AT89C51 microcontroller reads this digital value and generates PWM signals according to the input value.

The PWM signal is supplied to the enable pin of the L293D motor driver to control the DC motor speed. Another PWM output is used to control the brightness of the LED.

The complete circuit is designed and tested using EWSIM software, while Embedded C programming is performed using Keil µVision 5.

This project demonstrates the practical implementation of ADC interfacing, PWM generation, motor driver interfacing and embedded system control.

3. INTRODUCTION

Microcontrollers are widely used in modern electronic systems to control different devices automatically.

DC motors are commonly used in robotics, electric vehicles, fans, conveyors and industrial applications. In many applications, controlling motor speed is necessary to achieve the required performance.

Similarly, LED brightness control is useful in lighting systems, display panels and energy-saving applications.

Pulse Width Modulation is one of the most commonly used techniques for controlling the power supplied to DC motors and LEDs.

In this project, the AT89C51 microcontroller is used as the main controller. A potentiometer is used to vary the input voltage, and the ADC converts this voltage into digital information.

Based on the digital input, the microcontroller generates PWM signals to control both the DC motor and LED.

4. OBJECTIVES

The major objectives of this project are:

1. To understand the architecture and operation of the AT89C51 microcontroller.
2. To understand the working principle of Pulse Width Modulation.
3. To control the speed of a DC motor using PWM.
4. To control LED brightness using PWM.
5. To interface an ADC with the 8051 microcontroller.
6. To understand the working of the L293D motor driver.
7. To implement Embedded C programming using Keil µVision 5.
8. To design and test an electronic circuit using EWSIM simulation software.
9. To understand the relationship between PWM duty cycle and output power.

5. HARDWARE COMPONENTS REQUIRED

5.1 AT89C51 Microcontroller

The AT89C51 is an 8-bit microcontroller belonging to the 8051 family.

It is the main controlling unit of the project.

Functions:

- Reads digital data from the ADC.
- Processes the input value.
- Generates PWM signals.
- Controls the motor driver.
- Controls LED brightness.

Important features:

- 8-bit CPU.
- 4 KB Flash memory in the classic device.
- 32 programmable I/O pins.
- Two 16-bit timers/counters.
- Serial communication interface.
- Interrupt support.

5.2 L293D Motor Driver IC

The L293D is a dual H-bridge motor driver integrated circuit.

The microcontroller cannot directly supply sufficient current to operate a DC motor. Therefore, the L293D is used between the microcontroller and the motor.

Functions:

- Drives the DC motor.
- Controls motor direction.
- Controls motor speed through its enable input.
- Provides an interface between low-power logic and the motor.

5.3 DC Motor

A DC motor converts electrical energy into mechanical energy.

Its speed depends on the voltage applied to its terminals and the load conditions.

In this project, the DC motor speed is controlled by varying the PWM duty cycle supplied through the L293D.

5.4 LED

An LED is a semiconductor device that emits light when forward biased.

In this project, the LED is used to demonstrate brightness control through PWM.

A 220 Ω current-limiting resistor is used in series with the LED.

5.5 Potentiometer

A potentiometer is a three-terminal variable resistor.

The resistance used in this project is 10 kΩ.

Functions:

- Provides variable analog voltage.
- Acts as the manual input device.
- Changes the ADC input voltage when rotated.
- Controls the motor speed and LED brightness indirectly.

5.6 Analog-to-Digital Converter

An ADC converts an analog voltage into a digital value.

The potentiometer produces an analog signal, which cannot be directly processed as an analog quantity by the 8051.

Therefore, the ADC converts the input voltage into digital data that the microcontroller can read.

5.7 Resistors and Capacitors

The following components are used:

- 220 Ω resistor for LED current limiting.
- 10 kΩ resistor for the ADC clock circuit, if required by the ADC0804 model.
- 150 pF capacitor for the ADC0804 clock circuit, if required.

6. SOFTWARE REQUIREMENTS

Keil µVision 5

Keil µVision 5 is an embedded development environment used to write, compile and debug Embedded C programs.

Functions:

- Writing Embedded C code.
- Compiling the program.
- Identifying syntax errors.
- Generating HEX files.
- Preparing the program for microcontroller simulation.

EWSIM

EWSIM is used to design and simulate the electronic circuit.

Functions:

- Placing electronic components.
- Connecting the AT89C51 microcontroller.
- Connecting the ADC and potentiometer.
- Interfacing the L293D motor driver.
- Simulating motor and LED operation.
- Testing the project without physical hardware.

7. BLOCK DIAGRAM

The basic functional flow of the project is:

POTENTIOMETER
↓
ANALOG INPUT VOLTAGE
↓
ANALOG-TO-DIGITAL CONVERTER
↓
AT89C51 MICROCONTROLLER
↓
PWM SIGNAL GENERATION
↓
TWO OUTPUTS:

1. L293D MOTOR DRIVER → DC MOTOR SPEED CONTROL

2. LED CIRCUIT → LED BRIGHTNESS CONTROL

8. WORKING PRINCIPLE

The project works based on three important concepts:

1. Analog-to-Digital Conversion.
2. Pulse Width Modulation.
3. Motor Driver Interfacing.

Step 1: Input Generation

The potentiometer is connected between the positive supply and ground.

When the potentiometer is rotated, its wiper produces a variable voltage.

Step 2: Analog-to-Digital Conversion

The analog voltage is supplied to the ADC.

The ADC converts the analog voltage into an equivalent digital value.

For an 8-bit ADC, the digital output ranges from 0 to 255.

Step 3: Data Processing

The AT89C51 reads the digital value from its input port.

The microcontroller uses this value to determine the PWM duty cycle.

Step 4: PWM Generation

The microcontroller generates PWM signals.

The duty cycle changes according to the potentiometer position.

Step 5: Motor Speed Control

The PWM signal is connected to the enable pin of the L293D.

The motor receives power according to the PWM switching pattern.

A higher duty cycle generally produces a higher motor speed under comparable load conditions.

Step 6: LED Brightness Control

Another PWM output is connected to the LED circuit.

The average power delivered to the LED changes according to the duty cycle.

Therefore, LED brightness can be adjusted.

9. WHAT IS PULSE WIDTH MODULATION?

Pulse Width Modulation is a technique used to control the average power delivered to an electrical load by switching a digital signal ON and OFF at a particular frequency.

PWM is commonly used in:

- DC motor speed control.
- LED brightness control.
- Power converters.
- Robotics.
- Embedded control systems.

Important PWM Terms

ON Time: The duration for which the signal remains HIGH.

OFF Time: The duration for which the signal remains LOW.

Time Period: The total time required to complete one PWM cycle.

T = ON Time + OFF Time

Duty Cycle: The percentage of total time for which the signal remains HIGH.

Duty Cycle = (ON Time / Total Time) × 100

PWM Duty Cycle Examples

Duty Cycle| Signal Condition| Expected Output
0%| Always OFF| Minimum output
25%| Short ON time| Low output
50%| Equal ON and OFF time| Medium output
75%| Longer ON time| High output
100%| Always ON| Maximum output

10. CIRCUIT CONNECTIONS

10.1 AT89C51 to L293D

AT89C51 Pin| L293D Pin| Function
P1.0| Pin 2 (IN1)| Motor direction
P1.1| Pin 7 (IN2)| Motor direction
P1.2| Pin 1 (EN1)| Motor PWM control

10.2 DC Motor Connections

L293D Pin| Connection
Pin 3 (OUT1)| Motor terminal A
Pin 6 (OUT2)| Motor terminal B
Pin 8 (VCC2)| Motor-rated supply
Pin 16 (VCC1)| +5V logic supply
Pins 4, 5, 12, 13| Ground

10.3 Unused L293D Channel

L293D Pin| Connection
Pin 9 (EN2)| GND
Pin 10 (IN3)| GND
Pin 15 (IN4)| GND

10.4 LED Connections

Component| Connection
AT89C51 P1.3| 220 Ω resistor
Resistor| LED anode
LED cathode| GND

10.5 ADC Connections

AT89C51 Pin| ADC Pin| Function
P2.0| D0| Digital data
P2.1| D1| Digital data
P2.2| D2| Digital data
P2.3| D3| Digital data
P2.4| D4| Digital data
P2.5| D5| Digital data
P2.6| D6| Digital data
P2.7| D7| Digital data
P3.2| INTR| Conversion status
P3.6| WR| Write control
P3.7| RD| Read control

These ADC control connections apply to a conventional ADC0804. The actual ADC interface in EWSIM must match the component model used in the circuit.

10.6 Potentiometer Connections

Potentiometer Terminal| Connection
First outer terminal| +5V
Second outer terminal| GND
Middle terminal| ADC analog input

Potentiometer resistance: 10 kΩ.

11. ROLE OF THE ADC

The ADC is an important component of this project.

It converts the variable analog voltage from the potentiometer into digital data.

For an 8-bit ADC:

Number of possible digital levels = 2⁸ = 256.

The output values range from 0 to 255.

The microcontroller reads these values and uses them to generate the required PWM signal.

12. ROLE OF THE L293D MOTOR DRIVER

The L293D is used because the microcontroller output pins cannot directly drive a DC motor.

The motor driver provides the required switching arrangement for motor operation.

The direction of the motor depends on the logic inputs IN1 and IN2.

IN1| IN2| Motor Condition
0| 0| Coast
1| 0| Forward
0| 1| Reverse
1| 1| Brake

The enable pin controls whether the motor driver channel is active.

Applying PWM to the enable pin controls the effective power delivered to the motor.

13. ALGORITHM

1. Start the program.
2. Initialize the AT89C51 ports.
3. Configure the ADC data port.
4. Set the required motor direction.
5. Read the digital output from the ADC.
6. Store the ADC value.
7. Generate PWM according to the input value.
8. Apply PWM to the L293D enable pin.
9. Apply PWM to the LED output.
10. Observe the motor speed and LED brightness.
11. Repeat the process continuously.

14. PROGRAM IMPLEMENTATION

The program is written in Embedded C using Keil µVision 5.

The important operations performed by the program are:

- Port initialization.
- ADC data reading.
- PWM generation.
- Motor direction selection.
- Motor speed control.
- LED brightness control.

The program uses software-generated PWM.

The PWM signal is generated by comparing a counter value with the input value.

If the counter is less than the input value, the output is HIGH.

Otherwise, the output is LOW.

By changing the input value, the duty cycle changes.

Note: The current demonstration code reads the ADC digital bus directly from P2. If the selected ADC model requires separate conversion-control operations, those must be implemented according to its interface.

15. TEST CASES AND EXPECTED RESULTS

The following test cases are used to verify the operation of the project.

Test Case| Potentiometer Position| Expected Motor Response| Expected LED Response
1| Minimum| OFF / Minimum speed| OFF / Dim
2| 25%| Low speed| Low brightness
3| 50%| Medium speed| Medium brightness
4| 75%| High speed| High brightness
5| Maximum| Maximum speed| Maximum brightness

The actual results depend on the ADC conversion and PWM implementation.

16. ADVANTAGES

1. Simple and cost-effective design.
2. Easy motor speed adjustment.
3. Adjustable LED brightness.
4. Demonstrates ADC interfacing.
5. Demonstrates PWM generation.
6. Uses a commonly available 8051 microcontroller.
7. Can be tested through software simulation.
8. Does not require physical hardware for the simulation demonstration.

17. APPLICATIONS

The concepts used in this project can be applied in:

1. Robotics and automation.
2. DC motor speed control systems.
3. Automatic fan speed controllers.
4. LED lighting systems.
5. Conveyor belt systems.
6. Industrial motor control.
7. Electronic appliances.
8. Embedded control applications.
9. Educational microcontroller experiments.

18. LIMITATIONS

1. The project uses software-generated PWM, which consumes microcontroller processing time.
2. The PWM frequency depends on the program delay and processor clock.
3. The ADC interface must be configured correctly for reliable input readings.
4. The simulated motor response may differ from a real motor.
5. The project does not include closed-loop motor speed feedback.
6. The AT89C51 does not have a dedicated hardware PWM peripheral.

19. FUTURE SCOPE

The project can be improved in several ways:

1. Implement hardware-timer-based PWM for more stable output.
2. Add an LCD to display the PWM duty cycle.
3. Display the potentiometer input value.
4. Add a speed sensor to measure actual motor RPM.
5. Implement closed-loop motor speed control.
6. Add push buttons for manual speed adjustment.
7. Use a more advanced microcontroller with dedicated PWM peripherals.
8. Extend the system to control multiple DC motors.

20. RESULT

The project demonstrates the concept of PWM-based control of a DC motor and LED using the AT89C51 microcontroller.

The potentiometer provides a variable analog input, which is converted into digital information by the ADC.

The microcontroller processes this information and generates PWM signals.

The L293D motor driver controls the DC motor, while the second PWM output controls LED brightness.

The circuit is designed and tested using EWSIM, and the program is developed using Keil µVision 5.

21. CONCLUSION

The PWM-Based DC Motor Speed Control and LED Dimming project provides practical knowledge of embedded system design using the 8051 microcontroller.

It explains how analog input signals can be converted into digital data and used to control electrical devices through PWM.

The project helps in understanding the operation of the AT89C51, ADC, L293D motor driver, DC motor and LED.

The software simulation provides an effective way to study circuit connections, microcontroller programming and output control without requiring physical hardware.

Overall, this project demonstrates an important application of microcontrollers in motor control and lighting systems.

22. REFERENCES

1. AT89C51 Microcontroller Datasheet.
2. L293D Motor Driver Datasheet.
3. ADC0804 Datasheet.
4. Keil µVision 5 Documentation.
5. 8051 Microcontroller Architecture and Embedded C Programming Reference.
6. EWSIM Simulation Software.
7. Basic concepts of Pulse Width Modulation and DC Motor Control.
