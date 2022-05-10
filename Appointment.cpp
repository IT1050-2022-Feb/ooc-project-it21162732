#include <iostream>
#include<cstring>
#include "appointment.h"
using namespace std;
class appointment{
	private:
		char appNO[10];
		char appLocation[20];
		char appDate[10];
	public:
		appointment(){
			strcpy(appNO,"");
			strcpy(appLocation,"");	
			strcpy(appDate,"");
		}
		appointment(const char appointmentNO[], const char appointmentLO[], const char appointmentDate[]){
			strcpy(appNO,appointmentNO);
			strcpy(appLocation,appointmentLO);	
			strcpy(appDate,appointmentDate);	
		}
		void displayAppointmentDetails(){
			cout << "Appointment NO :" << appNO << endl;
       	 	cout << "Appointment Location :" << appLocation << endl;
       		cout << "Appointment Date :" << appDate << endl;
		}
		~appointment(){};
};
