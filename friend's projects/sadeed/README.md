# Digital Logic Design

1. Registers: A processor register is a quickly accessible location available to a computer's processor.
2. Registers with Parallel load: Parallel-load registers are a type of register where the individual bit values in the register are loaded simultaneously.
3. Shift Register: A shift register is a type of digital circuit using a cascade of flip-flops where the output of one flip-flop is connected to the input of the next. They share a single clock signal, which causes the data stored in the system to shift from one location to the next.
4. Serial Transfer: Serial communication is a communication technique used in telecommunications wherein data transfer occurs by transmitting data one bit at a time in a sequential order over a computer bus or a communication channel. It is the simplest form of communication between a sender and a receiver.
5. Serial Addition using shift register:
6. Universal Shift Register: A Universal shift register is a register which has both the right shift and left shift with parallel load capabilities.
7. Ripple Counter: Ripple counter is a special type of Asynchronous counter in which the clock pulse ripples through the circuit.
8. Binary Ripple Counter: A binary ripple counter consists of a complementing series connected flip-flops (T or JK type), with the output of each flip-flops is connected to the clock pulse CP input of the next higher-order flip-flop.
9. BCD Ripple Counter: A binary coded decimal (BCD) is a serial digital counter that counts ten digits . And it resets for every new clock input. As it can go through 10 unique combinations of output, it is also called as “Decade counter”.
10. Synchronous Counter: Synchronous counters are sometimes called parallel counters as the clock is fed in parallel to all flip-flops.
11. Binary Counter: Binary counters are circuits that generate binary sequences that can be associated with the number of clock signal pulses applied to the input. An asynchronous counter is often called a ripple counter.
12. Up-Down Binary Counter: Bidirectional counters, also known as Up/Down counters, are capable of counting in either direction through any given count sequence and they can be reversed at any point within their count sequence by using an additional control input as shown below.
13. BCD Counter: A BCD counter is a special type of a digital counter which can count to ten on the application of a clock signal.
14. Binary Counter with Parallel Load: A counter with parallel load is simply a circuit which uses revers gates and the flip-flops to create any sequential count.
15. Sequential Circuit : Sequential circuit is a combinational logic circuit that consists of inputs variable (X), logic gates (Computational circuit), and output variable (Z)
16. SR Latch : A bistable multivibrator has two stable states, as indicated by the prefix bi in its name. Typically, one state is referred to as set and the other as reset. The simplest bistable device, therefore, is known as a set-reset, or S-R, latch. To create an S-R latch, we can wire two NOR gates in such a way that the output of one feeds back to the input of another, and vice versa. The Q and not-Q outputs are supposed to be in opposite states.
17. D Latch : Since the enable input on a gated S-R latch provides a way to latch the Q and not-Q outputs without regard to the status of S or R, we can eliminate one of those inputs to create a multivibrator latch circuit with no “illegal” input states.
18. D filp flop : The D flip-flop is a clocked flip-flop with a single digital input ‘D’. Each time a D flip-flop is clocked, its output follows the state of ‘D’. The D Flip Flop has only two inputs D and CP. The D inputs go precisely to the S input and its complement is used to the R input.
19. JK Flipflop : The JK flip flop is one of the most used flip flops in digital circuits. The JK flip flop is a universal flip flop having two inputs 'J' and 'K'. In SR flip flop, the 'S' and 'R' are the shortened abbreviated letters for Set and Reset, but J and K are not. The J and K are themselves autonomous letters which are chosen to distinguish the flip flop design from other types. The JK flip flop work in the same way as the SR flip flop work. The JK flip flop has 'J' and 'K' flip flop instead of 'S' and 'R'. The only difference between JK flip flop and SR flip flop is that when both inputs of SR flip flop is set to 1, the circuit produces the invalid states as outputs, but in case of JK flip flop, there are no invalid states even if both 'J' and 'K' flip flops are set to 1. The JK Flip Flop is a gated SR flip-flop having the addition of a clock input circuitry. The invalid or illegal output condition occurs when both of the inputs are set to 1 and are prevented by the addition of a clock input circuit. So, the JK flip-flop has four possible input combinations, i.e., 1, 0, "no change" and "toggle". The symbol of JK flip flop is the same as SR Bistable Latch except for the addition of a clock input.
20. Toggle FlipFlop : In T flip flop, "T" defines the term "Toggle". In SR Flip Flop, we provide only a single input called "Toggle" or "Trigger" input to avoid an intermediate state occurrence. Now, this flip-flop work as a Toggle switch. The next output state is changed with the complement of the present state output. This process is known as "Toggling"'. We can construct the "T Flip Flop" by making changes in the "JK Flip Flop". The "T Flip Flop" has only one input, which is constructed by connecting the input of JK flip flop. This single input is called T. In simple words, we can construct the "T Flip Flop" by converting a "JK Flip Flop". Sometimes the "T Flip Flop" is referred to as single input "JK Flip Flop".
21. Characteristic Equation State table : A characteristic equation relates the inputs to the flip-flop (and not to the sequential circuit) with the output of the flip-flop.
22. State diagram : A state diagram is a type of diagram used in computer science and related fields to describe the behavior of systems. State diagrams require that the system described is composed of a finite number of states
23. state equation : A state equation specifies the next state as a function of the present state and inputs.
24. Output equation : 
25. Flipflop input equation : The combinational logic circuit inputs to a flip-flop are described by a flip-flop input Boolean equation.
26. State Machine: Mealy Machine and Moore Machine : The value of the output function is a function of the current state and the changes at the clock edges, whenever state changes occur. Mealy machines react faster to inputs. They generally react in the same clock cycle. In Moore machines, more logic is required to decode the outputs resulting in more circuit delays.