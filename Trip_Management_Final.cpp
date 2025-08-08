#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <random>
#include <iomanip>

using namespace std;
int choiceOfTravel;

class Destination
{

public:
    // Function to get the state name from the user
    string stateName;
    void getStateFromUser()
    {
        cout << "Select the state you want to visit:\n";
        cout << "1. Tamil Nadu\n";
        cout << "2. Kerala\n";
        cout << "3. Rajasthan\n";
        cout << "4. Jammu and Kashmir\n";
        cout << "5. Uttar Pradesh\n";
        cout << "6. Himachal Pradesh\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            stateName = "Tamil Nadu";
            break;
        case 2:
            stateName = "Kerala";
            break;
        case 3:
            stateName = "Rajasthan";
            break;
        case 4:
            stateName = "Jammu and Kashmir";
            break;
        case 5:
            stateName = "Uttar Pradesh";
            break;
        case 6:
            stateName = "Himachal Pradesh";
            break;
        default:
            cout << "Invalid choice!\n";
            getStateFromUser(); // Ask again if the choice is invalid
        }
    }

    string state()
    {
        return stateName;
    }

    void setStateName(const string &state)
    {
        stateName = state;
    }

    // Function to display the state name
    void displayStateName()
    {
        cout << "State: " << stateName << endl;
    }
};

string hotelName = "NIL";
double ratePerDay = 0;
int numDays = 0;
double HotelCost = 0;
class HotelBooking : public Destination
{

public:
    // Functions to display the hotel options for each state
    void TamilNadu_Hotel_details()
    {
        // Display the hotel options for Tamil Nadu
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN TAMIL NADU         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Taj Coromandel" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.5,000" << endl;
        cout << "| 2. ITC Grand Chola" << endl;
        cout << "|    Rating: 4.6/5" << endl;
        cout << "|    Rate per day: Rs.6,000" << endl;
        cout << "| 3. Leela Palace" << endl;
        cout << "|    Rating: 4.7/5" << endl;
        cout << "|    Rate per day: Rs.7,000" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    void Kerala_Hotel_details()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN KERALA         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Taj Malabar Resort & Spa" << endl;
        cout << "|    Rating: 4.6/5" << endl;
        cout << "|    Rate per day: Rs.6,500" << endl;
        cout << "| 2. Vivanta by Taj" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.5,500" << endl;
        cout << "| 3. The Leela" << endl;
        cout << "|    Rating: 4.7/5" << endl;
        cout << "|    Rate per day: Rs.8,750" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    void Rajathan_Hotel_details()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN RAJASTHAN         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Rambagh Palace" << endl;
        cout << "|    Rating: 4.8/5" << endl;
        cout << "|    Rate per day: Rs.8,000" << endl;
        cout << "| 2. Umaid Bhawan Palace" << endl;
        cout << "|    Rating: 4.9/5" << endl;
        cout << "|    Rate per day: Rs.10,000" << endl;
        cout << "| 3. The Oberoi Udaivilas" << endl;
        cout << "|    Rating: 4.9/5" << endl;
        cout << "|    Rate per day: Rs.9,000" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    void Jammu_and_Kashmir_Hotel_details()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN JAMMU & KASHMIR         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. The Lalit Grand Palace" << endl;
        cout << "|    Rating: 4.6/5" << endl;
        cout << "|    Rate per day: Rs.8,100" << endl;
        cout << "| 2. Vivanta Dal View" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.7,500" << endl;
        cout << "| 3. The Khyber Himalayan Resort & Spa" << endl;
        cout << "|    Rating: 4.7/5" << endl;
        cout << "|    Rate per day: Rs.9,500" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    void Uttar_Pradesh_Hotel_details()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN UTTAR PRADESH         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Taj Mahal Palace" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.7,200" << endl;
        cout << "| 2. ITC Mughal" << endl;
        cout << "|    Rating: 4.6/5" << endl;
        cout << "|    Rate per day: Rs.6,000" << endl;
        cout << "| 3. The Oberoi Amarvilas" << endl;
        cout << "|    Rating: 4.9/5" << endl;
        cout << "|    Rate per day: Rs.9,500" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    void Himachal_Pradesh_Hotel_details()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|         HOTELS IN HIMACHAL PRADESH         |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Wildflower Hall" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.9,200" << endl;
        cout << "| 2. The Oberoi Cecil" << endl;
        cout << "|    Rating: 4.6/5" << endl;
        cout << "|    Rate per day: Rs.8,000" << endl;
        cout << "| 3. Hotel Willow Banks" << endl;
        cout << "|    Rating: 4.5/5" << endl;
        cout << "|    Rate per day: Rs.5,500" << endl;
        cout << "+-----------------------------------------+" << endl;
    }

    // Check the selected state and store the corresponding hotel name and rate per day
    void Choose_Hotel(const string &stateName)
    {
        if (stateName == "Tamil Nadu")
        {
            TamilNadu_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "Taj Coromandel";
                    ratePerDay = 5000;
                    key = false;
                    break;
                case 2:
                    hotelName = "ITC Grand Chola";
                    ratePerDay = 6000;
                    key = false;
                    break;
                case 3:
                    hotelName = "Leela Palace";
                    ratePerDay = 7000;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    TamilNadu_Hotel_details();
                    break;
                }
            }
        }
        else if (stateName == "Kerala")
        {
            Kerala_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "Taj Malabar Resort & Spa";
                    ratePerDay = 6500;
                    key = false;
                    break;
                case 2:
                    hotelName = "Vivanta by Taj";
                    ratePerDay = 5500;
                    key = false;
                    break;
                case 3:
                    hotelName = "The Leela";
                    ratePerDay = 8750;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    Kerala_Hotel_details();
                    break;
                }
            }
        }
        else if (stateName == "Rajasthan")
        {
            Rajathan_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "Rambagh Palace";
                    ratePerDay = 8000;
                    key = false;
                    break;
                case 2:
                    hotelName = "Umaid Bhawan Palace";
                    ratePerDay = 10000;
                    key = false;
                    break;
                case 3:
                    hotelName = "The Oberoi Udaivilas";
                    ratePerDay = 9000;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    Rajathan_Hotel_details();
                    break;
                }
            }
        }
        else if (stateName == "Jammu and Kashmir")
        {
            Jammu_and_Kashmir_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "The Lalit Grand Palace";
                    ratePerDay = 8100;
                    key = false;
                    break;
                case 2:
                    hotelName = "Vivanta Dal View";
                    ratePerDay = 7500;
                    key = false;
                    break;
                case 3:
                    hotelName = "The Khyber Himalayan Resort & Spa";
                    ratePerDay = 9500;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    Jammu_and_Kashmir_Hotel_details();
                    break;
                }
            }
        }
        else if (stateName == "Uttar Pradesh")
        {
            Uttar_Pradesh_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "Taj Mahal Palace";
                    ratePerDay = 7200;
                    key = false;
                    break;
                case 2:
                    hotelName = "ITC Mughal";
                    ratePerDay = 6000;
                    key = false;
                    break;
                case 3:
                    hotelName = "The Oberoi Amarvilas";
                    ratePerDay = 9500;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    Uttar_Pradesh_Hotel_details();
                    break;
                }
            }
        }
        else if (stateName == "Himachal Pradesh")
        {
            Himachal_Pradesh_Hotel_details();
            bool key = true;
            while (key)
            {
                int choice;
                cout << "Enter your choice (1-3): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    hotelName = "Wildflower Hall";
                    ratePerDay = 9200;
                    key = false;
                    break;
                case 2:
                    hotelName = "The Oberoi Cecil";
                    ratePerDay = 8000;
                    key = false;
                    break;
                case 3:
                    hotelName = "Hotel Willow Bankse";
                    ratePerDay = 5500;
                    key = false;
                    break;
                default:
                    cout << "** INVALID CHOICE **" << endl;
                    cout << "** CHOOSE AGAIN **" << endl;
                    Himachal_Pradesh_Hotel_details();
                    break;
                }
            }
        }
        cout << "How many days do you want to stay? ";
        cin >> numDays;
        cout << " "<<endl;
        bool flag = true;
        while (flag)
        {
            if (numDays > 0)
            {
                flag = false;
            }
            else
            {
                cout << "** INVALID NO OF DAYS **" << endl;
                cout << "** ENTER AGAIN **" << endl;
                cout << "How many days do you want to stay? ( Enter positve value ) ";
                cin >> numDays;
            }
        }
        HotelCost = ratePerDay * numDays; // Calculate the total cost of the hotel stay
    }

    string Hotel_name() // Functions to return the selected hotel name
    {
        return hotelName;
    }

    double Hotel_cost() // Functions to return the selected hotel cost
    {
        return HotelCost;
    }
    void displayHotelInfo()
    {

        // Display the selected hotel information
        cout << "+-----------------------------------------+" << endl;
        cout << "|           HOTEL INFORMATION           |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| Hotel              : " << hotelName << endl;
        cout << "| Rate per day       : Rs. " << ratePerDay << endl;
        cout << "| Number of days     : " << numDays << endl;
        cout << "| Total cost         : Rs. " << HotelCost << endl;
        cout << "+-----------------------------------------+" << endl;
    }
    void displayHotelInfoInvoice()
    {

        // Display the selected hotel information
        //cout<< "                                      |                                          " << endl;
       // cout<< "                                     |           HOTEL INFORMATION           |" << endl;
        cout << "                                      |          Hotel          : " << hotelName <<"                                          "<< endl;
        cout << "                                      |          Rate per day   : Rs. " << ratePerDay <<"                                        " <<endl;
        cout<< "                                      |          Number of days : " << numDays <<"                                            " <<endl;
        cout << "                                      |          Total cost     : Rs. " << HotelCost <<"                                        " <<endl;
        
    }

    int CostOfHotels()
    {
        return HotelCost;
    }
};

string modeOfTravel = "NIL";
string chosenTransport = "NIL";
string flightTransport = "NIL";
int cost = 0;
class Travel : public Destination
{

public:
    void chooseModeOfTravel(string stateName)
    {
        cout << "Choose mode of travel:\n";
        cout << "1. Railway\n";
        cout << "2. Flight\n";
        cout << "Enter your choice: ";
        int choiceOfTravel;
        cout << " "<<endl;
        cin >> choiceOfTravel;
        switch (choiceOfTravel)
        {
        case 1:
            modeOfTravel = "Railway";
            break;
        case 2:
            modeOfTravel = "Flight";
            break;
        default:
            cout << "Invalid choice!\n";
            chooseModeOfTravel(stateName); // Ask again if the choice is invalid
        }
    }

    void displayTravelOptions()
    {
        if (modeOfTravel == "Railway")
        {
            displayRailwayOptions();
        }
        else if (modeOfTravel == "Flight")
        {
            displayFlightOptions();
        }
    }

    void displayRailwayOptions()
    {

        cout<< " "<<endl;
        cout << "Choose a train:\n";
        if (stateName == "Tamil Nadu")
        {
            cout << "1. Tamil Nadu Express - Timing: 8:00 AM, Cost: Rs. 5000\n";
            cout << "2. Chennai Express - Timing: 10:00 AM, Cost: Rs. 7000\n";
            cout << "3. Nilgiri Express - Timing: 12:00 PM, Cost: Rs. 9000\n";
        }
        else if (stateName == "Kerala")
        {
            cout << "1. Kerala Express - Timing: 9:00 AM, Cost: Rs. 6000\n";
            cout << "2. Malabar Express - Timing: 11:00 AM, Cost: Rs. 8000\n";
            cout << "3. Alleppey Express - Timing: 1:00 PM, Cost: Rs. 10000\n";
        }
        else if (stateName == "Rajasthan")
        {
            cout << "1. Rajasthan Express - Timing: 8:30 AM, Cost: Rs. 7000\n";
            cout << "2. Jaipur Express - Timing: 10:30 AM, Cost: Rs. 9000\n";
            cout << "3. Jodhpur Express - Timing: 12:30 PM, Cost: Rs. 11000\n";
        }
        else if (stateName == "Jammu and Kashmir")
        {
            cout << "1. Jammu Rajdhani - Timing: 9:00 AM, Cost: Rs. 12000\n";
            cout << "2. Vaishno Devi Express - Timing: 11:00 AM, Cost: Rs. 14000\n";
            cout << "3. Himalayan Queen - Timing: 1:00 PM, Cost: Rs. 16000\n";
        }
        else if (stateName == "Uttar Pradesh")
        {
            cout << "1. Lucknow Mail - Timing: 8:30 AM, Cost: Rs. 8000\n";
            cout << "2. Gomti Express - Timing: 10:30 AM, Cost: Rs. 10000\n";
            cout << "3. Kashi Vishwanath Express - Timing: 12:30 PM, Cost: Rs. 12000\n";
        }
        else if (stateName == "Himachal Pradesh")
        {
            cout << "1. Himalayan Queen - Timing: 9:00 AM, Cost: Rs. 7000\n";
            cout << "2. Shivalik Deluxe Express - Timing: 11:00 AM, Cost: Rs. 9000\n";
            cout << "3. Kalka Shimla Express - Timing: 1:00 PM, Cost: Rs. 11000\n";
        }

        int choice;
        cout<<" "<<endl;
        cout << "Enter your choice: ";
        cout<<" "<<endl;
        cin >> choice;
        cout<<" "<<endl;
        // Set chosen transport and cost based on user's choice
        if (stateName == "Tamil Nadu")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Tamil Nadu Express";
                cost = 5000;
                break;
            case 2:
                chosenTransport = "Chennai Express";
                cost = 7000;
                break;
            case 3:
                chosenTransport = "Nilgiri Express";
                cost = 9000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
        else if (stateName == "Kerala")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Kerala Express";
                cost = 6000;
                break;
            case 2:
                chosenTransport = "Malabar Express";
                cost = 8000;
                break;
            case 3:
                chosenTransport = "Alleppey Express";
                cost = 10000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
        else if (stateName == "Rajasthan")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Rajasthan Express";
                cost = 7000;
                break;
            case 2:
                chosenTransport = "Jaipur Express";
                cost = 9000;
                break;
            case 3:
                chosenTransport = "Jodhpur Express";
                cost = 11000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
        else if (stateName == "Jammu and Kashmir")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Jammu Rajdhani";
                cost = 12000;
                break;
            case 2:
                chosenTransport = "Vaishno Devi Express";
                cost = 14000;
                break;
            case 3:
                chosenTransport = "Himalayan Queen";
                cost = 16000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
        else if (stateName == "Uttar Pradesh")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Lucknow Mail";
                cost = 8000;
                break;
            case 2:
                chosenTransport = "Gomti Express";
                cost = 10000;
                break;
            case 3:
                chosenTransport = "Kashi Vishwanath Express";
                cost = 12000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
        else if (stateName == "Himachal Pradesh")
        {
            switch (choice)
            {
            case 1:
                chosenTransport = "Himalayan Queen";
                cost = 7000;
                break;
            case 2:
                chosenTransport = "Shivalik Deluxe Express";
                cost = 9000;
                break;
            case 3:
                chosenTransport = "Kalka Shimla Express";
                cost = 11000;
                break;
            default:
                cout << "Invalid choice!\n";
                displayRailwayOptions(); // Ask again if the choice is invalid
            }
        }
    }

    void displayFlightOptions()
    {
        cout << "Choose a flight:\n";
        if (stateName == "Tamil Nadu")
        {
            cout << "1. Indigo - Timing: 9:00 AM, Cost: Rs. 20000\n";
            cout << "2. Air India - Timing: 11:00 AM, Cost: Rs. 25000\n";
            cout << "3. Spicejet - Timing: 1:00 PM, Cost: Rs. 30000\n";
        }
        else if (stateName == "Kerala")
        {
            cout << "1. Vistara - Timing: 9:30 AM, Cost: Rs. 22000\n";
            cout << "2. Air Asia - Timing: 11:30 AM, Cost: Rs. 27000\n";
            cout << "3. Akasa Airlines - Timing: 1:30 PM, Cost: Rs. 32000\n";
        }
        else if (stateName == "Rajasthan")
        {
            cout << "1. Indigo - Timing: 9:30 AM, Cost: Rs. 25000\n";
            cout << "2. Vistara - Timing: 11:30 AM, Cost: Rs. 30000\n";
            cout << "3. Akasa Airlines - Timing: 1:30 PM, Cost: Rs. 35000\n";
        }
        else if (stateName == "Jammu and Kashmir")
        {
            cout << "1. Air India - Timing: 10:30 AM, Cost: Rs. 30000\n";
            cout << "2. Air Asia - Timing: 12:30 PM, Cost: Rs. 35000\n";
            cout << "3. Spicejet - Timing: 2:30 PM, Cost: Rs. 40000\n";
        }
        else if (stateName == "Uttar Pradesh")
        {
            cout << "1. Indigo - Timing: 10:00 AM, Cost: Rs. 18000\n";
            cout << "2. Air India - Timing: 12:00 PM, Cost: Rs. 22000\n";
            cout << "3. Indigo - Timing: 2:00 PM, Cost: Rs. 15000\n";
        }
        else if (stateName == "Himachal Pradesh")
        {
            cout << "1. Air Asia - Timing: 10:30 AM, Cost: Rs. 25000\n";
            cout << "2. Akasa Airlines - Timing: 12:30 PM, Cost: Rs. 28000\n";
            cout << "3. Air India - Timing: 2:30 PM, Cost: Rs. 30000\n";
        }
        else
        {
            cout << "Invalid state!\n";
            // Handle invalid state
            return;
        }

        cout << "Enter your choice: ";
        cin >> choiceOfTravel;
        cout << " "<<endl;

        string trainTravel;
        // Set chosen transport and cost based on user's choice
        if (stateName == "Tamil Nadu")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 20000;
                flightTransport = "Indigo - Timing: 9:00 AM\n";
                break;
            case 2:
                cost = 25000;
                flightTransport = "Air India - Timing: 11:00 AM\n";
            case 3:
                cost = 30000;
                flightTransport = "Spicejet - Timing: 1:00 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
        else if (stateName == "Kerala")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 22000;
                flightTransport = "Vistara - Timing: 9:30 AM\n";
            case 2:
                cost = 27000;
                flightTransport = "Air Asia - Timing: 11:30 AM\n";
                break;
            case 3:
                cost = 32000;
                flightTransport = "Akasa Airlines - Timing: 1:30 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
        else if (stateName == "Rajasthan")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 25000;
                flightTransport = "Indigo - Timing: 9:30 AM\n";
                break;
            case 2:
                cost = 30000;
                flightTransport = "Vistara - Timing: 11:30 AM\n";
                break;
            case 3:
                cost = 35000;
                flightTransport = "Akasa Airlines - Timing: 1:30 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
        else if (stateName == "Jammu and Kashmir")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 30000;
                flightTransport = "Air India - Timing: 10:30 AM\n";
                break;
            case 2:
                cost = 35000;
                flightTransport = "Air Asia - Timing: 12:30 PM\n";
                break;
            case 3:
                cost = 40000;
                flightTransport = "Spicejet - Timing: 2:30 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
        else if (stateName == "Uttar Pradesh")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 18000;
                flightTransport = "Indigo - Timing: 10:00 AM\n";
            case 2:
                cost = 22000;
                flightTransport = "Air India - Timing: 12:00 PM\n";
                break;
            case 3:
                cost = 15000;
                flightTransport = "Indigo - Timing: 2:00 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
        else if (stateName == "Himachal Pradesh")
        {
            switch (choiceOfTravel)
            {
            case 1:
                cost = 25000;
                flightTransport = "Air Asia - Timing: 10:30 AM\n";
                break;
            case 2:
                cost = 28000;
                flightTransport = "Akasa Airlines - Timing: 12:30 PM\n";
            case 3:
                cost = 30000;
                flightTransport = "Air India - Timing: 2:30 PM\n";
                break;
            default:
                cout << "Invalid choice!\n";
                displayFlightOptions();
            }
        }
    }

    int bookTravel()
    {
        return cost;
    }

    string getMode()
    {
        return modeOfTravel;
    }

    string chosen_transport_train()
    {
        return chosenTransport;
    }

    string chosen_transport_flight()
    {
        return flightTransport;
    }

    string TransportName()
    {
        string mode = getMode();
        if (mode == "Railway")
        {
            return chosen_transport_train();
        }
        else if (mode == "Flight")
        {
            return chosen_transport_flight();
        }
        else
        {
            return "Unknown Mode of Travel";
        }
    }

    int costOfTravel()
    {
        return cost;
    }
};

int Splcost = 0;
int tcost_splpkg = 0;
class Special_packages : public Destination
{
private:
    // Total cost of special packages
    int choice;

public:
    // Function to display the menu for the special packages
    void display_special_packages()
    {
        cout<< " "<<endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "|       SPECIAL PACKAGES AVAILABLE       |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Rent Car/Bus (Rs. 150/hour or Rs. 1000/day)" << endl;
        cout << "| 2. Cultural Tour Guide (Rs. 300/day)   " << endl;
        cout << "| 3. Rental Services (Camera/Camping gear/Sports equipment)" << endl;
        cout << "| 4. Travel Insurance (lost/baggage/cancel event)" << endl;
        cout << "| 5. Exit Special Packages               " << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "Enter your choice: ";
        cout<< " "<<endl;
    }

    // Function to display the menu for the rental services
    void Rental_services_display()
    {
        cout << "+-----------------------------------------+" << endl;
        cout << "|            RENTAL SERVICES             |" << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "| 1. Camera (Rs. 550/day)                " << endl;
        cout << "| 2. Camping Gear (Rs. 800/day)          " << endl;
        cout << "| 3. Sports Equipment (Rs. 350/day)      " << endl;
        cout << "| 4. Exit Rental Services                " << endl;
        cout << "+-----------------------------------------+" << endl;
        cout << "Enter your choice: ";
        cout<< " "<<endl;
    }

    // Function to run the special packages menu and handle user choices
    double run_spl_packages()
    {
        bool exit = true;
        while (exit)
        {
            display_special_packages(); // Display the special packages menu
            cin >> choice;
            if (choice == 5)
            {
                exit = false;
                return tcost_splpkg; // Return the total cost of special packages
            }
            else if (choice == 1 || choice == 2 || choice == 4)
            {
                handleChoice(choice);                  // Handle the user's choice
                tcost_splpkg = tcost_splpkg + Splcost; // Update the total cost of special packages
                Splcost = 0;
            }
            else
            {
                handleChoice(choice);
            }
        }
        return tcost_splpkg;
    }

    // Function to handle the user's choice and calculate the cost
    void handleChoice(int choice)
    {
        switch (choice)
        {
        case 1: // Rent Car/Bus
        {
            cout << "Enter rental duration in hours: ";
            cout<< " "<<endl;
            int duration;
            cin >> duration;
            if (duration > 24)
            {
                int no_of_days = duration / 24;
                Splcost = no_of_days * 1000 + (duration - (no_of_days * 24)) * 150;
            }
            else
            {
                Splcost = duration * 150;
            }
            break;
        }

        case 2: // Cultural Tour Guide
        {
            cout << "Enter the number of days: ";
            cout<< " "<<endl;
            int days;
            cin >> days;
            Splcost = days * 300;
            break;
        }

        case 3: // Rental Services
        {
            int cho = 0;
            int day;
            int pr = 0;
            while (cho != 4)
            {
                Rental_services_display(); // Display the rental services menu
                cin >> cho;
                if (cho == 1) // Camera
                {
                    cout << "Enter no of days: ";
                    cin >> day;
                    pr = day * 550;
                    Splcost = pr;
                    tcost_splpkg = tcost_splpkg + Splcost; // Update the total cost of special packages
                }
                else if (cho == 2) // Camping Gear
                {
                    cout << "Enter no of days: ";
                    cin >> day;
                    pr = day * 800;
                    Splcost = pr;
                    tcost_splpkg = tcost_splpkg + Splcost; // Update the total cost of special packages
                }
                else if (cho == 3) // Sports Equipment
                {
                    cout << "Enter no of days: ";
                    cin >> day;
                    pr = day * 350;
                    Splcost = pr;
                    tcost_splpkg = tcost_splpkg + Splcost; // Update the total cost of special packages
                }
                else if (cho == 4) // Exit Rental Services
                {
                    break;
                }
                else
                {
                    cout << "** INVALID CHOICE **" << endl;
                }
            }
            break;
        }

        case 4: // Travel Insurance
        {
            cout << "** If any of our events and public transport fails you can get 1.5 times the money you spend on the trip **" << endl;
            Splcost = 500;
            break;
        }

        default:
        {
            cout << "** INVALID CHOICE **" << endl;
        }
        }
    }

    int total_special_package_cost() // for accessing total special package cost directly
    {
        return tcost_splpkg;
    }
};

class Review 
{
public:
    void getInput()
    {
        cout << "  "<<endl;
        cout << "___________________________REVIEW_____________________________"<<endl;
        cout << " "<<endl;
        cout << "Enter a rating (0 to 5) or a review text: ";
        cout<<" "<<endl;
        cin.ignore();
        getline(cin,input);
    }

    string processInput()
    {
        while (true)
        {
            
            if (isFloat(input))
            {
                float rating = stof(input);
                if (rating >= 0.0f && rating <= 5.0f)
                {
                    return review(rating);
                }
                else
                {
                    cout << "** Invalid rating **" << endl
                         << "Please enter a value between 0 and 5: ";
                    getline(cin, input);
                }
            }
            else
            {
                return review(input);
            }
        }
    }

private:
    string input;


    bool isFloat(const string &str)
    {
        bool hasDecimal = false;
        bool isValid = true;

        for (size_t i = 0; i < str.length(); i++)
        {
            if (str[i] == '.')
            {
                if (hasDecimal)
                {
                    isValid = false;
                    break;
                }
                hasDecimal = true;
            }
            else if (!isdigit(str[i]))
            {
                if (i == 0 && str[i] == '-')
                {
                    continue;
                }
                isValid = false;
                break;
            }
        }

        return isValid && (hasDecimal || !str.empty());
    }

    string review(float rating)
    {
        return "Your submitted Rating of our Service is " + to_string(static_cast<double>(rating)).substr(0, 4) + " out of 5.";
    }

    string review(const string &text)
    {
        return "The review you submitted is : " + text;
    }
};

class Sublocation : public Destination
{

public:
    vector<string> sublocations;
    vector<string> additionalActivities;
    vector<string> selectAdditionalActivities;

    string selected;
    // Constructor
    Sublocation()
    {
        getStateFromUser();   // Get the state name from the user
        defineSublocations(); // Define sublocations based on the chosen state
    }

    // Function to define sublocations for each state
    void defineSublocations()
    {
        if (stateName == "Tamil Nadu")
        {
            sublocations = {"Mahabalipuram", "Pondicherry", "Madurai", "Ooty", "Kanyakumari"};
        }
        else if (stateName == "Kerala")
        {
            sublocations = {"Munnar", "Alleppey", "Cochin", "Wayanad", "Varkala"};
        }
        else if (stateName == "Rajasthan")
        {
            sublocations = {"Jaipur", "Udaipur", "Jodhpur", "Jaisalmer", "Pushkar"};
        }
        else if (stateName == "Jammu and Kashmir")
        {
            sublocations = {"Srinagar", "Gulmarg", "Pahalgam", "Sonamarg"};
        }
        else if (stateName == "Uttar Pradesh")
        {
            sublocations = {"Agra", "Varanasi", "Lucknow", "Ayodhya", "Mathura-Vrindavan"};
        }
        else if (stateName == "Himachal Pradesh")
        {
            sublocations = {"Shimla", "Manali", "Dharamshala", "Kullu Valley", "Dalhousie"};
        }
    }

    void setAdditionalActivities(string selectedSublocation)
    {
        if (stateName == "Tamil Nadu")
        {
            if (selectedSublocation == "Mahabalipuram")
            {
                additionalActivities = {"Museums", "Cultural Performance", "Local Food Tasting", "Bird Watching", "Beach Resorts", "Water Sports", "Spa", "UNESCO Sites", "Local Shopping", "Music Concerts", "Bicycle Tours"};
            }
            else if (selectedSublocation == "Pondicherry")
            {
                additionalActivities = {"Water Sports", "Museum", "Cultural Performance", "Local Food Tasting", "Bird Watching", "Beach Resorts", "Spa", "UNESCO Sites", "Night Life", "Local Shopping", "Fishng", "Surfing", "Scuba Dive"};
            }
            else if (selectedSublocation == "Madurai")
            {
                additionalActivities = {"Mountain Trek", "Museum", "Cultural Performance", "Local Food Tasting", "Bird Watching", "Spa", "Historical Landmarks", "UNESCO Sites", "Local Shopping", "Local Festivals"};
            }
            else if (selectedSublocation == "Ooty")
            {
                additionalActivities = {"Mountain Trek", "Museum", "Local Food Tasting", "Safari", "Bird Watching", "Spa", "Historical Landmarks", "UNESCO Sites", "Local Shopping", "Cultural Festival", "Photography Tours", "Camping", "Butterfly Watching", "Golfing"};
            }
            else if (selectedSublocation == "Kanyakumari")
            {
                additionalActivities = {"Local Food Tasting", "Boat Safari", "Bird Watching", "National parks", "Beach Resorts", "Water Sports", "Spa", "Historical Landmarks", "Local Shopping", "Fishing", "Cultural Festival"};
            }
        }
        else if (stateName == "Kerala")
        {
            if (selectedSublocation == "Munnar")
            {
                additionalActivities = {"Zipline", "Mountain Trek", "Cultural Performance", "Safari", "Bird Watching", "Spa", "Wine Tasting", "Sunrise and Sunset Viewing", "Local Food Tasting", "Nightlife", "Bamboo Rafting", "Rock Climbing", "Elephant Safari"};
            }
            else if (selectedSublocation == "Alleppey")
            {
                additionalActivities = {"Museum", "Cultural Performances", "Safari", "Bird Watching", "Water Sports", "Spa", "Local Food Tasting", "Wine Tasting", "Historical Landmarks", "Local SHopping", "Fishing", "Local Festival", "Boat House Stay", "Cycling tours"};
            }
            else if (selectedSublocation == "Cochin")
            {
                additionalActivities = {"Museum", "Cultural Performance", "Local Food Tasting", "Safari", "Bird Watching", "Beach Resorts", "Water Sports", "Spa", "Wine Tasting", "Historical Landmarks", "Nightlife", "City Landmarks", "Surfing", "Music Concerts", "Jew Town Exploration", "Photography walks"};
            }
            else if (selectedSublocation == "Wayanad")
            {
                additionalActivities = {"Rafting", "zipline", "Mountain Trek", "Museum", "Local Food Tasting", "Safari", "Bird Watching", "National Parks", "Waterfall Exploration", "Spa", "Historical Landmarks", "Nightlife", "Fishing", "Cycling and Bike Tours", "Photography Tours", "Tribal Village Visits", "Pottery Making", "Golfing", "Stargazing"};
            }
            else if (selectedSublocation == "Varkala")
            {
                additionalActivities = {"Rafting", "Zipline", "Mountain Trek", "Museum", "Cultural Performances", "Local Food Tasting", "Safari", "Bird Watching", "Beach Resorts", "Water sports", "Spa", "Historical Landmarks", "Nightlife", "Fishing", "surfing", "Yoga and Meditation", "Photography Tours", "Dolphin Watching", "Cycling tours", "Cooking classes"};
            }
        }
        else if (stateName == "Rajasthan")
        {
            if (selectedSublocation == "Jaipur")
            {
                additionalActivities = {"Rafting", "Zipline", "Museum", "Cultural Performance", "Local Food Tasting", "Safari", "Bird Watching", "National Parks", "Water sports", "Spa", "Historical landmarks", "UNESCO Sites", "Local Shopping", "Nightlife", "Music Concert", "Camel Safari", "Puppet Show", "Street Food Tours"};
            }
            else if (selectedSublocation == "Udaipur")
            {
                additionalActivities = {"Rafting", "Zipine", "Mountain Trek", "Local Food Tasting", "Safari", "Bird watching", "Water Sports", "Spa", "Historical Landmarks", "Nightlife", "Local Shopping", "Cultural Festival", "Hot Air Balloon Rides", "Camel Safari"};
            }
            else if (selectedSublocation == "Jodhpur")
            {
                additionalActivities = {"Zipline", "Mountain Trek", "Museum", "Local Food Tasting", "Safari", "Water Sports", "Spa", "Historical Landmakrs", "UNESCO Sites", "Nightlife", "Local Shopping", "Fishing", "Cultural Festival", "Elephant Rides", "Antique Shopping", "Gaderns and Parks"};
            }
            else if (selectedSublocation == "Jaisalmer")
            {
                additionalActivities = {"Museum", "Local Food Tasting", "Bird Watching", "Spa", "Historical landmarks", "Local shopping", "Music Concerts", "Desert Camping", "Dune Bashing", "uad Biking"};
            }
            else if (selectedSublocation == "Pushkar")
            {
                additionalActivities = {"Museum", "Local Food Tasting", "Safari", "Bird Watching", "National Parks", "Spa", "Historical landmarks", "Local shopping", "Yoga and Meditation", "Ghoomar Dance Workshops", "Puppet Show"};
            }
        }
        else if (stateName == "Jammu and Kashmir")
        {
            if (selectedSublocation == "Srinagar")
            {
                additionalActivities = {"Rafting", "Zipline", "Mountain Trek", "Cultural Performance", "Safari", "Bird Watching", "National Parks", "Water Sports", "Spa", "Historical Landmarks", "Nightlife", "Local Shopping", "Music Concerts", "Gondola Rides", "Houseboat Stays", "Local Food tasting"};
            }
            else if (selectedSublocation == "Gulmarg")
            {
                additionalActivities = {"Zipline", "Mountain Trek", "Museum", "Local Food Tasting", "Safari", "Water Sports", "Spa", "Historical Landmarks", "Local Shopping", "Snowboarding", "Skiing", "Hot Air Balloon Rides", "Golfing"};
            }
            else if (selectedSublocation == "Pahalgam")
            {
                additionalActivities = {"Rafting", "Zipline", "Mountain Trek", "Museum", "Cultural Performance", "Local Food Tasting", "Safari", "Bird Watching", "National Parks", "Water Sports", "Spa", "Food Tasting", "Historical Landmarks", "Nightlife", "City Landmarks", "Local Shopping", "Fishing", "Camping", "Photography Tours"};
            }
            else if (selectedSublocation == "Sonamarg")
            {
                additionalActivities = {"Rafting", "Zipline", "Mountain Trek", "Cultural Performance", "Local Cuisine", "Safari", "Bird Watching", "National Parks", "Water Sports", "Spa", "Local Food Tasting", "Historical Landmarks", "City Landmarks", "Local Shopping", "Fishing", "Camping", "Photography Tours"};
            }
        }
        else if (stateName == "Uttar Pradesh")
        {
            if (selectedSublocation == "Agra")
            {
                additionalActivities = {"Museum", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "UNESCO Sites", "City Landmarks", "Local Shopping", "Photography Tours"};
            }
            else if (selectedSublocation == "Varanasi")
            {
                additionalActivities = {"Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Cultural Festival", "Music Concerts", "Local Festivals", "Boat Tours on the Ganges", "Ghats Exploration", "Sunrise and Sunset Viewing at the Ghats", "Sarnath Excursions", "Street Food Tours", "Yoga and Meditation Retreats", "Ayurvedic Spa and Wellness"};
            }
            else if (selectedSublocation == "Lucknow")
            {
                additionalActivities = {"Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Street Food Tours", "Heritage Walks", "Gardens and Parks Exploration", "Museum Visits", "Art and Craft Workshops", "Boat Rides on Gomti River"};
            }
            else if (selectedSublocation == "Ayodhya")
            {
                additionalActivities = {"Historical Landmarks", "City Landmarks", "Photography Tours"};
            }
            else if (selectedSublocation == "Mathura-Vrindavan")
            {
                additionalActivities = {"Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Cultural Performance", "Local Cuisine", "Boat Rides on Yamuna River", "Temple Visits", "Cow Shelter Visits", "Ayurvedic Wellness"};
            }
        }
        else if (stateName == "Himachal Pradesh")
        {
            if (selectedSublocation == "Shimla")
            {
                additionalActivities = {"Mountain Trek", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Spa", "Fishing", "Camping", "Music Concerts", "Snow Board"};
            }
            else if (selectedSublocation == "Manali")
            {
                additionalActivities = {"Rafting", "Mountain Trek", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Spa", "Fishing", "Camping", "Music Concerts", "Snow Board", "Paragliding", "Hot Springs", "Apple Orchards Visits", "River Crossing", "Skiing"};
            }
            else if (selectedSublocation == "Dharamshala")
            {
                additionalActivities = {"Mountain Trek", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Spa", "Music Concerts", "Tibetan Monastery Visits", "Museum Visits", "Yoga and Meditation Retreats", "Nature Walks", "Tea Garden Visits", "Cricket Stadium Tours", "Adventure Sports"};
            }
            else if (selectedSublocation == "Kullu Valley")
            {
                additionalActivities = {"Rafting", "Mountain Trek", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Spa", "Fishing", "Camping", "Music Concerts", "Snow Board", "Paragliding", "Hot Springs", "Apple Orchards Visits", "River Crossing", "Skiing", "Adventure Sports"};
            }
            else if (selectedSublocation == "Dalhousie")
            {
                additionalActivities = {"Mountain Trek", "Cultural Performance", "Local Cuisine", "Historical Landmarks", "City Landmarks", "Local Shopping", "Photography Tours", "Spa", "Fishing", "Camping", "Music Concerts"};
            }
        }
    }

    // Function to display sublocations according to the chosen state
    void displaySublocations()
    {
        cout << " "<<endl;
        cout << "Sublocations in " << stateName << ":\n";
        for (int i = 0; i < sublocations.size(); ++i)
        {
            cout << i + 1 << ". " << sublocations[i] << endl;
        }
        cout << "Enter the index of the sublocation you want to visit: ";
        int index;
        cout << " "<<endl;

        cin >> index;
        if (index >= 1 && index <= sublocations.size())
        {
            selected = sublocations[index - 1];
            setAdditionalActivities(selected);
        }
        else
        {
            cout << "Leaving Additional Activities as values entered is incorrect\n";
            selectAdditionalActivities = {"None"};
        }
    }

    void additionalActivityDisp()
    {
        cout << "--------------------------------------------------" << endl;
        cout << "|              Additional activities             |" << endl;
        cout << "--------------------------------------------------" << endl;
        for (int i = 0; i < additionalActivities.size(); ++i)
        {
            cout << "\t\t" << i + 1 << "." << additionalActivities[i] << endl;
        }
        cout << "--------------------------------------------------" << endl;
    }

    void checkAdditionalActivities()
    {
        int flag = 1;
        int addChoice;

        int checkChoice;

        additionalActivityDisp();
        cout << "Do you want to proceed with selecting the above additional experiences? " << endl;
        cout<<" "<<endl;
        cout << "Press 1. if you want to proceed with the additional experience." << endl;

        cout << "Press any number if not needed." << endl;
        cout<<" "<<endl;
        cout << "Enter Choice: ";
        cin >> addChoice;
        if (addChoice == 1 && addChoice > 0 && addChoice < 3)
        {
            additionalActivityDisp();
            cout << "\n\n--------------------------------------------------" << endl;
            cout << "|   !--- Proceed with selecting from the list ---!    |" << endl;
            cout << "------------------------------------------------------" << endl;

            while (flag)
            {
                int expChoice;
                cout << "Enter the choice of the additional experience you want to try:";
                cin >> expChoice;
                if (expChoice > 0 && expChoice <= (additionalActivities.size()))
                {
                    selectAdditionalActivities.push_back(additionalActivities[expChoice - 1]);
                }
                cout << "--------------------------------------------------" << endl;
                cout << "|      !--- Selected successfully ---!            |" << endl;
                cout << "--------------------------------------------------" << endl;

                cout << "--------------------------------------------------" << endl;
                cout << "|              Want to add more ?            |" << endl;
                cout << "--------------------------------------------------" << endl;
                cout << "-------------------" << endl;
                cout << "|      1. Yes     |" << endl;
                cout << "-------------------" << endl;
                cout << "|      2. No     |" << endl;
                cout << "-------------------" << endl;
                cout << "Enter yes/no: ";
                cin >> checkChoice;
                if (checkChoice == 2)
                {
                    if (checkChoice > 0 && checkChoice <= 2)
                    {
                        flag = 0;
                    }
                }
                else if ((checkChoice < 0 || checkChoice < 2) && checkChoice != 1)
                {
                    cout << "--------------------------------------------------" << endl;
                    cout << "|  !---Invalid Choice ! Please enter again ---!   |" << endl;
                    cout << "--------------------------------------------------" << endl;
                }

                else if (checkChoice == 1)
                {
                    additionalActivityDisp();
                }
            }
        }
        else if (addChoice < 0 || addChoice > 3)
        {
            cout << "--------------------------------------------------" << endl;
            cout << "|              Invalid Add Choice                 |" << endl;
            cout << "--------------------------------------------------" << endl;
        }
        else
        {
            selectAdditionalActivities = {"None"};
        }

        displayAdditionalActivities();
    }
    void displayAdditionalActivities()
    {
        cout << "----------------------------------------------------------------------" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "------------------------------" << endl;
        cout << "|            State           |" << endl;
        cout << "------------------------------" << endl;
        cout << "|"
             << "        " << stateName << "          |" << endl;
        cout << "------------------------------" << endl;
        cout << "------------------------------" << endl;
        cout << "|        SubLocation         |" << endl;
        cout << "------------------------------" << endl;
        cout << "------------------------------" << endl;
        cout << "|"
             << "        " << selected << "      |" << endl;
        cout << "------------------------------" << endl;

        cout << "--------------------------------------------------" << endl;
        cout << "|              Additional activities             |" << endl;
        cout << "--------------------------------------------------" << endl;

        for (int i = 0; i < selectAdditionalActivities.size(); ++i)
        {

            cout << "\t\t" << i + 1 << "." << selectAdditionalActivities[i] << endl;
        }
        cout << "|                                                |" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "----------------------------------------------------------------------" << endl;
    }

    void displayActivitiesInvoice()
    {
        if (selectAdditionalActivities.size() == 0)
        {
            cout << "                                      |         No Additional Activites Chosen" << endl;
        }
        else
        {
            for (int i = 0; i < selectAdditionalActivities.size(); ++i)
            {

                cout << "                                      |         " << i + 1 << "." << selectAdditionalActivities[i] << endl;
            }
        }
    }

    string selectSublocation()
    {

        if (!selected.empty())
        {
            return selected;
        }
        else
        {
            cout << "Invalid sublocation index.\n";
            return "";
        }
    }

    // Function to take input from the user for the chosen sublocation
    string chooseSublocation(int index)
    {
        if (index >= 0 && index < sublocations.size())
        {
            return sublocations[index];
        }
        else
        {
            return "";
        }
    }

    // Function to display the menu and handle user choices
    void displayMenu()
    {
        int choice;
        do
        {
            cout << "\nOptions for " << selected << " in " << stateName << ":" << endl;
            cout << "1. Hotel\n";
            cout << "2. Travel Options\n";
            cout << "3. Additional Experiences\n";
            cout << "4. Special Services\n";
            cout << "5. Choose Another Sublocation\n";
            cout << "6. Exit\n";
            cout << "Enter your choice (1-6): ";
            cin >> choice;
            cout << " "<<endl;

            switch (choice)
            {
            case 1:
                selectHotel(stateName);
                break;
            case 2:
                selectTravelOptions(stateName);
                break;
            case 3:
                selectAdditionalExperiences();
                break;
            case 4:
                selectSpecialServices();
                break;
            
            case 5:
                displaySublocations();
                break;
            case 6:
                givereview();
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
            }
        } while (choice != 6);
    }

    // Function to select hotel options
    void selectHotel(string stateName)
    {

        HotelBooking h;

        h.setStateName(stateName);
        h.Choose_Hotel(stateName); // Allow the user to choose a hotel
        h.displayHotelInfo();

        cout << "HOTEL OPTIONS SELECTED." << endl;
    }

    // Function to select travel options
    void selectTravelOptions(string stateName)
    {

        Travel travel;
        travel.setStateName(stateName);
        travel.chooseModeOfTravel(stateName);
        travel.displayTravelOptions();
        int cost = travel.bookTravel();

        cout << "TRAVEL OPTIONS SELECTED." << endl;
    }

    // Function to select additional experiences
    void selectAdditionalExperiences()
    {
        checkAdditionalActivities();
        cout << "ADDITIONAL EXPERIENCES SELECTED." << endl;
    }

    // Function to select special services
    void selectSpecialServices()
    {

        Special_packages spl;
        spl.run_spl_packages();
        // cout << spl.total_special_package_cost() << endl;
        cout << "SPECIAL SERVICES SELECTED." << endl;
        // cout<<spl.totalCostOFSpecailPackages();
    }


    

    void givereview()
    {
        Review review_obj;
        review_obj.getInput();
        string disp_review = review_obj.processInput();
        cout<<" "<<endl;
        cout << disp_review << endl;
        cout<<" "<<endl;
    }
};

class PlacesToVisit : public Destination
{
private:
    vector<string> selectedPlaces;

public:

    // Function to display places to visit for the selected sublocation
    void displayPlaces(string &sublocation)
    {
        cout << " "<<endl;
        cout << "Places to visit in " << sublocation << ":\n";
        int no_places = 0; //no of places to visit under each subllocation
        if (sublocation == "Mahabalipuram")
        {
            cout << "1. Shore Temple\n";
            cout << "2. Arjuna's Penance\n";
            cout << "3. Krishna's Butter Ball\n";
            cout << "4. Varaha Cave\n";
            cout << "5. Five Rathas\n";
            no_places = 5;
        }
        else if (sublocation == "Pondicherry")
        {
            cout << "1. Promenade Beach\n";
            cout << "2. Paradise Beach\n";
            cout << "3. French Colony\n";
            cout << "4. Botanical Gardens\n";
            cout << "5. Aurobindo Ashram\n";
            cout << "6. Serenity Beach\n";
            no_places = 6;
        }
        else if (sublocation == "Madurai")
        {
            cout << "1. Meenakshi Amman Temple\n";
            cout << "2. Thirumalai Nayakar Temple\n";
            cout << "3. Vaigai Dam\n";
            cout << "4. Alagar Temple\n";
            cout << "5. Gandhi Memorial Museum\n";
            no_places = 5;
        }
        else if (sublocation == "Ooty")
        {
            cout << "1. Botanical Garden\n";
            cout << "2. Ooty Lake\n";
            cout << "3. Tea Factory and Museum\n";
            cout << "4. Avalanche Lake and Forest\n";
            cout << "5. Pine Forest\n";
            cout << "6. Pykara Waterfall\n";
            cout << "7. Dolphin's Nose\n";
            no_places = 7;
        }
        else if (sublocation == "Kanyakumari")
        {
            cout << "1. Vivekananda Rock Memorial\n";
            cout << "2. Thiruvallur Statue\n";
            cout << "3. Kanyakumari Beaches\n";
            cout << "4. Suchindaram Thanumalayan Temple\n";
            cout << "5. Padmanabhapuram Palace\n";
            cout << "6. Mathur Thottipalam\n";
            no_places = 6;
        }
        else if (sublocation == "Munnar")
        {
            cout << "1. Eravikulam National Park\n";
            cout << "2. Tea Plantations\n";
            cout << "3. Top Station\n";
            cout << "4. Kundala Dam and Lake\n";
            cout << "5. Mattupetty Dam and Lake\n";
            cout << "6. Chithirapuram Viewpoint\n";
            no_places = 6;
        }
        else if (sublocation == "Alleppey")
        {
            cout << "1. Alleppey Beach\n";
            cout << "2. Alleppey Backwaters\n";
            cout << "3. Kuttanad Backwaters\n";
            cout << "4. Snakeboat Race (August)\n";
            cout << "5. Krishnapuram Palace\n";
            cout << "6. Ambalapuzha Sree Krishna Temple\n";
            cout << "7. St. Mary's Forane Church\n";
            no_places = 7;
        }

        else if (sublocation == "Cochin")
        {
            cout << "1. Fort Kochi\n";
            cout << "2. Marine Drive\n";
            cout << "3. Kerala Kathakali Center\n";
            no_places = 3;
        }
        else if (sublocation == "Wayanad")
        {
            cout << "1. Phantom Rock\n";
            cout << "2. Kuruva Island\n";
            cout << "3. Chembra Peak\n";
            cout << "4. Banasura Sagar Dam\n";
            cout << "5. Vellarimala Zipline and Zipcycling\n";
            cout << "6. Kurumbalakotta Viewpoint\n";
            cout << "7. Meenmutty Waterfalls\n";
            no_places = 7;
        }
        else if (sublocation == "Varkala")
        {
            cout << "1. Varkala Beach\n";
            cout << "2. Varkala Cliff\n";
            cout << "3. Ponnumthuruthu Island\n";
            cout << "4. Kappil Beach\n";
            cout << "5. Jatayu's Earth Center\n";
            cout << "6. Anjengo Fort\n";
            no_places = 6;
        }
        else if (sublocation == "Srinagar")
        {
            cout << "1. Dal Lake\n";
            cout << "2. Shalimar\n";
            cout << "3. Pari Mahal\n";
            cout << "4. Tulip Garden\n";
            cout << "5. Dachigam National Park\n";
            no_places = 5;
        }
        else if (sublocation == "Gulmarg")
        {
            cout << "1. Gulmarg Gondola\n";
            cout << "2. Apharwat Peak and Lake\n";
            cout << "3. Gulmarg Golf Course\n";
            cout << "4. Ningle Nallah\n";
            cout << "5. Gulmarg Biosphere Reserve\n";
            cout << "6. Strawberry Valley\n";
            no_places = 6;
        }
        else if (sublocation == "Pahalgam")
        {
            cout << "1. Betaab Valley\n";
            cout << "2. Chandwari\n";
            cout << "3. Lidder River\n";
            cout << "4. Baisaran\n";
            cout << "5. Pahalgam Golf Course\n";
            cout << "6. Tulian Lake\n";
            no_places = 6;
        }
        else if (sublocation == "Sonamarg")
        {
            cout << "1. Thajiwas Valley and Glacier\n";
            cout << "2. Vishansar Lake and Krishasar Lake\n";
            cout << "3. Batlal Valley\n";
            cout << "4. Gadsar Lake\n";
            cout << "5. Pahalgam Golf Course\n";
            cout << "6. Zoji La Pass\n";
            no_places = 6;
        }
        else if (sublocation == "Jaipur")
        {
            cout << "1. City Palace\n";
            cout << "2. Hawa Mahal\n";
            cout << "3. Amber Fort\n";
            cout << "4. Jantar Mantar\n";
            cout << "5. Nahargarh Fort\n";
            cout << "6. Chokhi Dhani\n";
            no_places = 6;
        }
        else if (sublocation == "Udaipur")
        {
            cout << "1. City Palace\n";
            cout << "2. Lake Pichola\n";
            cout << "3. Saheliyon ki Bari\n";
            cout << "4. Vintage Car Museum\n";
            cout << "5. Bagore ki Haveli\n";
            no_places = 5;
        }
        else if (sublocation == "Jodhpur")
        {
            cout << "1. Mehrangarh Fort\n";
            cout << "2. Umaid Bhawan Palace\n";
            cout << "3. Clock Tower and Sardar Market\n";
            cout << "4. Mandore Gardens\n";
            cout << "5. Mandaleshwar Temple\n";
            cout << "6. Osian\n";
            no_places = 6;
        }
        else if (sublocation == "Jaisalmer")
        {
            cout << "1. Jaisalmer Fort\n";
            cout << "2. Patwon ki Haveli\n";
            cout << "3. Sam Sand Dunes\n";
            cout << "4. Salim Singh ki Haveli\n";
            cout << "5. Gadisar Lake\n";
            no_places = 5;
        }
        else if (sublocation == "Pushkar")
        {
            cout << "1. Pushkar Lake\n";
            cout << "2. Brahma Temple\n";
            cout << "3. Pushkar Camel Fair\n";
            cout << "4. Savitri Temple\n";
            cout << "5. Pushkar Bazaar\n";
            cout << "6. Apteshwar Temple\n";
            no_places = 6;
        }
        else if (sublocation == "Agra")
        {
            cout << "1. Taj Mahal\n";
            cout << "2. Agra Fort\n";
            cout << "3. Fatehpur Sikri\n";
            cout << "4. Chandani Chowk\n";
            cout << "5. Jama Masjid\n";
            cout << "6. Akbar's Tomb\n";
            no_places = 6;
        }
        else if (sublocation == "Varanasi")
        {
            cout << "1. Dashashwamedh Ghat\n";
            cout << "2. Kashi Vishwanath Temple\n";
            cout << "3. Sarnath\n";
            cout << "4. Ramnagar Fort and Museum\n";
            cout << "5. Durga Temple\n";
            no_places = 5;
        }
        else if (sublocation == "Lucknow")
        {
            cout << "1. Bara Imambara\n";
            cout << "2. Rumi Darwaza\n";
            cout << "3. Hazratganj\n";
            cout << "4. Janeshwar Mishra Park\n";
            cout << "5. British Residency\n";
            no_places = 5;
        }
        else if (sublocation == "Ayodhya")
        {
            cout << "1. Ram Janmabhoomi\n";
            cout << "2. Hanumangarhi\n";
            cout << "3. Kamkot Fort\n";
            cout << "4. Kanak Bhawan\n";
            cout << "5. Guptar Ghat\n";
            no_places = 5;
        }
        else if (sublocation == "Mathura-Vrindavan")
        {
            cout << "1. Krishna Janmasthan Temple\n";
            cout << "2. Prem Mandir\n";
            cout << "3. ISKCON Temple\n";
            cout << "4. Kusum Sarovar\n";
            cout << "5. Radha Kund Shyam Kund\n";
            no_places = 5;
        }
        else if (sublocation == "Shimla")
        {
            cout << "1. Mall Road\n";
            cout << "2. Christ Church\n";
            cout << "3. Jakhu Hill and Temple\n";
            cout << "4. Viceregal Lodge\n";
            cout << "5. Kufri\n";
            cout << "6. Chadwick Falls\n";
            no_places = 6;
        }
        else if (sublocation == "Manali")
        {
            cout << "1. Hadimba Devi Temple\n";
            cout << "2. Solang Valley\n";
            cout << "3. Rohtold Manali Pass\n";
            cout << "4. Vashisht Hot Spring and Temple\n";
            cout << "5. Jogini Falls\n";
            no_places = 5;
        }
        else if (sublocation == "Dharamshala")
        {
            cout << "1. Dalai Lama Temple\n";
            cout << "2. Bhagsun Waterfall\n";
            cout << "3. Triund Trek\n";
            cout << "4. Dal Lake\n";
            cout << "5. St. John in the Wilderness Church\n";
            no_places = 5;
        }
        else if (sublocation == "Kullu Valley")
        {
            cout << "1. Manali\n";
            cout << "2. Kasol\n";
            cout << "3. Manikaran Sahib\n";
            cout << "4. Great Himalayan National Park\n";
            cout << "5. Khir Ganga\n";
            no_places = 5;
        }
        else if (sublocation == "Dalhousie")
        {
            cout << "1. Khajjiar\n";
            cout << "2. Dalhousie Cantonment\n";
            cout << "3. Kalatop Wildlife Sanctuary\n";
            cout << "4. Danikund Peak\n";
            cout << "5. Chamera Lake\n";
            no_places = 5;
        }

        int numPlaces;
        cout << "Enter the number of places you want to visit: ";
        cout << " " << endl;
        cin >> numPlaces;

        while (true)
        {
            if (numPlaces > 0 && numPlaces <= no_places)
            {
                cout << "Choose from the available places (enter the number):\n";
                for (int i = 0; i < numPlaces; ++i)
                {
                    int choice;
                    cin >> choice;
                    if (sublocation == "Mahabalipuram")
                        {
                            if (choice >= 1 && choice <= 5)
                            {
                                selectedPlaces.push_back(getMahabalipuramPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Pondicherry")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getPondicherryPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Madurai")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getMaduraiPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Ooty")
                        {
                            if (choice >= 1 && choice <= 7)
                            {
                                selectedPlaces.push_back(getOotyPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Kanyakumari")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getKanyakumariPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Munnar")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getMunnarPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Alleppey")
                        {
                            if (choice >= 1 && choice <= 7)
                            {
                                selectedPlaces.push_back(getAlleppeyPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Cochin")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getCochinPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Wayanad")
                        {
                            if (choice >= 1 && choice <= 7)
                            {
                                selectedPlaces.push_back(getWayanadPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Varkala")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getVarkalaPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Jaipur")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getJaipurPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Udaipur")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getUdaipurPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Jodhpur")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getJodhpurPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Jaisalmer")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getJaisalmerPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Pushkar")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getPushkarPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Srinagar")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getSrinagarPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Gulmarg")
                        {
                            if (choice >= 1 && choice <= 7)
                            {
                                selectedPlaces.push_back(getGulmargPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Pahalgam")
                        {
                            if (choice >= 1 && choice <= 7)
                            {
                                selectedPlaces.push_back(getPahalgamPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Sonamarg")
                        {
                            if (choice >= 1 && choice <= 5)
                            {
                                selectedPlaces.push_back(getSonamargPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Agra")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getAgraPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Varanasi")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getVaranasiPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Lucknow")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getLucknowPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Ayodhya")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getAyodhyaPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Mathura-Vrindavan")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getMathuraVrindavanPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Shimla")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getShimlaPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Manali")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getManaliPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Dharamshala")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getDharamshalaPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Kullu Valley")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getKulluValleyPlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                        else if (sublocation == "Dalhousie")
                        {
                            if (choice >= 1 && choice <= 6)
                            {
                                selectedPlaces.push_back(getDalhousiePlace(choice));
                            }
                            else
                            {
                                cout << "Invalid choice!\n";
                                --i;
                            }
                        }
                }
                break; // Exit the while loop if numPlaces is within the valid range
            }
            else
            {
                cout << "Invalid,Enter number of places you want to visit less than or equal to " << no_places << endl;
                cout << "Enter the number of places you want to visit: ";
                cout << " " << endl;
                cin >> numPlaces;
            }
            }
        }


        // Function to get the name of the selected place in Mahabalipuram
        string getMahabalipuramPlace(int choice)
        {
            switch (choice)
            {
            case 1:
                return "Shore Temple";
            case 2:
                return "Arjuna's Penance";
            case 3:
                return "Krishna's Butter Ball";
            case 4:
                return "Varaha Cave";
            case 5:
                return "Five Rathas";
            default:
                return "";
            }
        }
    // Function to get the name of a place in Pondicherry
    string getPondicherryPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Promenade Beach";
        case 2:
            return "Paradise Beach";
        case 3:
            return "French Colony";
        case 4:
            return "Botanical Gardens";
        case 5:
            return "Aurobindo Ashram";
        case 6:
            return "Serenity Beach";
        default:
            return "";
        }
    }

    // Define similar functions for other destinations
    // Function to get the name of a place in Madurai
    string getMaduraiPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Meenakshi Amman Temple";
        case 2:
            return "Thirumalai Nayakar Temple";
        case 3:
            return "Vaigai Dam";
        case 4:
            return "Alagar Temple";
        case 5:
            return "Gandhi Memorial Museum";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Ooty
    string getOotyPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Botanical Garden";
        case 2:
            return "Ooty Lake";
        case 3:
            return "Tea Factory and Museum";
        case 4:
            return "Avalanche Lake and Forest";
        case 5:
            return "Pine Forest";
        case 6:
            return "Pykara Waterfall";
        case 7:
            return "Dolphin's Nose";
        default:
            return "";
        }
    }

    string getKanyakumariPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Vivekanda Rock Memorial";
        case 2:
            return "Thiruvalluvar Statue";
        case 3:
            return "Kanyakumari Beaches";
        case 4:
            return "Suchindaram Thanumalayan Temple";
        case 5:
            return "Padmanabapuram Palace";
        case 6:
            return "Mathur Thottipalam";
        default:
            return "";
        }
    }

    string getMunnarPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Eravikulam National Park";
        case 2:
            return "Tea Plantations";
        case 3:
            return "Top Station";
        case 4:
            return "Kundala Dam and Lake";
        case 5:
            return "Mattupetty Dam and Lake";
        case 6:
            return "Chitirapuram Viewpoint";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Alleppey
    string getAlleppeyPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Alleppey Backwaters";
        case 2:
            return "Alleppey Beach";
        case 3:
            return "Kuttanad Backwaters";
        case 4:
            return "Snakeboat Race (August)";
        case 5:
            return "Krishnapuram Palace";
        case 6:
            return "Ambalapuzha Sree Krishna Temple";
        case 7:
            return "St. Mary's Forane Church";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Cochin
    string getCochinPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Fort Kochi";
        case 2:
            return "Marine Drive";
        case 3:
            return "Kerala Kathakali Center";
        case 4:
            return "Cherai Beach";
        case 5:
            return "Hill Palace Museum";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Wayanad
    string getWayanadPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Phantom Rock";
        case 2:
            return "Kuruvadweep (Kuruva Island)";
        case 3:
            return "Chembra Peak";
        case 4:
            return "Banasura Sagar Dam";
        case 5:
            return "Vellarimala Zipline and Zip Cycling";
        case 6:
            return "Kurumbalakotta Viewpoint";
        case 7:
            return "Meenmutty Waterfalls";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Varkala
    string getVarkalaPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Varkala Beach";
        case 2:
            return "Varkala Cliff";
        case 3:
            return "Ponnumthuruthu Island";
        case 4:
            return "Kappil Beach";
        case 5:
            return "Jatayu's Earth Center";
        case 6:
            return "Anjengo Fort";
        default:
            return "";
        }
    }
    string getShimlaPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Mall Road";
        case 2:
            return "Christ Church";
        case 3:
            return "Jakhu Hill and Temple";
        case 4:
            return "Viceregal Lodge";
        case 5:
            return "Kufri";
        case 6:
            return "Chadwick Falls";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Manali
    string getManaliPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Hadimba Devi Temple";
        case 2:
            return "Solang Valley";
        case 3:
            return "Rohtang Pass";
        case 4:
            return "Vashisht Hot Spring and Temple";
        case 5:
            return "Jogini Falls";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Dharamshala
    string getDharamshalaPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Dalai Lama Temple";
        case 2:
            return "Bhagsun Waterfall";
        case 3:
            return "Triund Trek";
        case 4:
            return "Dal Lake";
        case 5:
            return "St. John in the Wilderness Church";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Kullu Valley
    string getKulluValleyPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Kasol";
        case 2:
            return "Manikaran Sahib";
        case 3:
            return "Great Himalayan National Park";
        case 4:
            return "Khir Ganga";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Dalhousie
    string getDalhousiePlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Khajjiar";
        case 2:
            return "Dalhousie Cantonment";
        case 3:
            return "Kalatop Wildlife Sanctuary";
        case 4:
            return "Danikund Peak";
        case 5:
            return "Chamera Lake";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Agra
    string getAgraPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Taj Mahal";
        case 2:
            return "Agra Fort";
        case 3:
            return "Fatehpur Sikri";
        case 4:
            return "Chandanichowk";
        case 5:
            return "Jama Masjid";
        case 6:
            return "Akbar's Tomb";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Varanasi
    string getVaranasiPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Dashashwamedh Ghat";
        case 2:
            return "Kashi Vishwanath Temple";
        case 3:
            return "Sarnath";
        case 4:
            return "Ramnagar Fort and Museum";
        case 5:
            return "Durga Temple";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Lucknow
    string getLucknowPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Bara Imambara";
        case 2:
            return "Rumi Darwaza";
        case 3:
            return "Hazratganj";
        case 4:
            return "Janeshwar Mishra Park";
        case 5:
            return "British Residency";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Ayodhya
    string getAyodhyaPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Ramjanmabhoomi";
        case 2:
            return "Hanumangarhi";
        case 3:
            return "Kamkot Fort";
        case 4:
            return "Kanak Bhawan";
        case 5:
            return "Guptar Ghat";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Mathura-Vrindavan
    string getMathuraVrindavanPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Krishna Janmasthan Temple";
        case 2:
            return "Prem Mandir";
        case 3:
            return "ISKCON Temple";
        case 4:
            return "Kusum Sarovar";
        case 5:
            return "Radha Kund and Shyam Kund";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Srinagar
    string getSrinagarPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Dal Lake";
        case 2:
            return "Shalimar";
        case 3:
            return "Pari Mahal";
        case 4:
            return "Tulip Garden";
        case 5:
            return "Dachigam National Park";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Gulmarg
    string getGulmargPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Gulmarg Gondola";
        case 2:
            return "Apharwat Peak and Lake";
        case 3:
            return "Gulmarg Golf Course";
        case 4:
            return "Ningle Nallah";
        case 5:
            return "Gulmarg Biosphere Reserve";
        case 6:
            return "Strawberry Valley";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Pahalgam
    string getPahalgamPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Betaab Valley";
        case 2:
            return "Chandwari";
        case 3:
            return "Lidder River";
        case 4:
            return "Baisaran";
        case 5:
            return "Pahalgam Golf Course";
        case 6:
            return "Tulian Lake";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Sonamarg
    string getSonamargPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Thajiwas Valley and Glacier";
        case 2:
            return "Vishansar Lake and Krishnasar Lake";
        case 3:
            return "Baltal Valley";
        case 4:
            return "Gadsar Lake";
        case 5:
            return "Zoji La Pass";
        default:
            return "";
        }
    }
    // Function to get the name of a place in Jaipur
    string getJaipurPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "City Palace";
        case 2:
            return "Hawa Mahal";
        case 3:
            return "Amber Fort";
        case 4:
            return "Jantar Mantar";
        case 5:
            return "Nahargarh Fort";
        case 6:
            return "Chokhi Dhani";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Udaipur
    string getUdaipurPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "City Palace";
        case 2:
            return "Lake Pichola";
        case 3:
            return "Saheliyon ki Bari";
        case 4:
            return "Vintage Car Museum";
        case 5:
            return "Bagore ki Haveli";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Jodhpur
    string getJodhpurPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Mehrangarh Fort";
        case 2:
            return "Umaid Bhawan Palace";
        case 3:
            return "Clock Tower and Sardar Market";
        case 4:
            return "Mandore Gardens";
        case 5:
            return "Mandaleshwar Temple";
        case 6:
            return "Osian";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Jaisalmer
    string getJaisalmerPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Jaisalmer Fort";
        case 2:
            return "Patwon ki Haveli";
        case 3:
            return "Sam Sand Dunes";
        case 4:
            return "Salim Singh ki Haveli";
        case 5:
            return "Gadisar Lake";
        default:
            return "";
        }
    }

    // Function to get the name of a place in Pushkar
    string getPushkarPlace(int choice)
    {
        switch (choice)
        {
        case 1:
            return "Pushkar Lake";
        case 2:
            return "Brahma Temple";
        case 3:
            return "Pushkar Camel Fair";
        case 4:
            return "Savitri Temple";
        case 5:
            return "Pushkar Bazaar";
        case 6:
            return "Aptaeshwar Temple";
        default:
            return "";
        }
    }

    // Define similar functions for other destinations

    // Function to display the selected places
    void displaySelectedPlaces()
    {
        cout << " "<<endl;
        cout << "YOU HAVE SELECTED THE FOLLOWING PLACES TO VISIT:\n";
        for (string &place : selectedPlaces)
        {
            cout << "- " << place << endl;
        }
    }
};
int People=0;
class Customer
{

protected:
    int customerID;
    string name;
    string contact;
    int dd, mm, yyyy;
    string gender;
    string email;
    string state;
    string pincode;
    string country;
    

public:
    
    void displayDetails()
    {
        cout << "CustomerID     : " << customerID << endl;
        cout << "Name           : " << name << endl;
        cout << "Contact Number : " << contact << endl;
        cout << "Date of birth  : " << dd << "-" << mm << "-" << yyyy << endl;
        cout << "Gender         : " << gender << endl;
        cout << "Number of People : "<< People <<endl;
        cout << "Email Id       : " << email << endl;
        cout << "Address        : " << state << "," << country << endl;
        cout << "Pincode        : " << pincode << endl;
    }
    void displayCustomerDetailsInvoice()
    {
        cout << "                                      |          CustomerID     : " << customerID << endl;
        cout << "                                      |          Name           : " << name <<endl;
        cout << "                                      |          Contact Number : " << contact<< endl;
        cout << "                                      |          Date of birth  : " << dd << "-" << mm << "-" << yyyy <<endl;
        cout << "                                      |          Gender         : " << gender <<endl;
        cout << "                                      |          Number of People:          : " << People <<endl;
        cout << "                                      |          Email Id       : " << email <<endl;
        cout << "                                      |          Address        : " << state << "," << country<<endl;
        cout << "                                      |          Pincode        : " << pincode <<endl;
        cout<<"                                      |___________________________________________________________________"<<endl;
    }
    int GenerateCustomerId()
    {
        random_device rd;                         // Used to obtain a seed for the random number engine
        mt19937 gen(rd());                        // Standard mersenne_twister_engine seeded with rd()
        uniform_int_distribution<> distr(1, 100); // Define the range
        int CustomerId = distr(gen);              // Generate random number
        return CustomerId;
    }
    bool isValidPincode(string pincode)
    {
        if (pincode.length() != 6)
        {
            return false; // Pincode must be exactly 6 characters long
        }

        for (char c : pincode)
        {
            if (!isdigit(c))
            {
                return false; // If any character is not a digit, return false
            }
        }

        return true; // All characters are digits, so return true
    }

    bool isValidGender(string str)
    {
        if (str == "Male" || str == "male")
        {
            return true;
        }
        else if (str == "Female" || str == "female")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isValidEmail(string mail)
    {
        int atPos = mail.find('@');
        int spacePos = mail.find(' ');

        // Check if ".com" is at the end of the email address
        int dotComPos = mail.rfind(".com");
        bool dotComAtEnd = (dotComPos != -1 && dotComPos == mail.length() - 4);

        if (atPos != -1 && spacePos == -1 && dotComAtEnd)
        {
            return true;
        }
        return false;
    }
    bool isValidDate(int day, int month, int year)
    {
        // Checking the validity of year
        if (year < 1000 || year > 3000)
            return false;

        // Checking the validity of month
        if (month < 1 || month > 12)
            return false;

        // Checking the validity of day
        if (day < 1 || day > 31)
            return false;

        // Checking for months with 30 days
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        // Checking for February
        if (month == 2)
        {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (day > 29 || (day == 29 && !isLeapYear))
                return false;
        }
        // If date is valid
        return true;
    }
    bool isValidContactNumber(string str)
    {
        if (str.length() != 10)
        {
            return false;
        }
        for (int i = 0; i < 10; i++)
        {
            char c = str[i];
            if (!isdigit(c))
            {
                return false;
            }
        }
        return true;
    }
    int numberofPeople()
    {
        return People;
    }
    void inputDetails()
    {
        cout << "Enter your Name : " << endl;
        cin.ignore();
        getline(cin, name);

        bool containsDigits = false;
        for (char c : name)
        {
            if (isdigit(c))
            {
                containsDigits = true;
                break;
            }
        }

        while (containsDigits)
        {
            cout << "Invalid name, please enter a valid name: ";
            getline(cin, name);
            containsDigits = false;
            for (char c : name)
            {
                if (isdigit(c))
                {
                    containsDigits = true;
                    break;
                }
            }
        }

        cout << "Enter the name of your country : " << endl;
        getline(cin, country);
        cout << "Enter the name of your state : " << endl;
        getline(cin, state);
        cout << "Enter your contact number : " << endl;
        getline(cin, contact);


        while (true)
        {
            if (isValidContactNumber(contact) != true)
            {
                cout << "Invalid contact number,Enter your contact number again" << endl;
                getline(cin, contact);
            }
            else
            {
                break;
            }
            
        }
        cout << "Enter number of people travelling" << endl;
        cin >> People;
        cout << "Enter your Date of Birth as DD MM YYYY" << endl;
        cin >> dd >> mm >> yyyy;
        while (true)
        {
            if (isValidDate(dd, mm, yyyy) != true)
            {
                cout << "Invalid Date of Birth,Enter your Date of Birth again" << endl;
                cin >> dd >> mm >> yyyy;
            }
            else
            {
                break;
            }
        }
        cout << "Please enter your gender (Male/Female) : " << endl;
        cin >> gender;
        while (true)
        {
            if (isValidGender(gender) != true)
            {
                cout << "Invalid gender,Enter your gender again" << endl;
                cin >> gender;
            }
            else
            {
                break;
            }
        }
        cout << "Enter an email address : " << endl;
        cin >> email;
        while (true)
        {
            if (isValidEmail(email) != true)
            {
                cout << "Invalid email address,Enter again" << endl;
                cin >> email;
            }
            else
            {
                break;
            }
        }
        cout << "Enter Pincode : " << endl;
        cin >> pincode;
        cout << " "<<endl;
        while (true)
        {
            if (isValidPincode(pincode) != true)
            {
                cout << "Invalid Pincode,Enter again" << endl;
                cin >> pincode;
            }
            else
            {
                break;
            }
        }
        customerID = GenerateCustomerId();
    }
};

string generateInvoiceNumber()
{
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 10000 and 99999
    int randomNumber = rand() % 90000 + 10000;

    // Convert the random number to a string
    ostringstream oss;
    oss << randomNumber;

    // Add a prefix or suffix to the invoice number if needed
    string invoiceNumber = "INV" + oss.str();

    return invoiceNumber;
}

int stateChoice;
class Package
{
public:
    virtual void display() = 0;
    virtual double calculateCost(int choice) = 0;
};

class InputPackage : public Package, public Customer
{
public:
    void display() override
    {
        cout << ' ' << endl;
        cout << "Select a state for tourism package: " << endl;
        cout << "1. Tamil Nadu" << endl;
        cout << "2. Kerala" << endl;
        cout << "3. Goa" << endl;
        cout << "4. Rajasthan" << endl;
        cout << "5. Jammu And Kashmir" << endl;
        cout << "6. Uttar Pradesh" << endl;
        cout << "7. Himachal Pradesh" << endl;
        cout << "Enter your choice(Enter a value less than 7): ";
        
        cin >> stateChoice;

        // Add options for other states
    }
    void displayItinerary(int choice)
    {
        switch (choice)
        {
        case 1:
            cout << "\nItinerary for Tamil Nadu - Package " << choice << ":" << endl;
            cout << "Day 1: Visit Chennai" << endl;
            cout << "Day 2: Explore Mahabalipuram" << endl;
            cout << "Day 3: Enjoy Pondicherry" << endl;
            break;
        case 2:
            cout << "\nItinerary for Kerala - Package " << choice << ":" << endl;
            cout << "Day 1: Explore Kochi" << endl;
            cout << "Day 2: Visit Munnar" << endl;
            cout << "Day 3: Enjoy Alleppey" << endl;
            break;
        case 3:
            cout << "\nItinerary for Goa - Package " << choice << ":" << endl;
            cout << "Day 1: Visit Calangute Beach" << endl;
            cout << "Day 2: Explore Baga Beach" << endl;
            cout << "Day 3: Visit Chapora Fort" << endl;
            break;
        case 4:
            cout << "\nItinerary for Rajasthan - Package " << choice << ":" << endl;
            cout << "Day 1: Explore City Palace" << endl;
            cout << "Day 2: Visit Hawa Mahal" << endl;
            cout << "Day 3: Explore Amber Fort" << endl;
            break;
        case 5:
            cout << "\nItinerary for Jammu and Kashmir - Package " << choice << ":" << endl;
            cout << "Day 1: Visit Srinagar" << endl;
            cout << "Day 2: Explore Gulmarg" << endl;
            cout << "Day 3: Enjoy Pahalgam and Sonamarg" << endl;
            break;
        case 6:
            cout << "\nItinerary for Uttar Pradesh - Package " << choice << ":" << endl;
            cout << "Day 1: Explore Agra" << endl;
            cout << "Day 2: Visit Varanasi" << endl;
            cout << "Day 3: Explore Lucknow, Ayodhya, and Mathura" << endl;
            break;
        case 7:
            cout << "\nItinerary for Himachal Pradesh - Package " << choice << ":" << endl;
            cout << "Day 1: Explore Shimla" << endl;
            cout << "Day 2: Visit Manali" << endl;
            cout << "Day 3: Explore Dharmshala, Kullu Valley, and Dalhousie" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    double calculateCost(int choice) override
    {
        int packageChoice;
        double cost = 0.0;

        do
        {
            cout << " " << endl;
            cout << "Select a package for the state: " << endl;
            cout << "1. Package 1 (Airplane package)" << endl;
            cout << "2. Package 2 (Railway Package)" << endl;
            cout << "Enter your choice: ";
            cout << " " << endl;
            cin >> packageChoice;

            switch (packageChoice)
            {
            case 1:
                cost = calculatePackage1Cost(choice);
                break;
            case 2:
                cost = calculatePackage2Cost(choice);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
            }

            if (cost != 0.0)
            {
                char option;
                cout<<" "<<endl;
                cout << "Options:" << endl;
                cout << "1. Continue with this package?" << endl
                     << "proceed to Generate Invoice:" << endl;
                cout << "2. Go back to select package." << endl;
                cout<<" "<<endl;
                cout << "Enter your choice: ";
                cin >> option;

                if (option == '2')
                {
                    cost = 0.0; // Reset cost if user chooses to go back
                }

                else if (option == '1')
                {
                    cout << "\n--------------------- Itinerary ---------------------\n";
                    displayItinerary(stateChoice);
                }
            }
        } while (cost == 0.0); // Repeat until a valid package is selected

        return cost;
    }

    double calculatePackage1Cost(int choice)
    {
        switch (choice)
        {
        case 1:
            cout << "_____________________Tourism Package for Tamil Nadu - Package 1______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Chennai, Mahabalipuram, Pondicherry" << endl;
            cout << "Travelling mode      : Airplane" << endl;
            cout << "Type                 : Economy" << endl;
            cout << "Time                 : 01:00 AM" << endl;
            cout << "Cost                 : Rs." << 45000 + 3000 << endl;
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Paradise Resort" << endl;
            cout << "Type                 : 2-star" << endl;
            cout << "Cost                 : Rs 3000" << endl;
            cout << "______________________________________________________________________________________" << endl;
            return 48000;
        case 2:
            cout << "_____________________Tourism Package for Kerala - Package 1______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Kochi, Munnar, Alleppey" << endl;
            cout << "Travelling mode      : Airplane" << endl;
            cout << "Type                 : Economy" << endl;
            cout << "Time                 : 01:00 AM" << endl;
            cout << "Cost                 : Rs." << 50000 + 4000 << endl;
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Riverside Inn" << endl;
            cout << "Type                 : 3-star" << endl;
            cout << "Cost                 : Rs 4000" << endl;
            cout << "______________________________________________________________________________________" << endl;
            return 54000;

        case 3:
            cout << "_____________________Tourism Package for Goa______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Calangute Beach, Baga Beach, Basilica of Bom Jesus, Bondla Wildlife Sanctuary, Chapora Fort" << endl;
            cout << "Travelling mode      : Airplane" << endl;
            cout << "Type                 : Economy" << endl;
            cout << "Time                 : 09:00 AM" << endl;     // assuming the time, you can change as needed
            cout << "Cost                 : Rs." << 55000 << endl; // adjusting the cost as per the destinations
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Goa Beach Resort" << endl; // assuming the hotel name
            cout << "Type                 : 4-star" << endl;           // assuming the hotel type
            cout << "Cost                 : Rs 7000" << endl;          // assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 62000; // adjusted total cost including hotel

        case 4:
            cout << "_____________________Tourism Package for Rajasthan______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Jaipur, Udaipur, Jodhpur, Jaisalmer, Pushkar" << endl;
            cout << "Travelling mode      : Airplane" << endl;     // Assuming train travel
            cout << "Type                 : Standard" << endl;     // Assuming standard class
            cout << "Time                 : 08:00 AM" << endl;     // Assuming departure time
            cout << "Cost                 : Rs." << 60000 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Royal Heritage Hotel" << endl; // Assuming the hotel name
            cout << "Type                 : 5-star" << endl;               // Assuming the hotel type
            cout << "Cost                 : Rs 8000" << endl;              // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 68000; // Adjusted total cost including hotel

        case 5:
            cout << "_____________________Tourism Package for Jammu and Kashmir______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Srinagar, Gulmarg, Pahalgam, Sonamarg" << endl;
            cout << "Travelling mode      : Airplane" << endl;     // Assuming bus travel
            cout << "Type                 : Standard" << endl;     // Assuming standard class
            cout << "Time                 : 07:00 AM" << endl;     // Assuming departure time
            cout << "Cost                 : Rs." << 55000 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Kashmir Valley Resort" << endl; // Assuming the hotel name
            cout << "Type                 : 4-star" << endl;                // Assuming the hotel type
            cout << "Cost                 : Rs 6000" << endl;               // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 61000; // Adjusted total cost including hotel

        case 6:
            cout << "_____________________Tourism Package for Uttar Pradesh______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Agra, Varanasi, Lucknow, Ayodhya, Mathura-Vrindavan" << endl;
            cout << "Travelling mode      : Airplane" << endl;     // Assuming train travel
            cout << "Type                 : Economy" << endl;      // Assuming economy class
            cout << "Time                 : 08:00 AM" << endl;     // Assuming departure time
            cout << "Cost                 : Rs." << 48000 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Taj Heritage Hotel" << endl; // Assuming the hotel name
            cout << "Type                 : 3-star" << endl;             // Assuming the hotel type
            cout << "Cost                 : Rs 3500" << endl;            // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 53500; // Adjusted total cost including hotel

        case 7:
            cout << "_____________________Tourism Package for Himachal Pradesh______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Shimla, Manali, Dharamshala, Kullu Valley, Dalhousie" << endl;
            cout << "Travelling mode      : Airplane" << endl;     // Assuming bus travel
            cout << "Type                 : Standard" << endl;     // Assuming standard class
            cout << "Time                 : 07:00 AM" << endl;     // Assuming departure time
            cout << "Cost                 : Rs." << 58000 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Himalayan Retreat" << endl; // Assuming the hotel name
            cout << "Type                 : 4-star" << endl;            // Assuming the hotel type
            cout << "Cost                 : Rs 5000" << endl;           // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 63000; // Adjusted total cost including hotel

        default:
            cout << "Invalid choice" << endl;
            return 0.0;
        }
    }

    double calculatePackage2Cost(int choice)
    {
        switch (choice)
        {
        case 1:

            cout << "_____________________Tourism Package for Tamil Nadu - Package 2______________________" << endl;
            cout << " " << endl;

            cout << "Places covered       : Madurai, Rameswaram" << endl;
            cout << "  Package Cost         : Rs. 45200" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Superfast" << endl;  // Assuming standard class
            cout << "Time                 : 9:00 AM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 800 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Paradise Resort" << endl; // Assuming the hotel name
            cout << "Type                 : 2-star" << endl;          // Assuming the hotel type
            cout << "Cost                 : Rs 3000" << endl;         // Assuming the hotel cost per night

            cout << "______________________________________________________________________________________" << endl;
            return 49000; // Adjusted total cost including hote
        case 2:

            cout << "_____________________Tourism Package for Kerala - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Trivandrum, Thekkady" << endl;
            cout << "  Package Cost         : Rs. 54100" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Superfast" << endl;  // Assuming standard class
            cout << "Time                 : 3:00 AM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 900 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Riverside Inn" << endl; // Assuming the hotel name
            cout << "Type                 : 3-star" << endl;        // Assuming the hotel type
            cout << "Cost                 : Rs 4000" << endl;       // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 59000; // Adjusted total cost including hote
        case 3:
            cout << "____________________Tourism Package for Goa - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Vasco da Gama, Anjuna Beach, Dudhsagar Falls" << endl;
            cout << "  Package Cost         : Rs. 43400" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Express" << endl;    // Assuming standard class
            cout << "Time                 : 5:00 PM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 600 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Emerald Heights" << endl; // Assuming the hotel name
            cout << "Type                 : 3-star" << endl;          // Assuming the hotel type
            cout << "Cost                 : Rs 4000" << endl;         // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 48000; // Adjusted total cost including hote
        case 4:
            cout << "____________________Tourism Package for Rajasthan - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Jaisalmer, Udaipur, Jodhpur" << endl;
            cout << "  Package Cost         : Rs. 29400" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Express" << endl;    // Assuming standard class
            cout << "Time                 : 7:00 PM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 600 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Imperial Tower" << endl; // Assuming the hotel name
            cout << "Type                 : 3-star" << endl;         // Assuming the hotel type
            cout << "Cost                 : Rs 5500" << endl;        // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 35500; // Adjusted total cost including hote
        case 5:
            cout << "____________________Tourism Package for Jammu and Kashmir - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Leh, Ladakh, Kargil" << endl;
            cout << "  Package Cost         : Rs. 39200" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Superfast" << endl;  // Assuming standard class
            cout << "Time                 : 4:00 PM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 800 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Tranquil Haven Inn" << endl; // Assuming the hotel name
            cout << "Type                 : 4-star" << endl;             // Assuming the hotel type
            cout << "Cost                 : Rs 5000" << endl;            // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 45000; // Adjusted total cost including hote
        case 6:
            cout << "Tourism Package for Uttar Pradesh - Package 2:" << endl;
            cout << "Places covered: Allahabad, Vrindavan, Sarnath" << endl;
            cout << "Travelling option: Train (Type: Superfast, Time: 1:00 AM)" << endl;
            cout << "Hotel: Type - 4-star, Name - Grand Plaza Hotel, Cost: ₹6000" << endl;
            cout << "Cost: Rs." << 38000 << endl;
            return 38000;
            cout << "____________________Tourism Package for Uttar Pradesh - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Allahabad, Vrindavan, Sarnath" << endl;
            cout << "  Package Cost         : Rs. 31200" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Superfast" << endl;  // Assuming standard class
            cout << "Time                 : 1:00 AM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 800 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Grand Plaza Hotel" << endl; // Assuming the hotel name
            cout << "Type                 : 4-star" << endl;            // Assuming the hotel type
            cout << "Cost                 : Rs 6000" << endl;           // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 38000; // Adjusted total cost including hote
        case 7:
            cout << "____________________Tourism Package for Himachal Pradesh - Package 2______________________" << endl;
            cout << " " << endl;
            cout << "Places covered       : Spiti Valley, Kasol, Khajjiar" << endl;
            cout << "  Package Cost         : Rs. 17700" << endl;
            cout << "Travelling mode      : Train" << endl;      // Assuming bus travel
            cout << "Type                 : Express" << endl;    // Assuming standard class
            cout << "Time                 : 2:00 PM" << endl;    // Assuming departure time
            cout << "Cost                 : Rs." << 900 << endl; // Adjusted cost
            cout << " " << endl;
            cout << "HOTEL " << endl;
            cout << "Name                 : Plaza Square Hotel" << endl; // Assuming the hotel name
            cout << "Type                 : 4-star" << endl;             // Assuming the hotel type
            cout << "Cost                 : Rs 8000" << endl;            // Assuming the hotel cost per night
            cout << "______________________________________________________________________________________" << endl;
            return 26000; // Adjusted total cost including hote
        default:
            cout << "Invalid choice" << endl;
            return 0.0;
        }
    }
    double costt;

    void cal()
    {
        costt = calculateCost(stateChoice);
    }
    void displayInvoice()
    {
        if (costt != 0.0)
        {
            cout << "\n----------------------- Invoice -----------------------\n";
            cout << setw(20) << left << "Selected Package: "
                 << "Package " << stateChoice << endl;
            cout << setw(20) << left << "Total Cost: "
                 << "Rs." << fixed << setprecision(2) << costt << endl;
            cout << "-------------------------------------------------------\n";
        }
    }
};

class Invoice : public HotelBooking, public Travel, public Special_packages, public Customer
{

public:
    int hotelCost = CostOfHotels();
    int travelCost = costOfTravel();
    int SpecialCost = total_special_package_cost();
    
    int displayCostForNumber()
    {
       
        return ((hotelCost + travelCost + SpecialCost)*People);
    }
    int displayCostFOrOne(){
        return ((hotelCost + travelCost + SpecialCost));
    }

};

int main()
{

    // Object instantiation
    Destination dt;
    HotelBooking hb;
    Travel tl;
    Special_packages sp;

    // Display state name and sublocations
    cout<<"                                              WELCOME TO TRAVELGO"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;cout<<" "<<endl;
    cout << "Do you want to go with our specific packagess or do you want to customize your trip?" << endl;
    cout << "1.Packages" << endl;
    cout << "2.Trip Customization" << endl;
    int mainChoice = 0;
    cout << "Enter Choice: ";
    cout << " " <<endl;
    cin >> mainChoice;

    if (mainChoice != 1 && mainChoice != 2)
    {
        do
        {
            cout << "Invalid Choice Please enter the correct option." << endl;
            cout << "Enter Choice: ";
            cout <<  "   "<<endl;
            cin >> mainChoice;
        } while (mainChoice != 1 && mainChoice != 2);
    }

    if (mainChoice > 0 && mainChoice < 3)
    {
        if (mainChoice == 1)
        {
            InputPackage package;
            Customer cd;
            cd.inputDetails();
            cin.ignore();
            package.display();
            package.cal();
            cout << " " << endl;
            cd.displayDetails();
            package.displayInvoice();
        }
        else
        {
            Customer customer;
            customer.inputDetails();
            cout << " " <<endl;
            Sublocation sub;
            

            sub.displayStateName();
            sub.displaySublocations();

            // places to visit
            PlacesToVisit pt;
            sub.selectSublocation(); // Create an object of the PlacesToVisit class
            string sublocation = sub.selectSublocation();
            pt.displayPlaces(sublocation);
            pt.displaySelectedPlaces();

            // Display menu for selected sublocation
            sub.displayMenu();
            cout<<"                                       ____________________________________________________________________"<<endl;
            cout<<"                                      |                            TOTAL BILL                            |"<<endl;
            cout <<"                                      "<<"|_____________________________ INVOICE______________________________|" << endl;
            cout <<"                                      " <<"|                                                                   " << endl;
            string invoiceNumber = generateInvoiceNumber();
            cout <<"                                      "<<"|          Invoice Number " << invoiceNumber <<"                                           "<< endl;
            cout <<"                                      "<<"|                                                                   " << endl;
            cout <<"                                      "<<"|__________________________CUSTOMER DETAILS_________________________";
            cout <<"                                      "<<endl;
            customer.displayCustomerDetailsInvoice();
            //cout <<"                                      "<<"|                                                                   |" << endl;
            
            cout <<"                                      "<<"|____________________________DESTINATION____________________________|" << endl;
            cout <<"                                      "<<"|                                                                   " << endl;
            cout <<"                                      "<<"|          State          : " << sub.state() <<"                                                "<<endl;
            cout <<"                                      "<<"|          Sublocation    : " << sub.selected <<"                                        "<<endl;
            cout <<"                                      "<<"|                                                                   " << endl;
            cout <<"                                      "<<"|____________________________HOTEL DETAILS__________________________|" << endl;
            cout <<"                                      "<<"| " <<"                                                                  "<< endl;
            //cout<<"                                          "<<endl;
            hb.displayHotelInfoInvoice();
            cout <<"                                      "<<"|                                                                   " << endl;
            cout <<"                                      "<<"|____________________________TRAVEL DETAILS_________________________|" << endl;
            cout << "                                      |                                                                   " << endl;
            cout << "                                      |   Mode of Transportation   : " << tl.getMode() <<"                 "<< endl;
            cout << "                                      |   Transport Info           : " << tl.TransportName() <<"           "<< endl;
            cout <<"                                      "<<"|                                                                   " << endl;
            cout <<"                                      "<<"|_______________________ADDITIONAL EXPERIENCES______________________|" << endl;
            cout << "                                      |                                                                   " << endl;
            sub.displayActivitiesInvoice();
            cout << "                                      |                                                                   " << endl;
            cout <<"                                      "<<"|______________________________EXPENSES___________________________|" << endl;

            Invoice iv;
            int result1 = iv.displayCostFOrOne();
            int result2 = iv.displayCostForNumber();
            cout << "                                      |                                                                   "<<endl;
            cout << "                                      |         "<< "Cost per Person : " << result1 <<"         "<< endl;
            cout << "                                      |         "<< "Total Cost      : " << result2 <<"         "<< endl;
            cout << "                                      |___________________________________________________________________";
            
        }
    }
    

    return 0;
}
