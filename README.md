# To-Do-List-Manager

As part of my CS50 Course,I have implemented a basic TO-DO-LIST-MANAGER.
This program allows users to manage a simple task list through the terminal. Tasks are stored in a file called tasks.txt, and the program supports two primary operations: adding and removing tasks.

Adding Tasks: Users can add new tasks to a list stored in a text file.
Removing Tasks: Users can remove a specific task from the list by specifying its task number.
The program supports two main commands: add and remove.

Add a Task:
The add command allows the user to append new tasks to the tasks.txt file.
When a user adds a task, the task will be saved in the file in the following format:  New task: <task_description>
If the tasks.txt file does not exist when the program is run, it is created automatically.
If the file exists, the task is simply appended to the end of the file.

Remove a Task:
The remove command allows the user to delete a task based on its task number.
The tasks are numbered in the order they are added (starting from 1). If the user enters the number of a task to remove, it is deleted, and the remaining tasks are renumbered.
After a task is removed, the list is updated, and all remaining tasks are written back to the file.


I have included file handling and error handling also:

File Handling:

Add Command: The program opens tasks.txt in append mode ("a") to add a new task. If the file does not exist, it is created automatically using "w" mode.
Remove Command: The program reads all tasks from tasks.txt into an array, skips the task to be removed, and rewrites the file with the updated list.


Error Handling:

The program checks whether the correct number of arguments are provided.
If the remove command is given an invalid task number (such as a number that does not exist), it will print an error message.
If there are issues opening or creating the tasks.txt file, an error message is printed.

Limitations and Considerations::

File Size:
The program is designed for simple tasks and works well with small lists. It stores all tasks in memory temporarily, which is not efficient for large numbers of tasks.

Task Numbering:
The program uses a 1-based index for tasks. After removing a task, the remaining tasks are renumbered automatically when rewriting the file.

No Editing:
 Currently, the program does not support editing tasks. A task can only be added or removed.

File Structure:
 The tasks are stored in the file with a simple format: New task: <task_description>. There is no advanced structure (e.g., timestamps or priorities).


Future Enhancements::

Editing Tasks: Implement a command to edit existing tasks.
Task Prioritization: Allow users to mark tasks as high or low priority.
Task Completion: Add a way to mark tasks as completed (e.g., a check mark or a "completed" status).
Persistent Task Index: Preserve the original task order and numbering without reassigning indices after a removal.


Conclusion::
This simple to-do list manager provides a basic functionality for managing tasks via the command line. It allows users to add tasks, remove tasks by number, and persist the tasks to a text file. It’s a good starting point for learning how to interact with files and process user input in C.
