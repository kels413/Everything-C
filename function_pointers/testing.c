#include <stdio.h>
#include <string.h>

typedef struct Task {
    char description[100];
    char dueDate[20];
    char status[20];
} Task;

void addTask(Task tasks[], int *taskCount);
void updateStatus(Task tasks[], int taskCount);
void displayTasks(Task tasks[], int taskCount);

typedef struct Operation {
    char *opcode;
    void (*operation)(Task[], int *);
} Operation;

Operation operations[] = {
    {"add", addTask},
    {"update", updateStatus},
    {"display", displayTasks},
    {NULL, NULL}
};


int main() {
    Task tasks[100]; // Assuming a maximum of 100 tasks
    int taskCount = 0;
    char opcode[20];

    while (1) {
        printf("Enter command (add/update/display/exit): ");
        scanf("%s", opcode);

        // Find the operation in the array and execute it
        for (int i = 0; operations[i].opcode != NULL; i++) {
            if (strcmp(opcode, operations[i].opcode) == 0) {
                operations[i].operation(tasks, &taskCount);
                break;
            }
        }

        if (strcmp(opcode, "exit") == 0) {
            break;
        }
    }

    return 0;
}
