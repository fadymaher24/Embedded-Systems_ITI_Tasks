// Clinic Management System
// by: Fady Maher Adly
// 2/9/2023

#include <stdio.h>
#include <stdbool.h>

#define NUM_SLOTS 5

struct Reservation {
    int patient_id;
    bool is_reserved;
};

struct Patient {
char name[50];
int age;
char gender[10];
//  Unique id for each patient
int id;
};

bool password_looping(int *passwords, int password);
bool id_looping(struct Patient patients[], int id, int length);
void deletePatient(struct Patient patients[], int id, int *length);

int main(){

    int mode;
    int admin_selection;
    int passwords[]= {1234};
    int password;
    int attempts = 0; // Count the number of password attempts
    int exit_flag = 0;
    struct Patient patients[100];
    struct Reservation slots[NUM_SLOTS] = {0};
    int patient_count = 0;
    int id;

    exit:
    while (!exit_flag) {  
    // choose which mode to run
    printf("Choose mode:\n");
    printf("1- Admin mode\n");
    printf("2- User mode\n");
    printf("3- Exit\n");
    scanf("%d",&mode);
        if (mode == 1) {
            // Admin mode
            int attempts = 0; 
            
            // if it was 3 trail exit while
            while (attempts < 3) {
                printf("Admin mode\n");
                printf("Enter the Password:\n");
                scanf("%d", &password);
                
                if (password_looping(passwords, password)) {
                    // printf("Correct password\n");
                    // admin operations
                while(1){    
                    printf("Select:\n");
                    printf("1- Add new patient record\n");
                    printf("2- Edit patient record\n");
                    printf("3- Reserve a slot with the doctor\n");
                    printf("4- Cancel reservation\n");
                    printf("5- Exit\n");
                    scanf("%d",&admin_selection);
                    if(admin_selection == 1){
                        // add new patient record
                        printf("Enter patient name:\n");
                        scanf("%s",&patients[patient_count].name);
                        printf("Enter patient age:\n");
                        scanf("%d",&patients[patient_count].age);
                        printf("Enter patient gender:\n");
                        scanf("%s",&patients[patient_count].gender);
                        printf("Enter patient id:\n");
                        scanf("%d",&patients[patient_count].id);    
                        if (id_looping(patients, patients[patient_count].id, patient_count)){
                            printf("ID already exists\n");
                            printf("\n");
                            break;
                        }else{
                            patient_count++;
                            printf("Patient added successfully\n");
                            printf("\n");
                        }

                    }else if(admin_selection == 2){
                        // edit patient record
                        printf("Enter patient id:\n");
                        scanf("%d",&id);
                        if(id_looping(patients,id,patient_count)){
                        // edit patient record
                        printf("Enter new patient name:\n");
                        // get the index of the patient
                        int index = 0;
                        for(int i=0; i<patient_count;i++){
                            if(id==patients[i].id)
                            {
                                index = i;
                                break;
                            }
                        }
                        scanf("%s",patients[index].name);
                        printf("Enter new patient age:\n");
                        scanf("%d",&patients[index].age);
                        printf("Enter new patient gender:\n");
                        scanf("%s",&patients[index].gender);
                        printf("Patient record updated successfully\n");
                        printf("\n");
                    }else {
                        printf("incorrect ID\n");
                        printf("\n");
                        
                    }

                     }
                    else if(admin_selection == 3){
                        // reserve a slot with the doctor
                        // 
                    printf("Available slots:\n");
                       for (int i = 0; i < NUM_SLOTS; i++) {
                             if (!slots[i].is_reserved) {
                                   printf("%d- Slot %d: %s\n", i + 1, i + 1, 
                                      i == 0 ? "2pm to 2:30pm" : i == 1 ? "2:30pm to 3pm" : 
                                      i == 2 ? "3pm to 3:30pm" : i == 3 ? "4pm to 4:30pm" : "4:30pm to 5pm");
            }
        }

                    printf("Enter patient id:\n");
                    scanf("%d", &id);

                    if (!id_looping(patients, id, patient_count)) {
                        printf("Invalid patient ID\n");
                        continue;
                    }

                    printf("Enter desired slot (1-%d):\n", NUM_SLOTS);
                    int slot;
                    scanf("%d", &slot);

                    if (slot < 1 || slot > NUM_SLOTS || slots[slot - 1].is_reserved) {
                        printf("Invalid slot or slot already reserved\n");
                    } else {
                        slots[slot - 1].is_reserved = true;
                        slots[slot - 1].patient_id = id;
                        printf("Reservation done successfully\n");
                    }
                    
                    printf("\n");
    
                    }
                    else if (admin_selection == 4) {
                        // Cancel reservation
                        printf("Enter patient id:\n");
                        scanf("%d", &id);
                        if (id_looping(patients, id, patient_count)) {
                            printf("Reservation cancelled successfully\n");
                            printf("\n");

                            // Find the canceled patient
                            int index = -1;
                            for (int i = 0; i < patient_count; i++) {
                                if (patients[i].id == id) {
                                    index = i;
                                    break;
                                }
                            }

                            // If the canceled patient was found, mark the associated slot as available
                            if (index != -1) {
                                int canceledSlot = -1;
                                for (int i = 0; i < NUM_SLOTS; i++) {
                                    if (slots[i].is_reserved && slots[i].patient_id == id) {
                                        canceledSlot = i;
                                        break;
                                    }
                                }
                                
                                // If the canceled slot was found, mark it as available
                                if (canceledSlot != -1) {
                                    slots[canceledSlot].is_reserved = false;
                                    slots[canceledSlot].patient_id = -1; // Clear patient ID
                                } else {
                                    printf("Reservation not found for the specified patient ID.\n");
                                }
                            }

                            // Remove the canceled patient from the list
                            deletePatient(patients, id, &patient_count);
                        } else {
                            printf("Patient with ID %d not found. No reservation to cancel.\n", id);
                        }
                    
                    }else if(admin_selection == 5){
                        // exit
                        printf("exiting...\n");
                        // exit and go to the first while loop
                        goto exit;
                        
                    }

                    else{
                        printf("Invalid selection\n");
                        printf("\n");
                        // break;
                    }
                    //for new while
                    }
                } else {
                    printf("Password is Incorrect. Please try again:\n");
                    attempts++;
                }
            }
            if (attempts == 3) {
                printf("Maximum attempts reached.\n");
                exit_flag = 1;
            } 
// User mode
        } else if (mode == 2) {
            // User mode
            printf("User mode\n");
            int user_selection;
            printf("enter patient id:\n");
            scanf("%d",&id);
            if(id_looping(patients,id,patient_count)){
                while(1){
                printf("Select:\n");
                printf("1- View patient record\n");
                printf("2- View today's reservations\n");
                printf("3- Exit\n");
                scanf("%d",&user_selection);

            if (user_selection == 1) {
            // View patient record
            // Search for the patient with the entered ID
            bool patientFound = false;
            for (int i = 0; i < patient_count; i++) {
                if (patients[i].id == id) {
                    printf("Patient Name: %s\n", patients[i].name);
                    printf("Patient Age: %d\n", patients[i].age);
                    printf("Patient Gender: %s\n", patients[i].gender);
                    printf("/n");
                    patientFound = true;
                    break;
                }
            }

            if (!patientFound) {
                printf("Patient with ID %d not found.\n", id);
            }
        } else if (user_selection == 2) {
              // View today's reservations
                printf("Today's Reservations:\n");
                for (int i = 0; i < NUM_SLOTS; i++) {
                    if (slots[i].is_reserved) {
                        printf("Slot %d: %s - Patient ID: %d\n", i + 1,
                            i == 0 ? "2pm to 2:30pm" : i == 1 ? "2:30pm to 3pm" :
                            i == 2 ? "3pm to 3:30pm" : i == 3 ? "4pm to 4:30pm" : "4:30pm to 5pm",
                            slots[i].patient_id);
                    }
                }
            } else if (user_selection == 3) {
                        // exit
                        printf("exiting...\n");
                        goto exit;
            } else {
                printf("Invalid selection\n");
            }
            }
            }else{
                printf("incorrect ID\n");
                printf("\n");
            }

        } else if (mode == 3) {
            // EXIT
            printf("See you soon!\n");
            exit_flag = 1;
        } else {
            printf("Invalid mode. Please choose mode 1 (Admin) or 2 (User):\n");
        }
    }
    return 0;
}

bool password_looping(int *passwords,int password){
    bool check = false;
    int length = sizeof(passwords) / sizeof(passwords[0]);
    for(int i=0; i<length;i++){
        if(password==passwords[i])
        {
            check= true;
            break;
        }
}
    return check;
}

bool id_looping(struct Patient patients[], int id,int length){
    bool check = false;
    for(int i=0; i<length;i++){
        if(id==patients[i].id)
        {
            check= true;
            break;
        }
}
    return check;
}


void deletePatient(struct Patient patients[], int id, int *length)
{
    int i, j;
    for (i = 0; i < *length; i++)
    {
        if (patients[i].id == id)
        {
            break;
        }
    }
    if (i < *length)
    {
        (*length)--; // Decrease the length of the array
        for (j = i; j < *length; j++)
        {
            patients[j] = patients[j + 1]; // Shift elements to fill the gap
        }
    }
}
