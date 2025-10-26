#include <stdio.h>
#define MAX 100

int arr[MAX];
int size = 0;

void create() {
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void display() {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert() {
    int pos, element;
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &element);
    if(pos > size || pos < 0) {
        printf("Invalid position\n");
    } else {
        for(int i = size; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = element;
        size++;
    }
}

void delete() {
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos >= size || pos < 0) {
        printf("Invalid position\n");
    } else {
        for(int i = pos; i < size-1; i++) {
            arr[i] = arr[i+1];
        }
        size--;
    }
}

void linear_search() {
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Linear Search\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                linear_search();
                break;
            case 6:
                return 0;
            default:
                printf("Enter valid choice.\n");
        }
    }
    return 0;
}