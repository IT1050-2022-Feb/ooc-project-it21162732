class appointment
{
	private:
		char appNO;
		char appLocation;
		char appDate;
		
	Public:
		appointment();
		appointment(const char appointmentNO[], const char appointmentLO[], const char appointmentDate[]);
		
		void displayAppointmentDetails();
		~appointment();
};

#include <iostream>
#include<cstring>
#include "appointment.h"
using namespace std;

appointment::appointment(){
	strcpy(appNO,"");
	strcpy(appLocation,"");	
	strcpy(appDate,"");
}
appointment::appointment(char appointmentNO[], char appointmentLO[], char appointmentDate[]){
	strcpy(appNO,appointmentNO);
	strcpy(appLocation,appointmentLO);	
	strcpy(appDate,appointmentDate);	
}
void appointment::displayAppointmentDetails(){
	cout<<"Appointment NO:"<<appNO<<endl;
        cout<<"Appointment Location:"<<appLocation<<endl;
        cout<<"Appointment Date:"<<appDate<<endl;

}
appointment::~appointment(){}
