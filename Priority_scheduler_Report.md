# Change of Scheduler : Report

**Made By** Prajwal Krishna

-----------
- I  have changed to scheduler from round-robin to priority based.
- By default every terminal process(exec) has priority of 1.
- Higher the priority is represented by lower number.
- Incase of ties round robin is used.
--------
## View Processes with their priorities
    ps
#### Expected output format

Name | Pid| Priority| Status
---|---|---|--
ps | 3 | 1 | Running
bigtest | 5 | 60 | Running
bigtest | 6 | 60 | Runnable
-------------------
## Change priority
    set_priority <pid> <priority>
----------
## To view in action
    bigtest <n>

#### For n==2
Name | Pid| Priority| Status
---|---|---|--
ps | 3 | 1 | Running
bigtest | 5 | 60 | Running
bigtest | 6 | 60 | Runnable

Name | Pid| Priority| Status
---|---|---|--
ps | 3 | 1 | Running
bigtest | 5 | 60 | Runnable
bigtest | 6 | 60 | Running

Alternates between these two states

    set_priority 6 20

On running above command state fixes itself.    
Name | Pid| Priority| Status
---|---|---|--
ps | 3 | 1 | Running
bigtest | 5 | 60 | Runnable
bigtest | 6 | 60 | Running
__________
# Prajwal Krishna Maitin
