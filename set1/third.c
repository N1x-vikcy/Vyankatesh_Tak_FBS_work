#include<stdio.h>
#include<string.h>

struct Task {

    int id;
    char detail[100];
    char status[20];
};

struct Task t[100];

int count = 0;

void addTask() {

    printf("Enter the Task id: ");
    scanf("%d", &t[count].id);

    getchar();

    printf("Enter the details of task: ");
    scanf("%[^\n]", t[count].detail);

    strcpy(t[count].status, "Pending");

    count++;

    printf("Task added successfully\n");
}

void updateTask() {

    int id, i;
    int found = 0;

    printf("Enter task id to update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {

        if(t[i].id == id) {

            printf("Enter new status: ");
            scanf("%s", t[i].status);

            found = 1;

            printf("Task updated successfully\n");

            break;
        }
    }

    if(found == 0) {
        printf("Task not found\n");
    }
}

void displayTask() {

    int i;

    if(count == 0) {

        printf("No Tasks Available\n");
        return;
    }

    printf("\nTask Details:\n");

    for(i = 0; i < count; i++) {

        printf("\nTask ID: %d\n", t[i].id);
        printf("Description: %s\n", t[i].detail);
        printf("Status: %s\n", t[i].status);
    }
}

int main() {

    int choice;

    do {

        printf("\n===== TO-DO LIST MENU =====\n");

        printf("1. Add Task\n");
        printf("2. Update Task\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addTask();
                break;

            case 2:
                updateTask();
                break;

            case 3:
                displayTask();
                break;

            case 4:
                printf("Exiting Program\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}