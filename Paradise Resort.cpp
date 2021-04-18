#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct guest {
    char nm[10], cntry[10], rmtyp[10], Bills[3];
    int rmno, eWllt;
};

struct food {
    char nm[50];
    int price, code;
};

void Banner();
void dummyGuests();
void menu();
void exit();

void HTLtitle();
void HTLmenu();
void room();
void addroom(guest g[50], int n);
void modifyroom(guest g[50], int n);
void deleteroom(guest g[50], int n);
void displayroom(guest g[50], int n);
void searching();
void searchbyroomno(guest g[50], int n);
void searchbyname(guest g[50], int n);
void searchbycountry(guest g[50], int n);
void searchbyroomtype(guest g[50], int n);
void sorting();
void sortbyname(guest g[50], int n);
void sortbycountry(guest g[50], int n);
void sortbyroomno(guest g[50], int n);
void counting();
void countbycountry(guest g[50], int n);
void countbyroomtype(guest g[50], int n);
void Finance();
void Bills(guest g[50], int n);
void report(guest g[50], int n);

void RSTRNTmenu();
void foodmenu();
void orderfood(guest g[50], int n);

using namespace std;

int n = 10;
guest g[50];
food f[15];

void banner() {
    cout << endl
         << endl;
    cout << "             ########################################" << endl;
    cout << "             ##                                    ##" << endl;
    cout << "             ##	             Welcome to          ##" << endl;
    cout << "             ##                                    ##" << endl;
    cout << "             ##          The Paradise Resort       ##" << endl;
    cout << "             ##                                    ##" << endl;
    cout << "             ########################################" << endl
         << endl
         << endl;
    cout << "           ##    Enter any key to Enter the Portal!  ##" << endl;
    getch();
}

void dummyGuests() {
    strcpy(g[0].nm, "Freyam");
    strcpy(g[0].cntry, "UAE");
    strcpy(g[0].rmtyp, "Master");
    strcpy(g[0].Bills, "YES");
    g[0].rmno = 7;
    g[0].eWllt = 1000000;
    strcpy(g[1].nm, "Freya");
    strcpy(g[1].cntry, "UAE");
    strcpy(g[1].rmtyp, "Master");
    strcpy(g[1].Bills, "YES");
    g[1].rmno = 1;
    g[1].eWllt = 7500;
    strcpy(g[2].nm, "Tejal");
    strcpy(g[2].cntry, "UAE");
    strcpy(g[2].rmtyp, "Queen");
    strcpy(g[2].Bills, "YES");
    g[2].rmno = 2;
    g[2].eWllt = 1000;
    strcpy(g[3].nm, "Bhushan");
    strcpy(g[3].cntry, "UAE");
    strcpy(g[3].rmtyp, "King");
    strcpy(g[3].Bills, "YES");
    g[3].rmno = 3;
    g[3].eWllt = 3000;
    strcpy(g[4].nm, "Critiano");
    strcpy(g[4].cntry, "Portugal");
    strcpy(g[4].rmtyp, "Deluxe");
    strcpy(g[4].Bills, "NO");
    g[4].rmno = 4;
    g[4].eWllt = 30000;
    strcpy(g[5].nm, "Dhoni");
    strcpy(g[5].cntry, "India");
    strcpy(g[5].rmtyp, "Single");
    strcpy(g[5].Bills, "YES");
    g[5].rmno = 5;
    g[5].eWllt = 40000;
    strcpy(g[6].nm, "Kohli");
    strcpy(g[6].cntry, "India");
    strcpy(g[6].rmtyp, "Single");
    strcpy(g[6].Bills, "NO");
    g[6].rmno = 6;
    g[6].eWllt = 35000;
    strcpy(g[7].nm, "Messi");
    strcpy(g[7].cntry, "Argentina");
    strcpy(g[7].rmtyp, "Single");
    strcpy(g[7].Bills, "NO");
    g[7].rmno = 8;
    g[7].eWllt = 35000;
    strcpy(g[8].nm, "PewDiePie");
    strcpy(g[8].cntry, "Sweden");
    strcpy(g[8].rmtyp, "Master");
    strcpy(g[8].Bills, "NO");
    g[8].rmno = 9;
    g[8].eWllt = 8500;
    strcpy(g[9].nm, "James");
    strcpy(g[9].cntry, "USA");
    strcpy(g[9].rmtyp, "Master");
    strcpy(g[9].Bills, "NO");
    g[9].rmno = 10;
    g[9].eWllt = 30000;
}

int main() {
    banner();
    system("cls");
    dummyGuests();
    menu();
    return 0;
}

void menu() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "             |     -----PARADISE RESORT-----   |" << endl;
        cout << "             |                                 |" << endl;
        cout << "             |  1. 'THE CONTINENTAL' HOTEL     |" << endl;
        cout << "             |  2. 'PEPPERMILL' RESTAURANT     |" << endl;
        cout << "             |                                 |" << endl;
        cout << "             |  0. EXIT HOTEL                  |" << endl;
        cout << "             |                                 |" << endl
             << endl;
        cout << "             Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            HTLmenu();
            break;
        case 2:
            RSTRNTmenu();
            break;
        case 0:
            exit();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            menu();
        }
        }
    } while (response <= 3);
}

//THE CONTINENTAL Hotel
void HTLmenu() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|   ---THE CONTINENTAL---   |" << endl;
        cout << "|                           |" << endl;
        cout << "|     1. ROOM MANAGEMENT    |" << endl;
        cout << "|     2. SEARCH ROOMS       |" << endl;
        cout << "|     3. SORT ROOMS         |" << endl;
        cout << "|     4. COUNT ROOMS        |" << endl;
        cout << "|     5. FINANCE            |" << endl;
        cout << "|                           |" << endl;
        cout << "|     0. EXIT HOTEL         |" << endl;
        cout << "|                           |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            room();
            break;
        case 2:
            searching();
            break;
        case 3:
            sorting();
            break;
        case 4:
            counting();
            break;
        case 5:
            Finance();
            break;
            //case 6: Feedback(); break; [not yet available]
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            HTLmenu();
        }
        }
    } while (response <= 5);
}

void room() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|   --ROOM MANAGEMENT--   |" << endl;
        cout << "|                         |" << endl;
        cout << "|   1. ADD ROOMS          |" << endl;
        cout << "|   2. MODIFY ROOMS       |" << endl;
        cout << "|   3. DELETE ROOMS       |" << endl;
        cout << "|   4. DISPLAY ALL ROOMS  |" << endl;
        cout << "|                         |" << endl;
        cout << "|   9. PREVIOUS MENU      |" << endl;
        cout << "|   0. EXIT HOTEL         |" << endl;
        cout << "|                         |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            addroom(g, n);
            break;
        case 2:
            modifyroom(g, n);
            break;
        case 3:
            deleteroom(g, n);
            break;
        case 4:
            displayroom(g, n);
            break;
        case 9:
            HTLmenu();
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            room();
        }
        }
    } while (response <= 9);
}

void addroom(guest g[50], int n) {
    system("cls");
    int x;

    cout << endl
         << "Enter the Number of Guests to be Added: ";
    cin >> x;
    cout << endl;

    for (int i = n; i < n + x; i++) {
        cout << endl
             << endl
             << "Enter the Details of the Guest #" << i + 1 << ": " << endl;
        cout << "o-------------------------------------------------------------" << endl;
        cout << "\n Name: ";
        cin >> g[i].nm;
        cout << "\n Country of Residence: ";
        cin >> g[i].cntry;
        cout << "\n Room Number: ";
        cin >> g[i].rmno;
        cout << "\n Room Type: ";
        cin >> g[i].rmtyp;
        cout << "\n Bills Paid?: ";
        cin >> g[i].Bills;
        cout << "\n eWallet Balance: ";
        cin >> g[i].eWllt;
        cout << "\no-----------------------------------------------------------" << endl;
    }
    ::n += x;
}

void modifyroom(guest g[50], int n) {
    system("cls");
    int rmno;

    cout << "Enter the Room Number to be Modified: ";
    cin >> rmno;
    cout << endl;

    for (int i = 0; i < n; i++)
        if (g[i].rmno == rmno) {
            cout << "Enter the NEW Details of the Guest staying in ROOM " << rmno << ": " << endl;
            cout << "o-------------------------------------------------------------" << endl;
            cout << "\n Name: ";
            cin >> g[i].nm;
            cout << "\n Country of Residence: ";
            cin >> g[i].cntry;
            cout << "\n Bills Paid?: ";
            cin >> g[i].Bills;
            cout << "\n eWallet Balance: ";
            cin >> g[i].eWllt;
            cout << "\no-----------------------------------------------------------" << endl;
            break;
        }
}

void deleteroom(guest g[50], int n) {
    system("cls");
    int rmno;
    char temp[30];
    int temp1, temp2;

    cout << "Enter the Room Number to be Deleted: ";
    cin >> rmno;
    cout << endl;

    for (int i = 0; i < 50; i++)
        if (rmno == g[i].rmno) {
            cout << endl
                 << "Successfully Deleted " << g[i].nm;
            for (int k = i + 1; i < n; i++, k++) {
                strcpy(temp, g[i].nm);
                strcpy(g[i].nm, g[k].nm);
                strcpy(g[k].nm, temp);
                strcpy(temp, g[i].cntry);
                strcpy(g[i].cntry, g[k].cntry);
                strcpy(g[k].cntry, temp);
                strcpy(temp, g[i].rmtyp);
                strcpy(g[i].rmtyp, g[k].rmtyp);
                strcpy(g[k].rmtyp, temp);
                strcpy(temp, g[i].Bills);
                strcpy(g[i].Bills, g[k].Bills);
                strcpy(g[k].Bills, temp);
                temp1 = g[i].rmno;
                g[i].rmno = g[k].rmno;
                g[k].rmno = temp1;
                temp2 = g[i].eWllt;
                g[i].eWllt = g[k].eWllt;
                g[k].eWllt = temp2;
            }
            ::n--;
        }
}

void displayroom(guest g[50], int n) {
    system("cls");
    for (int i = 0; i < n; i++) {
        system("color B");
        cout << "o-------------------------------------------------------------" << endl;
        cout << "   Guest #" << i + 1 << ": " << endl
             << endl;
        cout << "\n Name: " << g[i].nm;
        cout << "\n Country of Residence: " << g[i].cntry;
        cout << "\n Room Number: " << g[i].rmno;
        cout << "\n BILLS PAID?: " << g[i].Bills;
        cout << "\n eWALLET BALANCE: " << g[i].eWllt;
        cout << "\no-----------------------------------------------------------" << endl
             << endl;
    }
    getch();
}

void searching() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|       --SEARCHING ROOMS--     |" << endl;
        cout << "|                               |" << endl;
        cout << "|   1. BY ROOM NUMBER           |" << endl;
        cout << "|   2. BY NAME                  |" << endl;
        cout << "|   3. BY COUNTRY OF RESIDENCE  |" << endl;
        cout << "|   4. BY ROOM TYPE             |" << endl;
        cout << "|                               |" << endl;
        cout << "|   9. PREVIOUS MENU            |" << endl;
        cout << "|   0. EXIT HOTEL               |" << endl;
        cout << "|                               |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            searchbyroomno(g, n);
            break;
        case 2:
            searchbyname(g, n);
            break;
        case 3:
            searchbycountry(g, n);
            break;
        case 4:
            searchbyroomtype(g, n);
            break;
        case 9:
            HTLmenu();
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            searching();
        }
        }

    } while (response <= 9);
}

void searchbyroomno(guest g[50], int n) {
    system("cls");
    int found = 0, rmno;

    cout << "Enter the Room Number to be Searched: ";
    cin >> rmno;

    for (int i = 0; i < n; i++)
        if (g[i].rmno == rmno) {
            found++;
            cout << endl
                 << endl;
            cout << "o-------------------------------------------------------------" << endl;
            cout << "o	   Name: " << g[i].nm << endl;
            cout << "o       Country of Residence: " << g[i].cntry << endl;
            cout << "o       Room Number: " << g[i].rmno << endl;
            cout << "o       Room Type: " << g[i].rmtyp << endl;
            cout << "o-------------------------------------------------------------" << endl;
            break;
        }
    if (found == 0)
        cout << "Room Number " << rmno << " is Vacant or N/A!";
}

void searchbyname(guest g[50], int n) {
    system("cls");
    int found = 0;
    char nm[20];

    cout << "Enter the Name to be Searched: ";
    cin >> nm;

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].nm, nm) == 0) {
            found++;
            cout << endl
                 << endl;
            cout << "o-------------------------------------------------------------" << endl;
            cout << "o	   Name: " << g[i].nm << endl;
            cout << "o       Country of Residence: " << g[i].cntry << endl;
            cout << "o       Room Number: " << g[i].rmno << endl;
            cout << "o       Room Type: " << g[i].rmtyp << endl;
            cout << "o-------------------------------------------------------------" << endl;
            break;
        }
    if (found == 0)
        cout << "No one with this Name (" << nm << ") lives here!";
}

void searchbycountry(guest g[50], int n) {
    system("cls");
    int found = 0;
    char cntry[20];

    cout << "Enter the Country to be Searched: ";
    cin >> cntry;

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].cntry, cntry) == 0) {
            found++;
            cout << endl
                 << endl;
            cout << "o-------------------------------------------------------------" << endl;
            cout << "o	   Name: " << g[i].nm << endl;
            cout << "o       Country of Residence: " << g[i].cntry << endl;
            cout << "o       Room Number: " << g[i].rmno << endl;
            cout << "o       Room Type: " << g[i].rmtyp << endl;
            cout << "o-------------------------------------------------------------" << endl;
        }
    if (found == 0)
        cout << "Noone from " << cntry << " lives here!";
}

void searchbyroomtype(guest g[50], int n) {
    system("cls");
    int found = 0;
    char rmtyp[20];

    cout << "Enter the Room Type to be Searched: ";
    cin >> rmtyp;

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].rmtyp, rmtyp) == 0) {
            found++;
            cout << endl
                 << endl;
            cout << "o-------------------------------------------------------------" << endl;
            cout << "o	   Name: " << g[i].nm << endl;
            cout << "o       Country of Residence: " << g[i].cntry << endl;
            cout << "o       Room Number: " << g[i].rmno << endl;
            cout << "o       Room Type: " << g[i].rmtyp << endl;
            cout << "o-------------------------------------------------------------" << endl;
        }
    if (found == 0)
        cout << "No one lives in " << rmtyp << " Rooms!";
}

void sorting() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|       --SORTING ROOMS--       |" << endl;
        cout << "|                               |" << endl;
        cout << "|   1. BY NAME                  |" << endl;
        cout << "|   2. BY COUNTRY OF RESIDENCE  |" << endl;
        cout << "|   3. BY ROOM NUMBER           |" << endl;
        cout << "|                               |" << endl;
        cout << "|   9. PREVIOUS MENU            |" << endl;
        cout << "|   0. EXIT HOTEL               |" << endl;
        cout << "|                               |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            sortbyname(g, n);
            break;
        case 2:
            sortbycountry(g, n);
            break;
        case 3:
            sortbyroomno(g, n);
            break;
        case 9:
            HTLmenu();
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            sorting();
        }
        }
    } while (response <= 9);
}

void sortbyname(guest g[50], int n) {
    system("cls");
    char temp[30];
    int temp1, temp2;

    cout << "o-------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmpi(g[i].nm, g[j].nm) > 0) {
                strcpy(temp, g[i].nm);
                strcpy(g[i].nm, g[j].nm);
                strcpy(g[j].nm, temp);
                strcpy(temp, g[i].cntry);
                strcpy(g[i].cntry, g[j].cntry);
                strcpy(g[j].cntry, temp);
                strcpy(temp, g[i].rmtyp);
                strcpy(g[i].rmtyp, g[j].rmtyp);
                strcpy(g[j].rmtyp, temp);
                strcpy(temp, g[i].Bills);
                strcpy(g[i].Bills, g[j].Bills);
                strcpy(g[j].Bills, temp);
                temp1 = g[i].rmno;
                g[i].rmno = g[j].rmno;
                g[j].rmno = temp1;
                temp2 = g[i].eWllt;
                g[i].eWllt = g[j].eWllt;
                g[j].eWllt = temp2;
            }

    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << g[i].nm << endl;
    cout << "o-------------------------------------------------------------" << endl;
    getch();
}

void sortbycountry(guest g[50], int n) {
    system("cls");
    char temp[30];
    int temp1, temp2;

    cout << "o-------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmpi(g[i].cntry, g[j].cntry) > 0) {
                strcpy(temp, g[i].nm);
                strcpy(g[i].nm, g[j].nm);
                strcpy(g[j].nm, temp);
                strcpy(temp, g[i].cntry);
                strcpy(g[i].cntry, g[j].cntry);
                strcpy(g[j].cntry, temp);
                strcpy(temp, g[i].rmtyp);
                strcpy(g[i].rmtyp, g[j].rmtyp);
                strcpy(g[j].rmtyp, temp);
                strcpy(temp, g[i].Bills);
                strcpy(g[i].Bills, g[j].Bills);
                strcpy(g[j].Bills, temp);
                temp1 = g[i].rmno;
                g[i].rmno = g[j].rmno;
                g[j].rmno = temp1;
                temp2 = g[i].eWllt;
                g[i].eWllt = g[j].eWllt;
                g[j].eWllt = temp2;
            }

    for (int i = 0; i < n; i++)
        cout << g[i].cntry << ": " << g[i].nm << endl;
    cout << "o-------------------------------------------------------------" << endl;
    getch();
}

void sortbyroomno(guest g[50], int n) {
    system("cls");
    char temp[30];
    int temp1, temp2;

    cout << "o-------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (g[i].rmno < g[j].rmno) {
                strcpy(temp, g[i].nm);
                strcpy(g[i].nm, g[j].nm);
                strcpy(g[j].nm, temp);
                strcpy(temp, g[i].cntry);
                strcpy(g[i].cntry, g[j].cntry);
                strcpy(g[j].cntry, temp);
                strcpy(temp, g[i].rmtyp);
                strcpy(g[i].rmtyp, g[j].rmtyp);
                strcpy(g[j].rmtyp, temp);
                strcpy(temp, g[i].Bills);
                strcpy(g[i].Bills, g[j].Bills);
                strcpy(g[j].Bills, temp);
                temp1 = g[i].rmno;
                g[i].rmno = g[j].rmno;
                g[j].rmno = temp1;
                temp2 = g[i].eWllt;
                g[i].eWllt = g[j].eWllt;
                g[j].eWllt = temp2;
            }

    for (int i = n; i > 0; i--)
        cout << g[i].rmno << ": " << g[i].nm << endl;
    cout << "o-------------------------------------------------------------" << endl;
    getch();
}

void counting() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|       --COUNTING ROOMS--      |" << endl;
        cout << "|                               |" << endl;
        cout << "|   1. BY COUNTRY OF RESIDENCE  |" << endl;
        cout << "|   2. BY ROOM TYPE             |" << endl;
        cout << "|                               |" << endl;
        cout << "|   9. PREVIOUS MENU            |" << endl;
        cout << "|   0. EXIT HOTEL              |" << endl;
        cout << "|                               |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            countbycountry(g, n);
            break;
        case 2:
            countbyroomtype(g, n);
            break;
        case 9:
            HTLmenu();
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            counting();
        }
        }
    } while (response <= 9);
}

void countbycountry(guest g[50], int n) {
    system("cls");
    int count = 0;
    char cntry[40];

    cout << "\nEnter the Country of Residence to be Counted: " << endl;
    cin >> cntry;

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].cntry, cntry) == 0)
            count++;
    cout << cntry << ": " << count << endl;
}

void countbyroomtype(guest g[50], int n) {
    system("cls");
    int count = 0;
    char rmtyp[40];

    cout << "\nEnter the Room Type to be Counted (Single, Double, Queen, King, Deluxe or Master): " << endl;
    cin >> rmtyp;

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].rmtyp, rmtyp) == 0)
            count++;
    cout << rmtyp << ": " << count << endl;
}

void Finance() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|      --FINANCE--       |" << endl;
        cout << "|                        |" << endl;
        cout << "|   1. PAYMENT OF BILLS  |" << endl;
        cout << "|   2. REPORT            |" << endl;
        cout << "|                        |" << endl;
        cout << "|   9. PREVIOUS MENU     |" << endl;
        cout << "|   0. EXIT PORTAL       |" << endl;
        cout << "|                        |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            Bills(g, n);
            break;
        case 2:
            report(g, n);
            break;
        case 9:
            HTLmenu();
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            Finance();
        }
        }
    } while (response <= 9);
}

void Bills(guest g[50], int n) {
    char name[10], response[3];
    int amt, days, net;
    system("cls");

    cout << "\nEnter the Name: ";
    cin >> name;

    for (int i = 0; i < n; i++) {
        if (strcmpi(g[i].nm, name) == 0) {
            if (strcmpi(g[i].Bills, "YES") == 0) {
                cout << "You have already paid your Bills! Enjoy your Stay!";
                getch();
                HTLmenu();
            }

            if (strcmpi(g[i].Bills, "NO") == 0) {
                cout << "\nEnter the Number of Days you are Planning to Stay Here: ";
                cin >> days;
                if (strcmpi(g[i].rmtyp, "Single") == 0)
                    net = 100 * days;
                else if (strcmpi(g[i].rmtyp, "Double") == 0)
                    net = 200 * days;
                else if (strcmpi(g[i].rmtyp, "Queen") == 0)
                    net = 400 * days;
                else if (strcmpi(g[i].rmtyp, "King") == 0)
                    net = 500 * days;
                else if (strcmpi(g[i].rmtyp, "Deluxe") == 0)
                    net = 750 * days;
                else if (strcmpi(g[i].rmtyp, "Master") == 0)
                    net = 1000 * days;

                cout << endl
                     << endl;
                cout << "             #####################################################################" << endl;
                cout << "                                                                              " << endl;
                cout << "             	                           -!PAYSLIP!-                         " << endl;
                cout << "                                                                              " << endl;
                cout << "                  AMOUNT TO BE PAID: $" << net << "                                    " << endl;
                cout << "                                                                              " << endl;
                cout << "                  eWALLET BALANCE: $" << g[i].eWllt << "                               " << endl;
                cout << "                  eWALLET BALANCE AFTER THE PAYMENT: $" << g[i].eWllt - net << "         " << endl;
                cout << "                                                                              " << endl;
                cout << "             #####################################################################" << endl
                     << endl
                     << endl;
                cout << "\nDo You Wish to Pay the Bill? (YES/NO): ";
                cin >> response;

                if (strcmpi(response, "YES") == 0) {
                    g[i].eWllt -= net;
                    strcpy(g[i].Bills, "YES");
                    cout << "SUCCESSFULLY PAID";
                    getch();
                } else
                    Finance();
            }
        }
    }
}

void report(guest g[50], int n) {
    system("cls");
    int sing = 0, dbl = 0, quen = 0, kng = 0, delx = 0, mstr = 0;

    for (int i = 0; i < n; i++) {
        if (strcmpi(g[i].rmtyp, "SINGLE") == 0)
            sing++;
        if (strcmpi(g[i].rmtyp, "DOUBLE") == 0)
            dbl++;
        if (strcmpi(g[i].rmtyp, "QUEEN") == 0)
            quen++;
        if (strcmpi(g[i].rmtyp, "KING") == 0)
            kng++;
        if (strcmpi(g[i].rmtyp, "DELUXE") == 0)
            delx++;
        if (strcmpi(g[i].rmtyp, "MASTER") == 0)
            mstr++;
    }
    system("cls");

    cout << "#################################################################" << endl
         << endl;
    cout << "   ROOM TYPE      NET COST                                     " << endl
         << endl;
    cout << "   " << sing << " SINGLE   :    $" << 100 * sing << endl;
    cout << "   " << dbl << " DOUBLE   :    $" << 200 * dbl << endl;
    cout << "   " << quen << " QUEEN    :    $" << 400 * quen << endl;
    cout << "   " << kng << " KING     :    $" << 500 * kng << endl;
    cout << "   " << delx << " DELUXE   :    $" << 750 * delx << endl;
    cout << "   " << mstr << " MASTER   :    $" << 1000 * mstr << endl
         << endl
         << endl;
    cout << "   TOTAL           $" << (100 * sing) + (200 * dbl) + (400 * quen) + (500 * kng) + (750 * delx) + (1000 * mstr) << endl;
    cout << "#################################################################" << endl
         << endl;
    cout << "#################################################################" << endl
         << endl;
    cout << "   MAINTENANCE COSTS  :  $1200                                      " << endl;
    cout << "   ELECTRICITY BILL   :  $550                                       " << endl;
    cout << "   WATER BILL         :  $350                                       " << endl;
    cout << "   RENT               :  $1100                                      " << endl
         << endl;
    cout << "   TOTAL              :  $3200                                      " << endl;
    cout << "#################################################################" << endl
         << endl
         << endl
         << endl;

    if ((((100 * sing) + (200 * dbl) + (400 * quen) + (500 * kng) + (750 * delx) + (1000 * mstr)) - 3200) >= 0)
        cout << "             PROFIT of " << ((100 * sing) + (200 * dbl) + (400 * quen) + (500 * kng) + (750 * delx) + (1000 * mstr)) - 3200 << "!" << endl;
    else
        cout << "             LOSS of " << 3200 - ((100 * sing) + (200 * dbl) + (400 * quen) + (500 * kng) + (750 * delx) + (1000 * mstr)) << "!" << endl;
    getch();
}

//PEPPERMILL Restaurant
void RSTRNTmenu() {
    system("cls");
    int response;

    do {
        cout << endl
             << endl;
        cout << "|      ---PEPPERMILL---     |" << endl;
        cout << "|                           |" << endl;
        cout << "|     1. MENU               |" << endl;
        cout << "|     2. ORDER FOOD         |" << endl;
        cout << "|                           |" << endl;
        cout << "|     0. EXIT RESTAURANT    |" << endl;
        cout << "|                           |" << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> response;

        switch (response) {
        case 1:
            foodmenu();
            break;
        case 2:
            orderfood(g, n);
            break;
        case 0:
            menu();
            break;
        default: {
            cout << "\nInvalid Choice! \nEnter any key to continue...";
            getch();
            RSTRNTmenu();
        }
        }
    } while (response <= 2);
}

void foodmenu() {
    system("cls");

    strcpy(f[0].nm, "Homestyle Tomato(with Cream)");
    f[0].price = 6;
    f[0].code = 1;
    strcpy(f[1].nm, "Classic Hot n' Sour");
    f[1].price = 7;
    f[1].code = 2;
    strcpy(f[2].nm, "Veg. Corn Toast");
    f[2].price = 5;
    f[2].code = 3;
    strcpy(f[3].nm, "PEPPERMILL Chilli Potato");
    f[3].price = 7;
    f[3].code = 4;
    strcpy(f[4].nm, "Spring Rolls");
    f[4].price = 5;
    f[4].code = 5;
    strcpy(f[5].nm, "Paneer Tikka");
    f[5].price = 5;
    f[5].code = 6;
    strcpy(f[6].nm, "Chilli Cheese Fries");
    f[6].price = 3;
    f[6].code = 7;
    strcpy(f[7].nm, "Samosa (2 pcs.)");
    f[7].price = 3;
    f[7].code = 8;
    strcpy(f[8].nm, "Double Cheese Margherita");
    f[8].price = 15;
    f[8].code = 9;
    strcpy(f[9].nm, "Paneer 9treme");
    f[9].price = 13;
    f[9].code = 10;
    strcpy(f[10].nm, "PEPPERMILL Mini-Pizza");
    f[10].price = 7;
    f[10].code = 11;
    strcpy(f[11].nm, "Choco Lava Cake");
    f[11].price = 3;
    f[11].code = 12;
    strcpy(f[12].nm, "PEPPERMILL Biscuit Pudding");
    f[12].price = 13;
    f[12].code = 13;
    strcpy(f[13].nm, "Assorted Smoothies");
    f[13].price = 5;
    f[13].code = 14;

    cout << " ******************************************************************" << endl;
    cout << " *                                                                *" << endl;
    cout << " *                              MENU                              *" << endl;
    cout << " *                                                                *" << endl;
    cout << " *     SOUPS                                                      *" << endl;
    cout << " *     Homestyle Tomato(with Cream)                $6       1     *" << endl;
    cout << " *     Classic Hot n' Sour                         $7       2     *" << endl;
    cout << " *                                                                *" << endl;
    cout << " *     STARTERS                                                   *" << endl;
    cout << " *     Veg. Corn Toast                             $5       3     *" << endl;
    cout << " *     PEPPERMILL Chilli Potato                    $7       4     *" << endl;
    cout << " *     Spring Rolls                                $5       5     *" << endl;
    cout << " *     Paneer Tikka                                $5       6     *" << endl;
    cout << " *     Chilli Cheese Fries                         $3       7     *" << endl;
    cout << " *     Samosa (2 pcs.)                             $3       8     *" << endl;
    cout << " *                                                                *" << endl;
    cout << " *     PIZZAS                                                     *" << endl;
    cout << " *     Double Cheese Margherita                    $15      9     *" << endl;
    cout << " *     Paneer Xtreme                               $13      10    *" << endl;
    cout << " *     PEPPERMILL Mini-Pizza                       $7       11    *" << endl;
    cout << " *                                                                *" << endl;
    cout << " *     DESSERTS/DRINKS                                            *" << endl;
    cout << " *     Choco Lava Cake                             $3       12    *" << endl;
    cout << " *     PEPPERMILL Biscuit Pudding                  $13      13    *" << endl;
    cout << " *     Assorted Smoothies                          $5       14    *" << endl;
    cout << " *                                                                *" << endl;
    cout << " *              EAT TO YOUR HEART'S FULLEST                       *" << endl;
    cout << " *                                                                *" << endl;
    cout << " ******************************************************************" << endl;

    getch();
}

void orderfood(guest g[50], int n) {

    system("cls");
    int NoOfItems, code[15], bill = 0;
    char name[50], response[3];

    cout << endl
         << "Enter your Name: ";
    cin >> name;

    foodmenu();

    cout << endl
         << "Hi " << name << "! Enter the number of Food Items you would like to Order: ";
    cin >> NoOfItems;

    cout << endl
         << endl
         << endl
         << "o-------------------------------------------------------------" << endl;
    for (int i = 0; i < NoOfItems; i++) {
        cout << "o Food-CODE: ";
        cin >> code[i];
        for (int j = 0; j < 15; j++)
            if (code[i] == f[j].code) {
                cout << "     " << i + 1 << ". " << f[j].nm << "($" << f[j].price << ")" << endl;
                bill += f[j].price;
            }
    }
    cout << "o-------------------------------------------------------------" << endl
         << endl
         << endl;

    cout << "ORDER SUCCESSFULLY TAKEN!" << endl
         << endl
         << endl;

    getch();

    for (int i = 0; i < n; i++)
        if (strcmpi(g[i].nm, name) == 0) {
            cout << endl
                 << endl;
            cout << "             #####################################################################" << endl;
            cout << "                                                                              " << endl;
            cout << "             	                           -!PAYSLIP!-                         " << endl;
            cout << "                                                                              " << endl;
            cout << "                  AMOUNT TO BE PAID: $" << bill << "                                    " << endl;
            cout << "                                                                              " << endl;
            cout << "                  eWALLET BALANCE: $" << g[i].eWllt << "                               " << endl;
            cout << "                  eWALLET BALANCE AFTER THE PAYMENT: $" << g[i].eWllt - bill << "         " << endl;
            cout << "                                                                              " << endl;
            cout << "             #####################################################################" << endl
                 << endl
                 << endl;
            cout << "\nDo You Wish to Pay the Bill? (YES): ";
            cin >> response;

            if (strcmpi(response, "YES") == 0) {
                g[i].eWllt -= bill;
                cout << "SUCCESSFULLY PAID";
                getch();
            }
            system("cls");
        }
}

void exit() {
    system("cls");
    cout << "Thank You for Visiting us at THE PARADISE Resort!";
    cout << "\nWe hope you enjoyed your Stay here!" << endl;
    exit(0);
}