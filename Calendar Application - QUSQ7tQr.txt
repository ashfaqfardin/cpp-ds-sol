#include <bits/stdc++.h>
using namespace std;

string starting_day;

struct reminder{
    string reminderTitle;
    string reminderDescript;
    int reminderDate;
    string reminderMonth;
    
    reminder* next;
};

reminder* head = NULL;

void addReminder(){
    reminder* new_reminder = new reminder;
    cout << "Reminder Title: ";
    cin >> new_reminder->reminderTitle;
    
    cout << "Reminder Description: ";
    cin >> new_reminder->reminderDescript;
    
    cout << "Reminder Date: ";
    cin >> new_reminder->reminderDate;
    
    cout << "Reminder Month: ";
    cin >> new_reminder->reminderMonth;
    
    new_reminder->next = NULL;
    
    if(head == NULL){
        head = new_reminder;
    }
    else{
        reminder* temp_rem = head;
        while(temp_rem->next != NULL){
            temp_rem = temp_rem->next;
        }
        temp_rem->next = new_reminder;
    }
}

void updateReminder(){
    reminder* new_reminder = new reminder;
    cout << "Reminder Title: ";
    cin >> new_reminder->reminderTitle;
    
    cout << "Reminder Date: ";
    cin >> new_reminder->reminderDate;
    
    cout << "Reminder Month: ";
    cin >> new_reminder->reminderMonth;
    
    new_reminder->next = NULL;
    
    if(head == NULL){
        cout << "No reminder found\n";
    }
    else{
        reminder* temp_rem = head;
        while(temp_rem!= NULL){
            if(temp_rem->reminderTitle == new_reminder->reminderTitle){
                if(temp_rem->reminderDate == new_reminder->reminderDate){
                    if(temp_rem->reminderMonth == new_reminder->reminderMonth){
                        cout << "Update Reminder Description: ";
                        cin >> new_reminder->reminderDescript;
                        temp_rem = new_reminder;
                    }
                }
            }
            else{
                temp_rem = temp_rem->next;
            }
        }
    }
}

int option;
void calendarOptions(){
    cout << "0. Exit from the calendar\n";
    cout << "1. Add reminder\n";
    cout << "2. Update reminder\n";
    cout << "3. Delete a specific reminder\n";
    cout << "4. View all the reminders of a specific month\n";
    cout << "\n";
    cout << "Choose option: ";
    
    
    cin >> option;
    if(option == 0){
        return;
    }
    else if(option == 1){
        addReminder();
    }
    else if(option == 2){
        updateReminder();
    }
    else if(option == 3){
        // delReminder();
    }
    else if(option == 4){
        // viewReminder();
    }
    else{
        cout << "Invalid Option\n";
    }
    
}

//unfinished reminder part

void printDates(int days_in_month[], int month, string startDay[]){
    int** dayArray = new int*[6];
    for(int i = 0; i < 6; i++){
        dayArray[i] = new int[7];
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){
            dayArray[i][j] = 0;
        }
    }
    int dayCount = 1;
    int l = 0;
    while(startDay[l] != starting_day){
        cout << "     ";
        l++;
    }
    //first row
    for(int i = l; i < 7; i++){
        dayArray[0][i] = dayCount;
        cout << dayArray[0][i] << "    " ;
        dayCount++;
    }
    cout << endl;
    //rest of the rows
    for(int i = 1; i < 6; i++){
        //print numbers
        for(int j = 0; j < 7; j++){
            if(dayCount <= days_in_month[month]){
                dayArray[i][j] = dayCount;
                
                if(dayCount < 10){
                    cout << dayArray[i][j] << "    " ;
                }
                else {
                    cout << dayArray[i][j] << "   " ;
                }
                dayCount++;
            }
        }
        cout << endl;
    }
    
    //update strating day
    int countDays = 0; // starting day index
    for(int i = 0; i < 7; i++){
        if(starting_day == startDay[i]){
            countDays = i;
        }
    }
    if(days_in_month[month] % 7 == 3){
        int temp = countDays + 3;
        if(temp > 6){
            starting_day = startDay[temp - 7];
        }
        else if(countDays < 4){
            starting_day = startDay[countDays + 3];
        }
    }
    
    else if(days_in_month[month] % 7 == 2){
        int temp = countDays + 2;
        if(temp > 6){
            starting_day = startDay[temp - 7];
        }
        else if(countDays < 5){
            starting_day = startDay[countDays + 2];
        }
    }
    
    else if(days_in_month[month] % 7 == 1){
        int temp = countDays + 1;
        if(days_in_month[month] % 7 == 1){
            if(temp > 6){
                starting_day = startDay[temp - 7];
            }
            else if(countDays < 6){
                starting_day = startDay[countDays + 1];
            }
        }
    }
    
}

bool checkLeapYear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}

void calendarApp(int year, string starting_day){
    string month_name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day_name[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    
    //check if leap year
    if(checkLeapYear(year)){
        days_in_months[1] = 29;
    }
    
    //print months in year
    for(int i = 0; i < 12; i++){
        cout << endl;
        cout << "---------------" << month_name[i] << "---------------" << endl;
        for(int j = 0; j < 7; j++){
            cout << day_name[j] << "  ";
        }
        cout << endl;
        printDates(days_in_months, i, day_name);
    }
}

int main()
{
	int year;
    cout << "Year: ";
    cin >> year;
    
    cout << "Starting day of the year: ";
    cin >> starting_day;
    
    while(true){
        calendarApp(year, starting_day);
        calendarOptions();
        if(option == 0){
            break;
        }
    }
        
	return 0;
}
