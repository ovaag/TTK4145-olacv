# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency means that multiple tasks are running in overlapping time periods. To do this the cpu runs parts of one task at the time and then wait and run a part of another task. Parallelism takes advantage of multiple core cpus by assigning one core to each task or sub-task. Multiple tasks can then be performed simultaneously. This means that on a single core cpu it would only be possible to use concurrency to run multiple tasks in the same time period.
 
 ### Why have machines become increasingly multicore in the past decade?
 > Multiple core cpus allows the computer to increase the perfomance utilizing parallelism without having to increase the clock speed of the cpu
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > For example if two transactions are executed at the same time, concurrency can take care of both transaction in the same time period.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > I would say both. Mostly easier since it allows the user to run multiple task simultaneously, but the complexity increases.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > Process: Part of a program that is being executed by one or multiple threads
   Thread: Component in a process. Within a process multiple threads can be running. Processes do not share memory while threads can do.
   Green threads: While threads are managed by the operating system, green threads have a different scheduler. Otherwise similar concept.
   Coroutines: Pretty similar to threads but not os-managed either. Cooperative mulittasking instead of preemptevily multitasking means that Coroutines can handle concurrency but not parallelism
    
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > They all starts a new thread
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > GIL only allows one thread to run at the same time. This means that the code will not execute as fast as it possibly could if multiple thread where running simultaneously.
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > The python multiprocessing module spawns more interpreters. This can be utilized as a workaround GIL.
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > The function changes the maximum number of CPUs that can be executing simultaneously.
