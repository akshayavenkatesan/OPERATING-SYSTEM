<h1>OPERATING-SYSTEM</h1>
<h3>1.BANKERS ALGORITHM</h3>
<p>The banker’s algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety by simulating 
the allocation for predetermined maximum possible amounts of all resources, then makes an “s-state” check 
to test for possible activities, before deciding whether allocation should be allowed to continue.</p>
<h3>2.DINING PHILOSOPHERS PROBLEM</h3>
<p>The dining philosophers problem is another classic synchronization problem which is used to evaluate situations where there is a need of allocating multiple resources to multiple processes.</p>
<h3>3.Preemptive Priority Scheduling</h3>
<p>In Preemptive Priority Scheduling, at the time of arrival of a process in the ready queue, its Priority is compared with the priority of the other processes present in the ready queue as well as with the one which is being executed by the CPU at that point of time. The One with the highest priority among all the available processes will be given the CPU next.</p>

<h3>4.PRODUCER CONSUMER USING SEMAPHORES </h3>
<p>Producer consumer problem is also known as bounded buffer problem. In this problem we have two processes, producer and consumer, who share a fixed size buffer. Producer work is to produce data or items and put in buffer. Consumer work is to remove data from buffer and consume it. We have to make sure that producer do not produce data when buffer is full and consumer do not remove data when buffer is empty.</p>
<h3>5.Shortest Job First scheduling (Preemptive) </h3>
<p>In this scheduling algorithm, the process with the smallest amount of time remaining until completion is selected to execute. Since the currently executing process is the one with the shortest amount of time remaining by definition, and since that time should only reduce as execution progresses, processes will always run until they complete or a new process is added that requires a smaller amount of time.</p>
